#include <hwlib.hpp>
#include <array>

#include "drawable.hpp"
#include "wall.hpp"
#include "shapes.hpp"

// This exercise is made in colaboration with:
// Kasper, Koen, Trevor, Ivo and Berke

int main(){
  hwlib::target::window w( hwlib::xy( 128, 64 ),
                           hwlib::white,
                           hwlib::black, 2 );

  wall wall_1( w, 0,   0,   5, 63, 10 );
  wall wall_2( w, 0,  58, 127, 63, 10 );
  wall wall_3( w, 123, 0, 127, 63, 10 );
  wall wall_4( w, 0,   0, 128,  5, 10 );

  for(;;){
     w.clear();

     wall_1.draw();
     wall_2.draw();
     wall_3.draw();
     wall_4.draw();

     w.flush();

     hwlib::wait_ms( 200 );

     wall_1.update();
     wall_2.update();
     wall_3.update();
     wall_4.update();

     w.flush();

  }

}
