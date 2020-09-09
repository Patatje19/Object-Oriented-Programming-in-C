#ifndef VICTIM_HPP
#define VICTIM_HPP


#include <hwlib.hpp>

#include "wall.hpp"


class victim : public rectangle {
private:

public:
  victim(
    hwlib::window & w,
    int start_x, int start_y,
    int end_x,   int end_y
  ):
    rectangle ( w, start_x, start_y, end_x, end_y )
  {}

  void draw() override;

  void interact( drawable & other ) override;

};


#endif // VICITM_HPP
