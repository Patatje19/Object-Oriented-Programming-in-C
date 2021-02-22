#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

/// @file

/// \brief
/// Vector ADT
/// \details
/// This is an ADT that implements and stores integer values.
/// The appropriate constructors and operators are provided.
class vector {
private:
	int my_x {};
	int my_y {};

public:
	/// \brief
	/// Constructor from explicit values
	/// \details
	/// This constructor initializes a vector from its integer values.
	/// There is no default number set.
	vector(int x, int y) : my_x(x), my_y(y) {};

/******************************************************************************/

	/// \brief
	/// Output operator for a vector value
	/// \details
	/// This operator<< prints a constructor in the format
	/// { x, y } where both values are printed as decimal values.
	friend std::ostream& operator<< (std::ostream& lhs, const vector& rhs);

	/// \brief
	/// Multiply a integer by a vector
	/// \details
	/// This operator* multiplies a integer value by a vector value.
	friend vector operator* (const int& lhs, const vector& rhs);

/******************************************************************************/

	/// \brief
	/// Compare two rational values
	/// \details
	/// This operator tests for equality. It returns true
	/// if and only if the vector values are equal.
	bool operator== (const vector& rhs) const;

	/// \brief
	/// Returns vector value
	/// \details
	/// This operator+ returns the rhs vector value (monadic).
	vector operator+ () const;

	/// \brief
	/// Add a vector to another vector
	/// \details
	/// This operator+ adds a vector value by a vector value.
	vector operator+ (const vector& rhs) const;

	/// \brief
	/// Multiply a vector by an integer
	/// \details
	/// This operator* multiplies a vector value by an integer value.
	vector operator* (const int& rhs) const;

	/// \brief
	/// Add a vector to another vector
	/// \details
	/// This operator+= adds a vector value by a vector variable.
	vector& operator+= ( const vector& rhs );

	/// \brief
	/// Multiply a vector to a integer
	/// \details
	/// This operator*= adds a vector value by a vector variable.
	vector& operator*= ( const vector& rhs );

};

#endif // VECTOR_H
