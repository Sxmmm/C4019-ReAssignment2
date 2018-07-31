#include "Matrix44.h"

#include <math.h>
#include <iostream>

using namespace std;

//Defining pi and degrees to radians so we use cos and sin to rotate our Matrix33.
#define M_PI 3.14159265358979323846264338327950288
#define DEG_TO_RAD(angle) ((angle) / 180.0 * M_PI)
/////////////////////////
//Constructor/Destructor/
/////////////////////////
//Constructor for our Matrix33
Matrix44::Matrix44(float m0, float m1, float m2, float m3, float m4, float m5, float m6, float m7, float m8, float m9, float m10, float m11, float m12, float m13, float m14, float m15)
{
	//Setting the floats in class Matrix44 to equal what is is in our main.
	m[0] = m0;
	m[1] = m1;
	m[2] = m2;
	m[3] = m3;
	m[4] = m4;
	m[5] = m5;
	m[6] = m6;
	m[7] = m7;
	m[8] = m8;
	m[9] = m9;
	m[10] = m10;
	m[11] = m11;
	m[12] = m12;
	m[13] = m13;
	m[14] = m14;
	m[15] = m15;
}
/////////////
// 1 0 0 0 //
// 0 1 0 0 //
// 0 0 1 0 //
// 0 0 0 1 //
/////////////
void Matrix44::identity(void)
{
	//Setting a default identity for our Matrix44
	m[0] = 1.0f; m[4] = 0.0f; m[8] = 0.0f; m[12] = 0.0f;
	m[1] = 0.0f; m[5] = 1.0f; m[9] = 0.0f; m[13] = 0.0f;
	m[2] = 0.0f; m[6] = 0.0f; m[10] = 1.0f; m[14] = 0.0f;
	m[3] = 0.0f; m[7] = 0.0f; m[11] = 0.0f; m[15] = 1.0f;
}
//Deconstructor for our Matrix33
Matrix44::~Matrix44()
{

}

/////////////
//Functions//
/////////////
//This is the scale function for Matrix44. This changes the m[0] m[5] and m[10] arrays in our Matrix44 to increase or decrease size using a Vector3.
void Matrix44::scale(const Vector3 &scale)
{
	m[0] = scale.x;
	m[5] = scale.y;
	m[10] = scale.z;
}
//This is the translate function for Matrix44.This changes the m[12] m[13] and m[14] arrays in our Matrix44 to move a position using a Vector3.
void Matrix44::translate(const Vector3 &trans)
{
	m[12] = trans.x;
	m[13] = trans.y;
	m[14] = trans.z;
}
//This is the print vector function. It takes the matrix and prints out the first 4 floats and moves down a line to the next 4 and so on.
void Matrix44::PrintMatrix()
{
	int p = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << m[p] << " ";
			p++;
		}
		cout << "\n";
	}
}
//These functions are used to rotate x, y or z aound its axis. This is done by changing certain parts of the Matrix44 by using cosine and sine.
void Matrix44::rotate_x(const float &angle)
{
	float s = sin(DEG_TO_RAD(angle));
	float c = cos(DEG_TO_RAD(angle));
	m[5] = c;
	m[6] = s;
	m[9] = -s;
	m[10] = c;
}
void Matrix44::rotate_y(const float &angle)
{
	float s = sin(DEG_TO_RAD(angle));
	float c = cos(DEG_TO_RAD(angle));
	m[0] = c;
	m[2] = -s;
	m[8] = s;
	m[10] = c;
}
void Matrix44::rotate_z(const float &angle)
{
	float s = sin(DEG_TO_RAD(angle));
	float c = cos(DEG_TO_RAD(angle));
	m[0] = c;
	m[1] = s;
	m[4] = -s;
	m[5] = c;
}

