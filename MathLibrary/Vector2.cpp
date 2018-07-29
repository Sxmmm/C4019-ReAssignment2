#include "Vector2.h"

#include <math.h>
#include <iostream>
using namespace std;

//Constructor/Destructor//
void Vector2::initialise()
{
	x = 0;
	y = 0;
}
Vector2::Vector2(float m_x, float m_y)
{
	x = m_x;
	y = m_y;
}
Vector2::~Vector2()
{

}


//Functions//
float Vector2::dotProduct(const Vector2 &v1, const Vector2 &v2)
{
	return (v1.x * v2.x + v1.y * v2.y);
}
float Vector2::distance(const Vector2 &v1, const Vector2 &v2)
{
	float dx = v1.x - v2.x;
	float dy = v1.y - v2.y;

	return (float)sqrt(dx * dx + dy * dy);
}
void Vector2::printVector()
{
	cout << x << ", " << y << "\n";
}


//Overload Operations//
const Vector2 & Vector2::operator+=(const Vector2 & v1)
{
	x += v1.x;
	y += v1.y;
	return *this;
}
const Vector2 & Vector2::operator-=(const Vector2 & v1)
{
	x -= v1.x;
	y -= v1.y;
	return *this;
}
const Vector2 & Vector2::operator*=(const float & v1)
{
	x = x * v1;
	y = y * v1;
	return *this;
}
const Vector2 & Vector2::operator*=(const Vector2 & v1)
{
	x = x * v1.x;
	y = y * v1.y;
	return *this;
}
const Vector2 & Vector2::operator/=(const Vector2 & v1)
{
	x = x / v1.x;
	y = y / v1.y;
	return *this;
}
const Vector2 & Vector2::operator/=(const float & v1)
{
	x = x / v1;
	y = y / v1;
	return *this;
}
const Vector2 & Vector2::operator+(const Vector2 &v1)
{
	return Vector2::Vector2((x + v1.x), (y + v1.y));
}
const Vector2 & Vector2::operator-(const Vector2 &v1)
{
	return Vector2::Vector2((x - v1.x), (y - v1.y));
}
const Vector2 & Vector2::operator*(const float & v1)
{
	return Vector2::Vector2((x * v1), (y * v1));
}
const Vector2 & Vector2::operator*(const Vector2 & v1)
{
	return Vector2::Vector2((x * v1.x), (y * v1.y));
}
const Vector2 & Vector2::operator/(const Vector2 & v1)
{
	return Vector2::Vector2((x / v1.x), (y / v1.y));
}
const Vector2 & Vector2::operator/(const float & v1)
{
	return Vector2::Vector2((x / v1), (y / v1));
}
const Vector2 & Vector2::operator=(const Vector2 &v1)
{
	x = v1.x;
	y = v1.y;
	return *this;
}