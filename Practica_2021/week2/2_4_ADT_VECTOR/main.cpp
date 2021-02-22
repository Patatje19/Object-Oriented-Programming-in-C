#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <iostream>
#include "vector.h"

TEST_CASE("operator<< ") {
	vector vector_test(3, 4);

	std::stringstream string_test;

	string_test << vector_test;

	REQUIRE(string_test.str() == "{ 3, 4 }");

}

TEST_CASE("returns vector value") {
	vector a(3, 4), b(4, 6);
	a = + b;

	REQUIRE(a == vector(4, 6));

}


TEST_CASE("Add a vector to another vector(1)") {
	vector a(2, 4), b(4, 6);
	a = a + b;

	REQUIRE(a == vector(6, 10));

}


TEST_CASE("Multiply a vector by an integer(1)") {
	vector a(2, 4); int b = 20;
	a = a * b;

	REQUIRE(a == vector(40, 80));

}


TEST_CASE("Multiply a integer by a vector") {
	vector a(2, 4); int b = 20;
	a = b * a;

	REQUIRE(a == vector(40, 80));

}


TEST_CASE("Add a vector to another vector(2)") {
	vector a(2, 4), b(4, 6);
	a += b;

	REQUIRE(a == vector(6, 10));

}


TEST_CASE ("Multiply a vector to a integer(2)") {
	vector a(2, 4), b(4, 6);
	a *= b;

	REQUIRE (a == vector(8, 24));

}
