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

    hwlib::wait_ms( 200 );

  }

}

}


int main () {
  WDT -> WDT_MR = WDT_MR_WDDIS;

  auto led0 = hwlib::target::pin_out( hwlib::target::pins::d7 );
  auto led1 = hwlib::target::pin_out( hwlib::target::pins::d6 );
  auto led2 = hwlib::target::pin_out( hwlib::target::pins::d5 );
  auto led3 = hwlib::target::pin_out( hwlib::target::pins::d4 );

  auto button1 = hwlib::target::pin_in_out( hwlib::target::pins::d8 );
  auto button2 = hwlib::target::pin_in_out( hwlib::target::pins::d9 );

  auto multipleLeds = hwlib::port_out_from( led0, led1, led2, led3 );

  button::buttonPress( multipleLeds, button1, button2 );

}
