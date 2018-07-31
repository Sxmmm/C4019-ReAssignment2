#include "Vector3.h"
#include "Matrix33.h"

#include <math.h>
#include <iostream>
using namespace std;

//////////////////////////
//Constructor/Destructor//
//////////////////////////
void Vector3::initialise()
{
	//Setting the floats in class Vector2 to equal 0, default value;
	x = 0;
	y = 0;
	z = 0;
}
//Constructor for our Vector3
Vector3::Vector3(float m_x, float m_y, float m_z)
{
	//Setting the floats in class Vector3 to equal what the user has inputted
	x = m_x;
	y = m_y;
	z = m_z;
}
//Deconstructor for Vector3
Vector3::~Vector3()
{

}

/////////////
//Functions//
/////////////
//This is the cross product of Vector3. This is used to work out the perpendicular vector.
Vector3 Vector3::crossProduct(const Vector3 &v1, const Vector3 &v2)
{
	Vector3 vCrossProduct;

	vCrossProduct.x = v1.y * v2.z - v1.z * v2.y;
	vCrossProduct.y = v1.z * v2.x - v1.x * v2.z;
	vCrossProduct.z = v1.x * v2.y - v1.y * v2.x;

	return vCrossProduct;
}
//This is the dot product function for Vector3, this returns a float value. The dot product is the measurement of the difference between directions in which the two vectos point.
float Vector3::dotProduct(const Vector3 &v1, const Vector3 &v2)
{
	return (v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
}
//This is the distance function for Vector3, this returns a float value. The distance is the measurement of how far the two vectors are apart.
float Vector3::distance(const Vector3 &v1, const Vector3 &v2)
{
	float dx = v1.x - v2.x;
	float dy = v1.y - v2.y;
	float dz = v1.z - v2.z;

	return (float)sqrt(dx * dx + dy * dy + dz * dz);
}
//This is the magnitude function for Vector3, this returns a float value. The magnitude is used to see if one object is bigger or smaller than another object.
float Vector3::magnitude(const Vector3 &v1, const Vector3 &v2) 
{
	float mx = (pow(v1.x, 2) * pow(v2.x, 2));
	float my = (pow(v1.y, 2) * pow(v2.y, 2));
	float mz = (pow(v1.z, 2) * pow(v2.z, 2));

	return (float)sqrt(mx + my + mz);
}
//This is the print vector function. It takes the vector and prints out its x, y and z values.
void Vector3::printVector()
{
	cout << x << ", " << y << ", " << z << "\n";
}

///////////////////////
//Overload Operations//
///////////////////////
//This operator takes the x, y and z of each vector on either side of the function and overwrites the left hand side to be itself plus the right hand side x, y and z.
const Vector3 & Vector3::operator+=(const Vector3 & v1)
{
	x += v1.x;
	y += v1.y;
	z += v1.z;
	return *this;
}
//This operator takes the x, y and z of each vector on either side of the function and overwrites the left hand side to be itself minus the right hand side x, y and z.
const Vector3 & Vector3::operator-=(const Vector3 & v1)
{
	x -= v1.x;
	y -= v1.y;
	z -= v1.z;
	return *this;
}
//This operator takes the x, y and z of left hand side of the function and overwrites the left hand side to be itself multiplied by a float value.
const Vector3 & Vector3::operator*=(const float & v1)
{
	x = x * v1;
	y = y * v1;
	z = z * v1;
	return *this;
}
//This operator takes the x, y and z of each vector on either side of the function and overwrites the left hand side to be itself multiplied by the right hand side x, y and z.
const Vector3 & Vector3::operator*=(const Vector3 & v1)
{
	x = x * v1.x;
	y = y * v1.y;
	z = z * v1.z;
	return *this;
}
//This operator takes the x, y and z of each vector on either side of the function and overwrites the left hand side to be itself divided by the right hand side x, y and z.
const Vector3 & Vector3::operator/=(const Vector3 & v1)
{
	x = x / v1.x;
	y = y / v1.y;
	z = z / v1.z;
	return *this;
}
//This operator takes the x, y and z of left hand side of the function and overwrites the left hand side to be itself divided by a float value.
const Vector3 & Vector3::operator/=(const float & v1)
{
	x = x / v1;
	y = y / v1;
	z = z / v1;
	return *this;
}
//This operator takes the x, y and z of the left hand side and the right hand side and adds them together then returns the answer.
const Vector3 & Vector3::operator+(const Vector3 &v1)
{
	return Vector3::Vector3((x + v1.x), (y + v1.y), (z + v1.z));
}
//This operator takes the x, y and z of the left hand side and the right hand side and minuses them together then returns the answer.
const Vector3 & Vector3::operator-(const Vector3 &v1)
{
	return Vector3::Vector3((x - v1.x), (y - v1.y), (z - v1.z));
}
//This operator takes the x, y and z of the left hand side and multiplies them by a float value then returns the answer.
const Vector3 & Vector3::operator*(const float & v1)
{
	return Vector3::Vector3((x * v1), (y * v1), (z * v1));
}
//This operator takes the x, y and z of the left hand side and the right hand side and multiplies them together then returns the answer.
const Vector3 & Vector3::operator*(const Vector3 & v1)
{
	return Vector3::Vector3((x * v1.x), (y * v1.y), (z * v1.z));
}
//This operator takes the x, y and z of the left hand side and the Matrix33 on the right side and multiplies them then returns the answer.
const Vector3 & Vector3::operator*(const Matrix33 &matB)
{
	return Vector3::Vector3((matB.m[0] * x) + (matB.m[1] * y) + (matB.m[2] * z),
		(matB.m[3] * x) + (matB.m[4] * y) + (matB.m[5] * z),
		(matB.m[6] * x) + (matB.m[7] * y) + (matB.m[8] * z));
}
//This operator takes the x, y and z of the left hand side and the right hand side and divides them together then returns the answer.
const Vector3 & Vector3::operator/(const Vector3 & v1)
{
	return Vector3::Vector3((x / v1.x), (y / v1.y), (z / v1.z));
}
//This operator takes the x, y and z of the left hand side and divides them by a float value then returns the answer.
const Vector3 & Vector3::operator/(const float & v1)
{
	return Vector3::Vector3((x / v1), (y / v1), (z / v1));
}
//This operator takes the x, y and z of the left hand side and makes them equal to the x, y and z on the right hand side.
const Vector3 & Vector3::operator=(const Vector3 &v1)
{
	x = v1.x;
	y = v1.y;
	z = v1.z;
	return *this;
}