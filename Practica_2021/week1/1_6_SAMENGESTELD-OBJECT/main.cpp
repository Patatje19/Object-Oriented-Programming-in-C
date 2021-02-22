#include <hwlib.hpp>

#include "grafisch_object.h"


int main() {
	hwlib::target::window window_1(hwlib::xy(128, 64));
	hwlib::target::window window_2(hwlib::xy(128, 64));
	hwlib::target::window window_3(hwlib::xy(128, 64));
	hwlib::target::window window_4(hwlib::xy(128, 64));

	object_train train_1(window_1, 2);
	object_train train_2(window_2, 4);
	object_train train_3(window_3, 6);
	object_train train_4(window_4, 8);

	train_1.print();
	train_2.print();
	train_3.print();
	train_4.print();

	for(;;) { window_1.poll(); window_2.poll(); window_3.poll(); window_4.poll(); }

}
