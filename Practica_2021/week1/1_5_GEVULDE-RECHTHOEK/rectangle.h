#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "line.h"

class rectangle {
private:
	hwlib::window& _window;

	line _left;
	line _right; 
	line _top; 
	line _bottom;

public:
	rectangle(hwlib::window& window, int start_x, int start_y, int end_x, int end_y) : 
		_window (window),
		_left          (window, start_x, start_y, start_x, end_y + 1),
		_right       (window, end_x, start_y, end_x, end_y + 1),
		_top          (window, start_x, start_y, end_x + 1, start_y),
		_bottom  (window, start_x, end_y, end_x + 1, end_y)
	{}

	void print();

};

#endif // RECTANGLE_H
