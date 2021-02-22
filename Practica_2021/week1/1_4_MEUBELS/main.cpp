#include "furniture.h"

int main() {
	furniture furniture_object_1;
	
	std::cout << "Before make more hipster: " << std::endl << std::endl;
	furniture_object_1.print_furniture();
	
	furniture_object_1.make_more_hipster();
	
	std::cout << "After make more hipster: " << std::endl << std::endl;
	furniture_object_1.print_furniture();
	
}
