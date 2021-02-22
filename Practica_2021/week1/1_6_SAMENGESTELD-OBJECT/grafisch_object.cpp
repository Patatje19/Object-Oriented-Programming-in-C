#include "grafisch_object.h"

void object_train::print_stars() {
	for (int i = 0; i < _c_stars; i++) {
		hwlib::circle stars(hwlib::xy(_x_stars, 10), 1);

		stars.draw(_window);

		_x_stars += 10;

	}

}

void object_train::print() {
	_train_unit_1.draw(_window);
	_wheel_1.draw(_window);
	_wheel_2.draw(_window);

	_train_unit_2.draw(_window);
	_wheel_3.draw(_window);
	_wheel_4.draw(_window);

	_train_unit_3.draw(_window);
	_wheel_5.draw(_window);
	_wheel_6.draw(_window);

	_train_unit_4.draw(_window);
	_wheel_7.draw(_window);
	_wheel_8.draw(_window);

	_train_track.draw(_window);
	_train_connector.draw(_window);

	print_stars();

	_window.flush();

}
