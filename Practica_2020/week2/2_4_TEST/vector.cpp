#include "vector.hpp"


std::ostream & operator<< ( std::ostream & lhs, const vector & rhs ) {
  return lhs << "{ " << rhs.x << ", " << rhs.y << " }";

}


bool vector::operator== ( const vector & rhs ) const {
  return ( x == rhs.x && y == rhs.y );

}


vector vector::operator+ () const {
  return vector( x, y );

}


vector vector::operator+ ( const vector & rhs ) const {
  return vector( x + rhs.x, y + rhs.y );

}


vector vector::operator* ( const int    & rhs ) const {
  return vector( x * rhs, y * rhs );

}


vector & vector::operator+= ( const vector & rhs ) {
  x += rhs.x;
  y += rhs.y;

  return *this;

}


vector & vector::operator*= ( const vector & rhs ) {
  x *= rhs.x;
  y *= rhs.y;

  return *this;

}
