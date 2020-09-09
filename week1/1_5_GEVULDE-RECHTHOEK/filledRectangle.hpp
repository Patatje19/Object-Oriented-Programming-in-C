#ifndef FILLEDRECTANGLE_HPP
#define FILLEDRECTANGLE_HPP


#include <rectangle.hpp>


class filled_rectangle {
private:
   hwlib::window & w;

   int start_x;
   int start_y;

   int end_x;
   int end_y;

public:
  filled_rectangle(
    hwlib::window & w,
    int start_x, int start_y,
    int end_x, int end_y
  );

  void print();

};


#endif // RECTANGLE_HPP
