#include <hwlib.hpp>

#include "images.hpp"


int main( void ){
	namespace target = hwlib::target;

	auto scl = target::pin_oc( target::pins::scl );
	auto sda = target::pin_oc( target::pins::sda );

	auto i2c_bus = hwlib::i2c_bus_bit_banged_scl_sda( scl,sda );

	auto display = hwlib::glcd_oled( i2c_bus, 0x3c );

	display.clear();

	for (;;) {

		for( uint16_t y = 0; y < 64; ++y ) {
			for( uint16_t x = 0; x < 128; ++x ) {
				hwlib::color pixel;

				if ( image_1[ ( x + ( y * 128 ) ) / 8 ] < 128 ) {
					pixel = hwlib::white;
				}
				else {
					pixel = hwlib::black;
				}

				display.write( hwlib::xy( x, y ), pixel );

			}

		}

		hwlib::wait_ms( 5000 );

		display.flush();

		for( uint16_t y = 0; y < 64; ++y ) {
			for( uint16_t x = 0; x < 128; ++x ) {
				hwlib::color pixel;

				if ( image_2[ ( x + ( y * 128 ) ) / 8 ] < 128 ) {
					pixel = hwlib::white;
				}
				else {
					pixel = hwlib::black;
				}

				display.write( hwlib::xy( x, y ), pixel );

			}

		}

		hwlib::wait_ms( 5000 );

		display.flush();

		for( uint16_t y = 0; y < 64; ++y ) {
			for( uint16_t x = 0; x < 128; ++x ) {
				hwlib::color pixel;

				if ( image_3[ ( x + ( y * 128 ) ) / 8 ] < 128 ) {
					pixel = hwlib::white;
				}
				else {
					pixel = hwlib::black;
				}

				display.write( hwlib::xy( x, y ), pixel );

			}

		}

		hwlib::wait_ms( 5000 );

		display.flush();

		for( uint16_t y = 0; y < 64; ++y ) {
			for( uint16_t x = 0; x < 128; ++x ) {
				hwlib::color pixel;

				if ( image_4[ ( x + ( y * 128 ) ) / 8 ] < 128 ) {
					pixel = hwlib::white;
				}
				else {
					pixel = hwlib::black;
				}

				display.write( hwlib::xy( x, y ), pixel );

			}

		}

		hwlib::wait_ms( 5000 );

		display.flush();

	}

}