///////////////////////
//Overload Operations//
///////////////////////
//This operator takes all the values in the Matrix44 on either side of the function and overwrites the left hand Matrix44 to be itself plus the right hand side Matrix44.
Matrix44 Matrix44::operator+=(const Matrix44 &matB)
{
	Matrix44 result;
	result.m[0] = m[0] += matB.m[0];
	result.m[1] = m[1] += matB.m[1];
	result.m[2] = m[2] += matB.m[2];
	result.m[3] = m[3] += matB.m[3];

	result.m[4] = m[4] += matB.m[4];
	result.m[5] = m[5] += matB.m[5];
	result.m[6] = m[6] += matB.m[6];
	result.m[7] = m[7] += matB.m[7];

	result.m[8] = m[8] += matB.m[8];
	result.m[9] = m[9] += matB.m[9];
	result.m[10] = m[10] += matB.m[10];
	result.m[11] = m[11] += matB.m[11];

	result.m[12] = m[12] += matB.m[12];
	result.m[13] = m[13] += matB.m[13];
	result.m[14] = m[14] += matB.m[14];
	result.m[15] = m[15] += matB.m[15];

	return result;
}
//This operator takes all the values in the Matrix44 on either side of the function and overwrites the left hand Matrix44 to be itself minus the right hand side Matrix44.
Matrix44 Matrix44::operator-=(const Matrix44 &matB)
{
	Matrix44 result;
	result.m[0] = m[0] -= matB.m[0];
	result.m[1] = m[1] -= matB.m[1];
	result.m[2] = m[2] -= matB.m[2];
	result.m[3] = m[3] -= matB.m[3];

	result.m[4] = m[4] -= matB.m[4];
	result.m[5] = m[5] -= matB.m[5];
	result.m[6] = m[6] -= matB.m[6];
	result.m[7] = m[7] -= matB.m[7];

	result.m[8] = m[8] -= matB.m[8];
	result.m[9] = m[9] -= matB.m[9];
	result.m[10] = m[10] -= matB.m[10];
	result.m[11] = m[11] -= matB.m[11];

	result.m[12] = m[12] -= matB.m[12];
	result.m[13] = m[13] -= matB.m[13];
	result.m[14] = m[14] -= matB.m[14];
	result.m[15] = m[15] -= matB.m[15];

	return result;
}
//This operator takes all the values in the Matrix44 on either side of the function and overwrites the left hand Matrix44 to be itself multiplied the right hand side Matrix44.
Matrix44 Matrix44::operator*=(const Matrix44 &matB)
{
	Matrix44 result;
	result.m[0] *= ((m[0] * matB.m[0]) + (m[1] * matB.m[4]) + (m[2] * matB.m[8]) + (m[3] * matB.m[12]));
	result.m[1] *= ((m[0] * matB.m[1]) + (m[1] * matB.m[5]) + (m[2] * matB.m[9]) + (m[3] * matB.m[13]));
	result.m[2] *= ((m[0] * matB.m[2]) + (m[1] * matB.m[6]) + (m[2] * matB.m[10]) + (m[3] * matB.m[14]));
	result.m[3] *= ((m[0] * matB.m[3]) + (m[1] * matB.m[7]) + (m[2] * matB.m[11]) + (m[3] * matB.m[15]));
	
	result.m[4] *= ((m[4] * matB.m[0]) + (m[5] * matB.m[4]) + (m[6] * matB.m[8]) + (m[7] * matB.m[12]));
	result.m[5] *= ((m[4] * matB.m[1]) + (m[5] * matB.m[5]) + (m[6] * matB.m[9]) + (m[7] * matB.m[13]));
	result.m[6] *= ((m[4] * matB.m[2]) + (m[5] * matB.m[6]) + (m[6] * matB.m[10]) + (m[7] * matB.m[14]));
	result.m[7] *= ((m[4] * matB.m[3]) + (m[5] * matB.m[7]) + (m[6] * matB.m[11]) + (m[7] * matB.m[15]));

	result.m[8] *= ((m[8] * matB.m[0]) + (m[9] * matB.m[4]) + (m[10] * matB.m[8]) + (m[11] * matB.m[12]));
	result.m[9] *= ((m[8] * matB.m[1]) + (m[9] * matB.m[5]) + (m[10] * matB.m[9]) + (m[11] * matB.m[13]));
	result.m[10] *= ((m[8] * matB.m[2]) + (m[9] * matB.m[6]) + (m[10] * matB.m[10]) + (m[11] * matB.m[14]));
	result.m[11] *= ((m[8] * matB.m[3]) + (m[9] * matB.m[7]) + (m[10] * matB.m[11]) + (m[11] * matB.m[15]));

	result.m[12] *= ((m[12] * matB.m[0]) + (m[13] * matB.m[4]) + (m[14] * matB.m[8]) + (m[15] * matB.m[12]));
	result.m[13] *= ((m[12] * matB.m[1]) + (m[13] * matB.m[5]) + (m[14] * matB.m[9]) + (m[15] * matB.m[13]));
	result.m[14] *= ((m[12] * matB.m[2]) + (m[13] * matB.m[6]) + (m[14] * matB.m[10]) + (m[15] * matB.m[14]));
	result.m[15] *= ((m[12] * matB.m[3]) + (m[13] * matB.m[7]) + (m[14] * matB.m[11]) + (m[15] * matB.m[15]));

	return result;
}
//This operator takes all the values in the Matrix44 on the left side of the function and overwrites it to be itself multiplied by a float value.
Matrix44 Matrix44::operator*=(const float &fl)
{
	Matrix44 result;
	result.m[0] *= fl;
	result.m[1] *= fl;
	result.m[2] *= fl;
	result.m[3] *= fl;

	result.m[4] *= fl;
	result.m[5] *= fl;
	result.m[6] *= fl;
	result.m[7] *= fl;

	result.m[8] *= fl;
	result.m[9] *= fl;
	result.m[10] *= fl;
	result.m[11] *= fl;

	result.m[12] *= fl;
	result.m[13] *= fl;
	result.m[14] *= fl;
	result.m[15] *= fl;

	return result;
}
//This operator takes all the values in the Matrix44 on the left side of the function and overwrites it to be itself divided by a float value.
Matrix44 Matrix44::operator/=(const float &fl)
{
	Matrix44 result;
	result.m[0] /= fl;
	result.m[1] /= fl;
	result.m[2] /= fl;
	result.m[3] /= fl;

	result.m[4] /= fl;
	result.m[5] /= fl;
	result.m[6] /= fl;
	result.m[7] /= fl;

	result.m[8] /= fl;
	result.m[9] /= fl;
	result.m[10] /= fl;
	result.m[11] /= fl;

	result.m[12] /= fl;
	result.m[13] /= fl;
	result.m[14] /= fl;
	result.m[15] /= fl;

	return result;
}
//This operator takes all the values in the Matrix44 on either side of the function and returns them added together.
Matrix44 Matrix44::operator+(const Matrix44 &matB)
{
	Matrix44 result;
	result.m[0] = m[0] + matB.m[0];
	result.m[1] = m[1] + matB.m[1];
	result.m[2] = m[2] + matB.m[2];
	result.m[3] = m[3] + matB.m[3];

	result.m[4] = m[4] + matB.m[4];
	result.m[5] = m[5] + matB.m[5];
	result.m[6] = m[6] + matB.m[6];
	result.m[7] = m[7] + matB.m[7];

	result.m[8] = m[8] + matB.m[8];
	result.m[9] = m[9] + matB.m[9];
	result.m[10] = m[10] + matB.m[10];
	result.m[11] = m[11] + matB.m[11];

	result.m[12] = m[12] + matB.m[12];
	result.m[13] = m[13] + matB.m[13];
	result.m[14] = m[14] + matB.m[14];
	result.m[15] = m[15] + matB.m[15];

	return result;
}
//This operator takes all the values in the Matrix44 on either side of the function and returns them minused.
Matrix44 Matrix44::operator-(const Matrix44 &matB)
{
	Matrix44 result;
	result.m[0] = m[0] - matB.m[0];
	result.m[1] = m[1] - matB.m[1];
	result.m[2] = m[2] - matB.m[2];
	result.m[3] = m[3] - matB.m[3];

	result.m[4] = m[4] - matB.m[4];
	result.m[5] = m[5] - matB.m[5];
	result.m[6] = m[6] - matB.m[6];
	result.m[7] = m[7] - matB.m[7];

	result.m[8] = m[8] - matB.m[8];
	result.m[9] = m[9] - matB.m[9];
	result.m[10] = m[10] - matB.m[10];
	result.m[11] = m[11] - matB.m[11];

	result.m[12] = m[12] - matB.m[12];
	result.m[13] = m[13] - matB.m[13];
	result.m[14] = m[14] - matB.m[14];
	result.m[15] = m[15] - matB.m[15];

	return result;
}
//This operator takes all the values in the Matrix44 on either side of the function and returns them multiplied together.
Matrix44 Matrix44::operator*(const Matrix44 &matB)
{
	Matrix44 result;
	result.m[0] = ((m[0] * matB.m[0]) + (m[1] * matB.m[4]) + (m[2] * matB.m[8]) + (m[3] * matB.m[12]));
	result.m[1] = ((m[0] * matB.m[1]) + (m[1] * matB.m[5]) + (m[2] * matB.m[9]) + (m[3] * matB.m[13]));
	result.m[2] = ((m[0] * matB.m[2]) + (m[1] * matB.m[6]) + (m[2] * matB.m[10]) + (m[3] * matB.m[14]));
	result.m[3] = ((m[0] * matB.m[3]) + (m[1] * matB.m[7]) + (m[2] * matB.m[11]) + (m[3] * matB.m[15]));

	result.m[4] = ((m[4] * matB.m[0]) + (m[5] * matB.m[4]) + (m[6] * matB.m[8]) + (m[7] * matB.m[12]));
	result.m[5] = ((m[4] * matB.m[1]) + (m[5] * matB.m[5]) + (m[6] * matB.m[9]) + (m[7] * matB.m[13]));
	result.m[6] = ((m[4] * matB.m[2]) + (m[5] * matB.m[6]) + (m[6] * matB.m[10]) + (m[7] * matB.m[14]));
	result.m[7] = ((m[4] * matB.m[3]) + (m[5] * matB.m[7]) + (m[6] * matB.m[11]) + (m[7] * matB.m[15]));

	result.m[8] = ((m[8] * matB.m[0]) + (m[9] * matB.m[4]) + (m[10] * matB.m[8]) + (m[11] * matB.m[12]));
	result.m[9] = ((m[8] * matB.m[1]) + (m[9] * matB.m[5]) + (m[10] * matB.m[9]) + (m[11] * matB.m[13]));
	result.m[10] = ((m[8] * matB.m[2]) + (m[9] * matB.m[6]) + (m[10] * matB.m[10]) + (m[11] * matB.m[14]));
	result.m[11] = ((m[8] * matB.m[3]) + (m[9] * matB.m[7]) + (m[10] * matB.m[11]) + (m[11] * matB.m[15]));

	result.m[12] = ((m[12] * matB.m[0]) + (m[13] * matB.m[4]) + (m[14] * matB.m[8]) + (m[15] * matB.m[12]));
	result.m[13] = ((m[12] * matB.m[1]) + (m[13] * matB.m[5]) + (m[14] * matB.m[9]) + (m[15] * matB.m[13]));
	result.m[14] = ((m[12] * matB.m[2]) + (m[13] * matB.m[6]) + (m[14] * matB.m[10]) + (m[15] * matB.m[14]));
	result.m[15] = ((m[12] * matB.m[3]) + (m[13] * matB.m[7]) + (m[14] * matB.m[11]) + (m[15] * matB.m[15]));

	return result;
}
//This operator takes all the values in the Matrix44 on the left side of the function and multiplies it by a float value.
Matrix44 Matrix44::operator*(const float &fl)
{
	Matrix44 result;
	result.m[0] = m[0] * fl;
	result.m[1] = m[1] * fl;
	result.m[2] = m[2] * fl;
	result.m[3] = m[3] * fl;

	result.m[4] = m[4] * fl;
	result.m[5] = m[5] * fl;
	result.m[6] = m[6] * fl;
	result.m[7] = m[7] * fl;

	result.m[8] = m[8] * fl;
	result.m[9] = m[9] * fl;
	result.m[10] = m[10] * fl;
	result.m[11] = m[11] * fl;

	result.m[12] = m[12] * fl;
	result.m[13] = m[13] * fl;
	result.m[14] = m[14] * fl;
	result.m[15] = m[15] * fl;

	return result;
}
//This operator takes all the values in the Matrix44 on the left side of the function and divides it by a float value.
Matrix44 Matrix44::operator/(const float &fl)
{
	Matrix44 result;
	result.m[0] = m[0] / fl;
	result.m[1] = m[1] / fl;
	result.m[2] = m[2] / fl;
	result.m[3] = m[3] / fl;

	result.m[4] = m[4] / fl;
	result.m[5] = m[5] / fl;
	result.m[6] = m[6] / fl;
	result.m[7] = m[7] / fl;

	result.m[8] = m[8] / fl;
	result.m[9] = m[9] / fl;
	result.m[10] = m[10] / fl;
	result.m[11] = m[11] / fl;

	result.m[12] = m[12] / fl;
	result.m[13] = m[13] / fl;
	result.m[14] = m[14] / fl;
	result.m[15] = m[15] / fl;

	return result;
}

//These are our bool operators for 'is equal to' and 'is not equal to'. These have been done by using for loops and a count of the amount that are true.
bool Matrix44::operator==(const Matrix44 & matB)
{
	int a = 0;
	for (int i = 0; i < 16; i++)
	{
		if (m[i] == matB.m[i])
		{
			a++;
		}
	}
	if (a == 16)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Matrix44::operator!=(const Matrix44 & matB)
{
	int a = 0;
	for (int i = 0; i < 16; i++)
	{
		if (m[i] != matB.m[i])
		{
			a++;
		}
	}
	if (a == 16)
	{
		return true;
	}
	else
	{
		return false;
	}
}