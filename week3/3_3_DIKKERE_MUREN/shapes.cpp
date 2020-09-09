#include "shapes.hpp"


void line::draw() {
  hwlib::line x( location, end );
  x.draw( w );

}


void circle::draw() {
  hwlib::circle c( location + hwlib::xy( radius, radius ), radius );
  c.draw( w );

}


void ball::update() {
      location = location + speed;

}


void ball::interact( drawable & other ) {
  if( this != & other){
    if( overlaps( other )){
      speed.x *= -1;
      speed.y *= -1;
    }
  }

}
