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

  std::array< drawable *, 4 > objects = { &wall_4, &wall_3, &wall_2, &wall_1 };

  for(;;){
     w.clear();

     for ( unsigned int i = 0; i < objects.size(); i++ ) {
        objects[i]->draw();

     }

     w.flush();

     hwlib::wait_ms( 200 );

     for ( unsigned int i = 0; i < objects.size(); i++ ) {
        objects[i]->update();

     }

     w.flush();

  }

}
