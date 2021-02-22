#include <hwlib.hpp>

#include "filled_rectangle.h"
#include "rectangle.h"

int main() {
	hwlib::target::window window(hwlib::xy(128, 64));
	
	hwlib::color red(255, 0, 0);
	hwlib::color green(0, 255, 0);

	filled_rectangle square_object_1(window, red, 0, 0, 20, 40);
	filled_rectangle square_object_2(window, green, 40, 0, 60, 40);

	square_object_1.print();
	square_object_2.print();

	for(unsigned int i = 1; i >= 0; i++) { window.poll(); }

}
