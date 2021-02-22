#ifndef GRAFISCHOBJECT_HPP
#define GRAFISCHOBJECT_HPP


#include <hwlib.hpp>


class objectTrain {
private:
  hwlib::window & window;

  int c_stars = {};
  int x_stars = 10;

  hwlib::rectangle trainUnit_1;
  hwlib::circle    wheel_1;
  hwlib::circle    wheel_2;

  hwlib::rectangle trainUnit_2;
  hwlib::circle    wheel_3;
  hwlib::circle    wheel_4;

  hwlib::rectangle trainUnit_3;
  hwlib::circle    wheel_5;
  hwlib::circle    wheel_6;

  hwlib::rectangle trainUnit_4;
  hwlib::circle    wheel_7;
  hwlib::circle    wheel_8;

  hwlib::line      trainConnector;
  hwlib::line      trainTrack;
public:
  objectTrain(
      hwlib::window & window, int c_stars
  ):
      window      ( window ),

      c_stars     ( c_stars ),

      trainUnit_1 ( hwlib::xy( 10, 20 ), hwlib::xy( 20, 30 ) ),
      wheel_1     ( hwlib::xy( 10, 32 ), 2 ),
      wheel_2     ( hwlib::xy( 20, 32 ), 2 ),

      trainUnit_2 ( hwlib::xy( 30, 20 ), hwlib::xy( 40, 30 ) ),
      wheel_3     ( hwlib::xy( 30, 32 ), 2 ),
      wheel_4     ( hwlib::xy( 40, 32 ), 2 ),

      trainUnit_3 ( hwlib::xy( 50, 20 ), hwlib::xy( 60, 30 ) ),
      wheel_5     ( hwlib::xy( 50, 32 ), 2 ),
      wheel_6     ( hwlib::xy( 60, 32 ), 2 ),

      trainUnit_4 ( hwlib::xy( 70, 20 ), hwlib::xy( 80, 30 ) ),
      wheel_7     ( hwlib::xy( 70, 32 ), 2 ),
      wheel_8     ( hwlib::xy( 80, 32 ), 2 ),

      trainConnector ( hwlib::xy( 10, 30 ), hwlib::xy( 80, 30 ) ),
      trainTrack     ( hwlib::xy( 10, 36 ), hwlib::xy( 80, 36 ) )
  {}

  void stars_print();
  void print();

};


#endif // GRAFISCHOBJECT_HPP
