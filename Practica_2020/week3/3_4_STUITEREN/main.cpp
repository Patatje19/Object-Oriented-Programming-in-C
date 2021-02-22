#include <hwlib.hpp>
#include <array>

#include "drawable.hpp"
#include "wall.hpp"
#include "shapes.hpp"

// This exercise is made in colaboration with:
// Kasper, Koen, Trevor and Berke

int main(){
  hwlib::target::window w( hwlib::xy( 128, 64 ),
                           hwlib::white,
                           hwlib::black, 2 );

  wall left   ( w, 0,   0,   5, 63, 10, hwlib::xy( -1,  1 ) );
  wall bottom ( w, 0,  58, 127, 63, 10, hwlib::xy(  1, -1 ) );
  wall right  ( w, 123, 0, 127, 63, 10, hwlib::xy( -1,  1 ) );
  wall top    ( w, 0,   0, 127,  5, 10, hwlib::xy(  1, -1 ) );

  ball ball( w, hwlib::xy( 50, 20 ), 9, hwlib::xy( 5, 2 ) );

  std::array< drawable *, 5 > objects = {
    &ball, &top, &bottom, &right, &left
  };

  for (;;) {
    w.clear();

    for ( auto & p : objects ) {
      p -> draw();

    }

    w.flush();

    hwlib::wait_ms( 200 );

    for ( auto & p : objects ) {
      p -> update();

    }

    for ( auto & p : objects ) {
      for( auto & other : objects ){
        p -> interact ( *other ) ;
      }
    }

    w.flush();

  }

}
