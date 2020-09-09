#ifndef DECORATOR_HPP
#define DECORATOR_HPP


#include <hwlib.hpp>


class andDecorator : public hwlib::pin_in {
private:
	hwlib::target::pin_in & button0;
	hwlib::target::pin_in & button1;

public:
	andDecorator(
		hwlib::target::pin_in & button0,
		hwlib::target::pin_in & button1
	):
		button0 (button0), button1 (button1)
	{}

	bool read() override;

};


#endif // DECORATOR_HPP
