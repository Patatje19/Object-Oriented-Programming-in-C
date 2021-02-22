#ifndef FILLEDRECTANGLE_H
#define FILLEDRECTANGLE_H

#include "rectangle.h"

class filled_rectangle {
private:
	hwlib::window& _window;
	hwlib::color& _colour;

	int _start_x;
	int _start_y;

	int _end_x;
	int _end_y;

public:
	filled_rectangle( hwlib::window& window, hwlib::color& colour, int start_x, int start_y, int end_x, int end_y) :
		_window(window),
		_colour(colour),

		_start_x(start_x),
		_start_y(start_y),

		_end_x(end_x),
		_end_y(end_y)
	{}

	void print();

};

#endif // RECTANGLE_H
