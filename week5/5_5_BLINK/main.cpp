#include <hwlib.hpp>

#include "invert.hpp"


int main ( void ) {
	auto ds   = hwlib::target::pin_out( hwlib::target::pins::d12 );
	auto shcp = hwlib::target::pin_out( hwlib::target::pins::d11 );
	auto stcp = hwlib::target::pin_out( hwlib::target::pins::d10 );
	auto spi  = hwlib::spi_bus_bit_banged_sclk_mosi_miso(
		stcp,
		ds,
		hwlib::pin_in_dummy
	);

	auto led5 = hwlib::hc595( spi, shcp );

	auto led0 = hwlib::target::pin_out( hwlib::target::pins::d7 );
	auto led1 = hwlib::target::pin_out( hwlib::target::pins::d6 );
	auto led2 = hwlib::target::pin_out( hwlib::target::pins::d5 );
	auto led3 = hwlib::target::pin_out( hwlib::target::pins::d4 );

	auto leds0 = invert( led0 );
	auto leds1 = invert( led1 );
	auto leds2 = invert( led2 );
	auto leds3 = invert( led3 );

	auto leds = hwlib::all_from_pin_out_t(
		leds0, leds1, leds2, leds3, led5.p1, led5.p2, led5.p3, led5.p4,
		hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy,
		hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy,
		hwlib::pin_out_dummy, hwlib::pin_out_dummy
	);

	hwlib::blink( leds );

}
