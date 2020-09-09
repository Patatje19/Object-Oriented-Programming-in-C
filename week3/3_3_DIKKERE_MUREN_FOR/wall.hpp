#ifndef WALL_HPP
#define WALL_HPP


#include <hwlib.hpp>

#include "drawable.hpp"
#include "shapes.hpp"


class rectangle : public drawable {
protected:
  hwlib::window & w;
  int start_x, start_y;
  int end_x,   end_y;

  line left, right, top, bottom;

public:
  rectangle(
    hwlib::window & w,
    int start_x, int start_y,
    int end_x,   int end_y
  ):
    drawable ( w, hwlib::xy( start_x, start_y ), hwlib::xy( end_x, end_y ) ),

    w ( w ),
    start_x( start_x ), start_y( start_y ),
    end_x  ( end_x ),   end_y  ( end_y ),

    left   ( w, hwlib::xy( start_x, start_y ), hwlib::xy( start_x, end_y ) ),
    right  ( w, hwlib::xy( end_x, start_y ),   hwlib::xy( end_x, end_y )   ),
    top    ( w, hwlib::xy( start_x, start_y ), hwlib::xy( end_x, start_y ) ),
    bottom ( w, hwlib::xy( start_x, end_y ),   hwlib::xy( end_x, end_y )   )
  {}

  void draw() override;

};


class wall : public rectangle {
private:
  bool filled = false;
  int updateInterval, updateCounter;

public:
  wall(
    hwlib::window & w,
    int start_x, int start_y,
    int end_x,   int end_y,

    int updateInterval
  ):
    rectangle ( w, start_x, start_y, end_x, end_y ),
    updateInterval( updateInterval ),
    updateCounter ( 10 )
  {}

  void draw() override;

  void update();

};


#endif // WALL_HPP
