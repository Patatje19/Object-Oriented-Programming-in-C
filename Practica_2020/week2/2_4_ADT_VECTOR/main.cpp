#define CATCH_CONFIG_MAIN
#include "catch.hpp"


#include <iostream>
#include "vector.hpp"


vector operator* ( const int & lhs, const vector & rhs ) {
    return rhs * lhs;

}


//int main () {
//  vector a( 1, 2 );
//  vector b( 2, 4 );
//  vector c( 1, 2 );
//  vector d( 2, 4 );
//  vector e( 1, 2 );
//  vector f( 1, 2 );
//  vector g( 1, 2 );
//  vector h( 2, 4 );
//  vector i( 1, 2 );
//  vector j( 2, 4 );

//  int    k = 4;
//  int    l = 4;

//  a = + b;
//  std::cout << a << ", " << b << std::endl;

//  c = c + d;
//  std::cout << c << ", " << d << std::endl;

//  e = e * k;
//  std::cout << e << ", " << k << std::endl;

//  f = l * f;
//  std::cout << l << ", " << f << std::endl;

//  g += h;
//  std::cout << g << ", " << h << std::endl;

//  i *= j;
//  std::cout << i << ", " << j << std::endl;

//}


TEST_CASE ( "operator<< " ) {
  vector vectorTest( 3, 4 );

  std::stringstream stringTest;

  stringTest << vectorTest;

  REQUIRE( stringTest.str() == "{ 3, 4 }" );

}


TEST_CASE ( "returns vector value" ) {
  vector a( 3, 4 ), b( 4, 6 );
  a = + b;

  REQUIRE ( a == vector( 4, 6 ) );

}


TEST_CASE ( "Add a vector to another vector(1)" ) {
  vector a( 2, 4 ), b( 4, 6 );
  a = a + b;

  REQUIRE ( a == vector( 6, 10 ) );

}


TEST_CASE ( "Multiply a vector by an integer(1)" ) {
  vector a( 2, 4 ); int b = 20;
  a = a * b;

  REQUIRE ( a == vector( 40, 80 ) );

}


TEST_CASE ( "Multiply a integer by a vector" ) {
  vector a( 2, 4 ); int b = 20;
  a = b * a;

  REQUIRE ( a == vector( 40, 80 ) );

}


TEST_CASE ( "Add a vector to another vector(2)" ) {
  vector a( 2, 4 ), b( 4, 6 );
  a += b;

  REQUIRE ( a == vector( 6, 10 ) );

}


TEST_CASE ( "Multiply a vector to a integer(2)" ) {
  vector a( 2, 4 ), b( 4, 6 );
  a *= b;

  REQUIRE ( a == vector( 8, 24 ) );

}
