#include "victim.hpp"


void victim::draw(){
  rectangle rectangle_1( w, start_x, start_y, end_x, end_y );
  rectangle_1.draw();


}


void victim::interact( drawable & other ) {
  if( this != & other ) {
    if( overlaps( other ) ) {
      if( start_x <= end_x && start_y <= end_y ) {
        start_x += 1;
        start_y += 1;

        end_x -= 1;
        end_y -= 1;
      }
    }
  }

}
