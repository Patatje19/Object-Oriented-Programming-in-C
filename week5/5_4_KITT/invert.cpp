#include "invert.hpp"


void invert::write( bool x ) {
	slave.write( ! x );

}


void invert::flush() {
	slave.flush();

}
