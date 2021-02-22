#include <hwlib.hpp>

#include "filledRectangle.hpp"
#include "rectangle.hpp"


int main(int argc, char **argv) {
  hwlib::target::window w( hwlib::xy( 128, 64 ) );

  filled_rectangle square_1( w, 10, 10, 20, 20 );
  filled_rectangle square_2( w, 20, 20, 30, 30 );
  filled_rectangle square_3( w, 30, 30, 40, 40 );
  filled_rectangle square_4( w, 40, 40, 50, 50 );

  square_1.print();
  square_2.print();
  square_3.print();
  square_4.print();

  for(;;) { w.poll(); }

}
