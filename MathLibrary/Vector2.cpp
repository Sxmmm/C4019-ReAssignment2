#include "Vector2.h"

#include <math.h>
#include <iostream>
using namespace std;
//////////////////////////
//Constructor/Destructor//
//////////////////////////
void Vector2::initialise()
{
	//Setting the floats in class Vector2 to equal 0, default value;
	x = 0;
	y = 0;
}
//Constructor for Vector2
Vector2::Vector2(float m_x, float m_y)
{
	//Setting the floats in class Vector2 to equal what the user has inputted
	x = m_x;
	y = m_y;
}
//Destructor for Vector2
Vector2::~Vector2()
{

}

/////////////
//Functions//
/////////////
//This is the dot product function for Vector2, this returns a float value. The dot product is the measurement of the difference between directions in which the two vectos point.
float Vector2::dotProduct(const Vector2 &v1, const Vector2 &v2)
{
	//returning each of the x and y variables of each vectors multiplied and added together
	return (v1.x * v2.x + v1.y * v2.y);
}
//This is the distance function for Vector2, this returns a float value. The distance is the measurement of how far the two vectors are apart.
float Vector2::distance(const Vector2 &v1, const Vector2 &v2)
{
	float dx = v1.x - v2.x;
	float dy = v1.y - v2.y;

	return (float)sqrt(dx * dx + dy * dy);
}
//This is the magnitude function for Vector2, this returns a float value. The magnitude is used to see if one object is bigger or smaller than another object.
float Vector2::magnitude(const Vector2 &v1, const Vector2 &v2)
{
	float mx = (pow(v1.x, 2) * pow(v2.x, 2));
	float my = (pow(v1.y, 2) * pow(v2.y, 2));

	return (float)sqrt(mx + my);
}
//This is the print vector function. It takes the vector and prints out its x and y values.
void Vector2::printVector()
{
	cout << x << ", " << y << "\n";
}

///////////////////////
//Overload Operations//
///////////////////////
//This operator takes the x and y of each vector on either side of the function and overwrites the left hand side to be itself plus the right hand side x or y.
const Vector2 & Vector2::operator+=(const Vector2 & v1)
{
	x += v1.x;
	y += v1.y;
	return *this;
}
//This operator takes the x and y of each vector on either side of the function and overwrites the left hand side to be itself minus the right hand side x or y.
const Vector2 & Vector2::operator-=(const Vector2 & v1)
{
	x -= v1.x;
	y -= v1.y;
	return *this;
}
//This operator takes the x and y of the left side of the function and makes it equal to its self multiplied by a float value.
const Vector2 & Vector2::operator*=(const float & v1)
{
	x = x * v1;
	y = y * v1;
	return *this;
}
//This operator takes the x and y of each vector on either side of the function and overwrites the left hand side to be itself multiplied by the right hand side x or y.
const Vector2 & Vector2::operator*=(const Vector2 & v1)
{
	x = x * v1.x;
	y = y * v1.y;
	return *this;
}
//This operator takes the x and y of each vector on either side of the function and overwrites the left hand side to be itself divided by the right hand side x or y.
const Vector2 & Vector2::operator/=(const Vector2 & v1)
{
	x = x / v1.x;
	y = y / v1.y;
	return *this;
}
//This operator takes the x and y of the left side of the function and makes it equal to its self divided by a float value.
const Vector2 & Vector2::operator/=(const float & v1)
{
	x = x / v1;
	y = y / v1;
	return *this;
}
//This operator takes the x and y of the left hand side and the right hand side and adds them together then returns the answer.
const Vector2 & Vector2::operator+(const Vector2 &v1)
{
	return Vector2::Vector2((x + v1.x), (y + v1.y));
}
//This operator takes the x and y of the left hand side and the right hand side and minuses them then returns the answer.
const Vector2 & Vector2::operator-(const Vector2 &v1)
{
	return Vector2::Vector2((x - v1.x), (y - v1.y));
}
//This operator takes the x and y of the left hand side and multiplies them by a float value then returns the answer.
const Vector2 & Vector2::operator*(const float & v1)
{
	return Vector2::Vector2((x * v1), (y * v1));
}
//This operator takes the x and y of the left hand side and the right hand side and minuses them then returns the answer.
const Vector2 & Vector2::operator*(const Vector2 & v1)
{
	return Vector2::Vector2((x * v1.x), (y * v1.y));
}
//This operator takes the x and y of the left hand side and the right hand side and divides them then returns the answer.
const Vector2 & Vector2::operator/(const Vector2 & v1)
{
	return Vector2::Vector2((x / v1.x), (y / v1.y));
}
//This operator takes the x and y of the left hand side and divides them by a float value then returns the answer.
const Vector2 & Vector2::operator/(const float & v1)
{
	return Vector2::Vector2((x / v1), (y / v1));
}
//This operator takes the x and y of the left hand side and makes them equal to the x and y on the right hand side.
const Vector2 & Vector2::operator=(const Vector2 &v1)
{
	x = v1.x;
	y = v1.y;
	return *this;
}