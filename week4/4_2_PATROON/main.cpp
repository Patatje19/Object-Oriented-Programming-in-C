#include <hwlib.hpp>


int main ( void ) {
  auto led0 = hwlib::target::pin_out( hwlib::target::pins::d7 );
  auto led1 = hwlib::target::pin_out( hwlib::target::pins::d6 );
  auto led2 = hwlib::target::pin_out( hwlib::target::pins::d5 );
  auto led3 = hwlib::target::pin_out( hwlib::target::pins::d4 );

  for ( ;; ) {
    led0.write( 1 ); led1.write( 1 );
    hwlib::wait_ms( 800 );
    led0.write( 0 ); led1.write( 0 );
    hwlib::wait_ms( 800 );

    led0.flush(); led1.flush();

    led1.write( 1 ); led2.write( 1 );
    hwlib::wait_ms( 800 );
    led1.write( 0 ); led2.write( 0 );
    hwlib::wait_ms( 800 );

    led1.flush(); led2.flush();

    led2.write( 1 ); led3.write( 1 );
    hwlib::wait_ms( 800 );
    led2.write( 0 ); led3.write( 0 );
    hwlib::wait_ms( 800 );

    led2.flush(); led3.flush();

    led1.write( 1 ); led2.write( 1 );
    hwlib::wait_ms( 800 );
    led1.write( 0 ); led2.write( 0 );
    hwlib::wait_ms( 800 );

    led1.flush(); led2.flush();

  }

}
