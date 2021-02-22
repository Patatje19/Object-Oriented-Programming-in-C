#include "grafischObject.hpp"


void objectTrain::stars_print() {
  for (int i = 0; i < c_stars; i++) {
    hwlib::circle stars ( hwlib::xy( x_stars, 10 ), 1 );

    stars.draw( window );
    x_stars += 10;
  }

}


void objectTrain::print() {
  trainUnit_1.draw( window );
  wheel_1.draw( window );
  wheel_2.draw( window );

  trainUnit_2.draw( window );
  wheel_3.draw( window );
  wheel_4.draw( window );

  trainUnit_3.draw( window );
  wheel_5.draw( window );
  wheel_6.draw( window );

  trainUnit_4.draw( window );
  wheel_7.draw( window );
  wheel_8.draw( window );

  trainTrack.draw( window );
  trainConnector.draw( window );

  stars_print();

  window.flush();

}
