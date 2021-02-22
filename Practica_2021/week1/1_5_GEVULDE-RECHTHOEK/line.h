#ifndef LINE_H
#define LINE_H

#include <hwlib.hpp>

class line {
private:
	hwlib::window& _window;

	int _start_x;
	int _start_y;

	int _end_x;
	int _end_y;

public:
	line(hwlib::window& window, int start_x, int start_y, int end_x, int end_y) :
		_window (window),
		_start_x   (start_x),
		_start_y   (start_y),
		_end_x     (end_x),
		_end_y     (end_y)
	{}

	void print();

};

#endif // LINE_H
