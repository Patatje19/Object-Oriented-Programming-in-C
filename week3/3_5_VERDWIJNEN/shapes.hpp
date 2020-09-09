#ifndef SHAPES_HPP
#define SHAPES_HPP


#include <hwlib.hpp>

#include "drawable.hpp"


class line : public drawable {
private:
  hwlib::xy end;

public:
  line(
    hwlib::window & w,
    const hwlib::xy & location, const hwlib::xy & end
  ):
    drawable( w, location, end - location ),
    end( end )
  {}

  void draw() override;

};


class circle : public drawable {
protected:
  int radius;

public:
  circle(
    hwlib::window & w,
    const hwlib::xy & midpoint, int radius
  ):
    drawable(
      w, midpoint - hwlib::xy( radius, radius ),
      hwlib::xy( radius, radius ) * 2 ), radius( radius )
  {}

  void draw() override;

};


class ball : public circle {
private:
  hwlib::xy speed;

public:
  ball(
    hwlib::window & w,
    const hwlib::xy & midpoint, int radius,
    const hwlib::xy & speed
  ):
    circle( w, midpoint, radius ),
    speed( speed )
  {}

  void update() override;

  void interact( drawable & other ) override;

};


#endif // SHAPES_HPP
