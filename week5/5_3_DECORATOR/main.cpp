#include <hwlib.hpp>

#include "decorator.hpp"


int main ( void ) {
	auto ds	= hwlib::target::pin_out( hwlib::target::pins::d12 );
	auto shcp = hwlib::target::pin_out( hwlib::target::pins::d11 );
	auto stcp = hwlib::target::pin_out( hwlib::target::pins::d10 );
	auto spi	= hwlib::spi_bus_bit_banged_sclk_mosi_miso(
		stcp,
		ds,
		hwlib::pin_in_dummy
	);

	auto hc595_led = hwlib::hc595( spi, shcp );

	auto led0 = hwlib::target::pin_out( hwlib::target::pins::d7 );
	auto led1 = hwlib::target::pin_out( hwlib::target::pins::d6 );
	auto led2 = hwlib::target::pin_out( hwlib::target::pins::d5 );
	auto led3 = hwlib::target::pin_out( hwlib::target::pins::d4 );

	auto multipleLeds = hwlib::port_out_from(
		led0, led1, led2, led3,
		hc595_led.p1, hc595_led.p2,
		hc595_led.p3, hc595_led.p4
	);

	auto button0 = hwlib::target::pin_in( hwlib::target::pins::d8 );
	auto button1 = hwlib::target::pin_in( hwlib::target::pins::d9 );

	auto multipleButtons = andDecorator( button0, button1 );

	for (;;) {
		if ( !multipleButtons.read() ) {
			multipleLeds.write( 0xff );
		}
		else {
			multipleLeds.write( 0x00 );	
	}

	multipleLeds.flush();

	hwlib::wait_ms( 600 );

	}

}
