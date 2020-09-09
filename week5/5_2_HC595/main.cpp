#include <hwlib.hpp>


namespace button {

void buttonPress (
	hwlib::port_out & multipleLeds,
	hwlib::pin_in_out & buttonMin,
	hwlib::pin_in_out & buttonPlus ) {

	uint8_t ledCount = 0;

	for ( ;; ) {
		if ( !buttonPlus.read() ) {
			if ( ledCount != 4 ) {
				ledCount = ledCount << 1;
				ledCount += 1;
			}
		}
		if ( !buttonMin.read() ) {
			ledCount = ledCount >> 1;
		}

		multipleLeds.write( ledCount );

		multipleLeds.flush();

		hwlib::wait_ms( 200 );

	}

}

}


int main () {
	namespace target = hwlib::target;

	auto ds   = target::pin_out( target::pins::d12 );
	auto shcp = target::pin_out( target::pins::d11 );
	auto stcp = target::pin_out( target::pins::d10 );
	auto spi  = hwlib::spi_bus_bit_banged_sclk_mosi_miso(
		stcp,
		ds,
		hwlib::pin_in_dummy
	);

	auto hc595_led = hwlib::hc595( spi, shcp );

	auto led0 = hwlib::target::pin_out( hwlib::target::pins::d7 );
	auto led1 = hwlib::target::pin_out( hwlib::target::pins::d6 );
	auto led2 = hwlib::target::pin_out( hwlib::target::pins::d5 );
	auto led3 = hwlib::target::pin_out( hwlib::target::pins::d4 );

	auto button1 = hwlib::target::pin_in_out( hwlib::target::pins::d8 );
	auto button2 = hwlib::target::pin_in_out( hwlib::target::pins::d9 );

	auto multipleLeds = hwlib::port_out_from(
		led0, led1, led2, led3,
		hc595_led.p1, hc595_led.p2,
		hc595_led.p3, hc595_led.p4
	);

	button::buttonPress( multipleLeds, button1, button2 );

}
