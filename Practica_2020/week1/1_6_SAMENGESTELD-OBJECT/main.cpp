#include <hwlib.hpp>

#include "grafischObject.hpp"


int main(int argc, char **argv) {
  hwlib::target::window window_1 ( hwlib::xy( 128, 64 ) );
  hwlib::target::window window_2 ( hwlib::xy( 128, 64 ) );
  hwlib::target::window window_3 ( hwlib::xy( 128, 64 ) );
  hwlib::target::window window_4 ( hwlib::xy( 128, 64 ) );

  objectTrain train_1 ( window_1, 2 );
  objectTrain train_2 ( window_2, 4 );
  objectTrain train_3 ( window_3, 6 );
  objectTrain train_4 ( window_4, 8 );

  train_1.print();
  train_2.print();
  train_3.print();
  train_4.print();

  for(;;) { window_1.poll(); }
  for(;;) { window_2.poll(); }
  for(;;) { window_3.poll(); }
  for(;;) { window_4.poll(); }

}
