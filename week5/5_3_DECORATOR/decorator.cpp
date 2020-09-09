#include "decorator.hpp"


bool andDecorator::read() {
	return ( button0.read() && button1.read() );

}
