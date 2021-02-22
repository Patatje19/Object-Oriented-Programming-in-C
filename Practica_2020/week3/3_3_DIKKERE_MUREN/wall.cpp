#include "wall.hpp"


void rectangle::draw() {
   left.draw();
   right.draw();
   top.draw();
   bottom.draw();

}


void wall::draw() {
  if (!filled) {
    left.draw();
    right.draw();
    top.draw();
    bottom.draw();

  }
  else {
    for(int i = start_y; i < end_y + 1; i++) {
      for(int j = start_x; j < end_x + 1; j++) {
        w.write( hwlib::xy( j, i ), hwlib::color( 255, 215, 0 ) );
      }
    }

    w.flush();

  }

}


void wall::update() {
  if ( updateCounter == updateInterval ) {
    if ( filled == true ) {
      filled = false;
    }
    else {
      filled = true;
    }

    updateCounter = 0;

  }
  else{
    updateCounter++;
    
  }

}
