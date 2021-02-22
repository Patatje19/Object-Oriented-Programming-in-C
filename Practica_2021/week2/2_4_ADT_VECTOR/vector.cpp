#include "vector.h"

/******************************************************************************/

std::ostream& operator<< (std::ostream& lhs, const vector& rhs) {
	return lhs << "{ " << rhs.my_x << ", " << rhs.my_y << " }";

}

vector operator* (const int& lhs, const vector& rhs) {
	return rhs * lhs;

}

/******************************************************************************/

bool vector::operator== (const vector& rhs) const {
	return(my_x == rhs.my_x && my_y == rhs.my_y);

}

vector vector::operator+ () const {
	return vector(my_x, my_y);

}

vector vector::operator+ (const vector& rhs) const {
	return vector(my_x + rhs.my_x, my_y + rhs.my_y);

}

vector vector::operator* (const int& rhs) const {
	return vector(my_x * rhs, my_y * rhs);

}

vector& vector::operator+= (const vector& rhs) {
	my_x += rhs.my_x;
	my_y += rhs.my_y;

	return *this;

}

vector& vector::operator*= (const vector& rhs) {
	my_x *= rhs.my_x;
	my_y *= rhs.my_y;

	return *this;

}
