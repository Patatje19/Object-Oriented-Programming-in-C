#ifndef GRAFISCHOBJECT_H
#define GRAFISCHOBJECT_H

#include <hwlib.hpp>

class object_train {
private:
	hwlib::window & _window;

	int _c_stars {};
	int _x_stars = 10;

	hwlib::rectangle _train_unit_1;
	hwlib::circle _wheel_1;
	hwlib::circle _wheel_2;

	hwlib::rectangle _train_unit_2;
	hwlib::circle _wheel_3;
	hwlib::circle _wheel_4;

	hwlib::rectangle _train_unit_3;
	hwlib::circle	_wheel_5;
	hwlib::circle _wheel_6;

	hwlib::rectangle _train_unit_4;
	hwlib::circle _wheel_7;
	hwlib::circle _wheel_8;

	hwlib::line _train_connector;
	hwlib::line _train_track;

public:
	object_train(hwlib::window & window, int c_stars) :
		_window(window),

		_c_stars(c_stars),

		_train_unit_1(hwlib::xy(10, 20), hwlib::xy(20, 30)),
		_wheel_1(hwlib::xy(10, 32), 2),
		_wheel_2(hwlib::xy(20, 32), 2),

		_train_unit_2(hwlib::xy( 30, 20), hwlib::xy(40, 30)),
		_wheel_3(hwlib::xy(30, 32), 2),
		_wheel_4(hwlib::xy(40, 32), 2),

		_train_unit_3(hwlib::xy(50, 20), hwlib::xy(60, 30)),
		_wheel_5(hwlib::xy(50, 32), 2),
		_wheel_6(hwlib::xy(60, 32), 2),

		_train_unit_4(hwlib::xy(70, 20), hwlib::xy(80, 30)),
		_wheel_7(hwlib::xy(70, 32), 2),
		_wheel_8(hwlib::xy(80, 32), 2),

		_train_connector( hwlib::xy(10, 30), hwlib::xy(80, 30)),
		_train_track(hwlib::xy(10, 36), hwlib::xy(80, 36))
	{}

	void print_stars();

	void print();

};


#endif // GRAFISCHOBJECT_H
