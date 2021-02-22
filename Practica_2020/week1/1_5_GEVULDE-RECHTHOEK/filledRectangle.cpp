#include "filledRectangle.hpp"


filled_rectangle::filled_rectangle(
  hwlib::window & w,
  int start_x, int start_y,
  int end_x, int end_y
):
  w( w ),

  start_x( start_x ),
  start_y( start_y ),

  end_x( end_x ),
  end_y( end_y )
{}


void filled_rectangle::print() {
  for(int i = start_y; i < end_y + 1; i++) {
    for(int j = start_x; j < end_x + 1; j++) {
      w.write( hwlib::xy( i, j ), hwlib::color( 255, 215, 0 ) );
    }
  }

  w.flush();

}
