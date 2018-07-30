#include "Matrix33.h"

#include <iostream>
using namespace std;

#define M_PI 3.14159265358979323846264338327950288
#define DEG_TO_RAD(angle) ((angle) / 180.0 * M_PI)

//Constructor/Destructor//
Matrix33::Matrix33(float m0, float m1, float m2, float m3, float m4, float m5, float m6, float m7, float m8)
{
	m[0] = m0;
	m[1] = m1;
	m[2] = m2;
	m[3] = m3;
	m[4] = m4;
	m[5] = m5;
	m[6] = m6;
	m[7] = m7;
	m[8] = m8;
}
///////////
// 1 0 0 //
// 0 1 0 //
// 0 0 1 //
///////////
void Matrix33::identity(void)
{
	m[0] = 1.0f; m[3] = 0.0f; m[6] = 0.0f;
	m[1] = 0.0f; m[4] = 1.0f; m[7] = 0.0f;
	m[2] = 0.0f; m[5] = 0.0f; m[8] = 1.0f;
}
Matrix33::~Matrix33()
{

}

//Functions//
void Matrix33::scale(const Vector3 &scale)
{
	m[0] = scale.x;
	m[4] = scale.y;
	m[8] = scale.z;
}
void Matrix33::PrintMatrix()
{
	cout << m[0] << " " << m[1] << " " << m[2] << " \n";
	cout << m[3] << " " << m[4] << " " << m[5] << " \n";
	cout << m[6] << " " << m[7] << " " << m[8] << " \n";
}
void Matrix33::rotate_x(const float &angle)
{
	float s = sin(DEG_TO_RAD(angle));
	float c = cos(DEG_TO_RAD(angle));
	m[4] = c;
	m[5] = s;
	m[7] = -s;
	m[8] = c;
}
void Matrix33::rotate_y(const float &angle)
{
	float s = sin(DEG_TO_RAD(angle));
	float c = cos(DEG_TO_RAD(angle));
	m[0] = c;
	m[2] = -s;
	m[6] = s;
	m[8] = c;
}
void Matrix33::rotate_z(const float &angle)
{
	float s = sin(DEG_TO_RAD(angle));
	float c = cos(DEG_TO_RAD(angle));
	m[0] = c;
	m[1] = s;
	m[3] = -s;
	m[4] = c;
}


//Overload Operations//
Matrix33 Matrix33::operator+=(const Matrix33 &matB)
{
	Matrix33 result;
	result.m[0] = m[0] += matB.m[0];
	result.m[1] = m[1] += matB.m[1];
	result.m[2] = m[2] += matB.m[2];

	result.m[3] = m[3] += matB.m[3];
	result.m[4] = m[4] += matB.m[4];
	result.m[5] = m[5] += matB.m[5];

	result.m[6] = m[6] += matB.m[6];
	result.m[7] = m[7] += matB.m[7];
	result.m[8] = m[8] += matB.m[8];

	return result;
}
Matrix33 Matrix33::operator-=(const Matrix33 &matB)
{
	Matrix33 result;
	result.m[0] = m[0] -= matB.m[0];
	result.m[1] = m[1] -= matB.m[1];
	result.m[2] = m[2] -= matB.m[2];

	result.m[3] = m[3] -= matB.m[3];
	result.m[4] = m[4] -= matB.m[4];
	result.m[5] = m[5] -= matB.m[5];

	result.m[6] = m[6] -= matB.m[6];
	result.m[7] = m[7] -= matB.m[7];
	result.m[8] = m[8] -= matB.m[8];

	return result;
}
Matrix33 Matrix33::operator*=(const Matrix33 &matB)
{
	Matrix33 result;
	result.m[0] *= ((m[0] * matB.m[0]) + (m[1] * matB.m[3]) + (m[2] * matB.m[6]));
	result.m[1] *= ((m[0] * matB.m[1]) + (m[1] * matB.m[4]) + (m[2] * matB.m[7]));
	result.m[2] *= ((m[0] * matB.m[2]) + (m[1] * matB.m[5]) + (m[2] * matB.m[8]));

	result.m[3] *= ((m[3] * matB.m[0]) + (m[4] * matB.m[3]) + (m[5] * matB.m[6]));
	result.m[4] *= ((m[3] * matB.m[1]) + (m[4] * matB.m[4]) + (m[5] * matB.m[7]));
	result.m[5] *= ((m[3] * matB.m[2]) + (m[4] * matB.m[5]) + (m[5] * matB.m[8]));

	result.m[6] *= ((m[6] * matB.m[0]) + (m[7] * matB.m[3]) + (m[8] * matB.m[6]));
	result.m[7] *= ((m[6] * matB.m[1]) + (m[7] * matB.m[4]) + (m[8] * matB.m[7]));
	result.m[8] *= ((m[6] * matB.m[2]) + (m[7] * matB.m[5]) + (m[8] * matB.m[8]));

	return result;
}
Matrix33 Matrix33::operator*=(const float &fl)
{
	Matrix33 result;
	result.m[0] *= fl;
	result.m[1] *= fl;
	result.m[2] *= fl;

	result.m[3] *= fl;
	result.m[4] *= fl;
	result.m[5] *= fl;

	result.m[6] *= fl;
	result.m[7] *= fl;
	result.m[8] *= fl;

	return result;
}
Matrix33 Matrix33::operator/=(const float &fl)
{
	Matrix33 result;
	result.m[0] /= fl;
	result.m[1] /= fl;
	result.m[2] /= fl;

	result.m[3] /= fl;
	result.m[4] /= fl;
	result.m[5] /= fl;

	result.m[6] /= fl;
	result.m[7] /= fl;
	result.m[8] /= fl;

	return result;
}
Matrix33 Matrix33::operator+(const Matrix33 &matB)
{
	Matrix33 result;
	result.m[0] = m[0] + matB.m[0];
	result.m[1] = m[1] + matB.m[1];
	result.m[2] = m[2] + matB.m[2];

	result.m[3] = m[3] + matB.m[3];
	result.m[4] = m[4] + matB.m[4];
	result.m[5] = m[5] + matB.m[5];

	result.m[6] = m[6] + matB.m[6];
	result.m[7] = m[7] + matB.m[7];
	result.m[8] = m[8] + matB.m[8];

	return result;
}
Matrix33 Matrix33::operator-(const Matrix33 &matB)
{
	Matrix33 result;
	result.m[0] = m[0] - matB.m[0];
	result.m[1] = m[1] - matB.m[1];
	result.m[2] = m[2] - matB.m[2];

	result.m[3] = m[3] - matB.m[3];
	result.m[4] = m[4] - matB.m[4];
	result.m[5] = m[5] - matB.m[5];

	result.m[6] = m[6] - matB.m[6];
	result.m[7] = m[7] - matB.m[7];
	result.m[8] = m[8] - matB.m[8];

	return result;
}
Matrix33 Matrix33::operator*(const Matrix33 &matB)
{
	Matrix33 result;
	result.m[0] = ((m[0] * matB.m[0]) + (m[1] * matB.m[3]) + (m[2] * matB.m[6]));
	result.m[1] = ((m[0] * matB.m[1]) + (m[1] * matB.m[4]) + (m[2] * matB.m[7]));
	result.m[2] = ((m[0] * matB.m[2]) + (m[1] * matB.m[5]) + (m[2] * matB.m[8]));

	result.m[3] = ((m[3] * matB.m[0]) + (m[4] * matB.m[3]) + (m[5] * matB.m[6]));
	result.m[4] = ((m[3] * matB.m[1]) + (m[4] * matB.m[4]) + (m[5] * matB.m[7]));
	result.m[5] = ((m[3] * matB.m[2]) + (m[4] * matB.m[5]) + (m[5] * matB.m[8]));

	result.m[6] = ((m[6] * matB.m[0]) + (m[7] * matB.m[3]) + (m[8] * matB.m[6]));
	result.m[7] = ((m[6] * matB.m[1]) + (m[7] * matB.m[4]) + (m[8] * matB.m[7]));
	result.m[8] = ((m[6] * matB.m[2]) + (m[7] * matB.m[5]) + (m[8] * matB.m[8]));

	return result;
}
Matrix33 Matrix33::operator*(const float &fl)
{
	Matrix33 result;
	result.m[0] = m[0] * fl;
	result.m[1] = m[1] * fl;
	result.m[2] = m[2] * fl;

	result.m[3] = m[3] * fl;
	result.m[4] = m[4] * fl;
	result.m[5] = m[5] * fl;

	result.m[6] = m[6] * fl;
	result.m[7] = m[7] * fl;
	result.m[8] = m[8] * fl;

	return result;
}
Matrix33 Matrix33::operator/(const float &fl)
{
	Matrix33 result;
	result.m[0] = m[0] / fl;
	result.m[1] = m[1] / fl;
	result.m[2] = m[2] / fl;

	result.m[3] = m[3] / fl;
	result.m[4] = m[4] / fl;
	result.m[5] = m[5] / fl;

	result.m[6] = m[6] / fl;
	result.m[7] = m[7] / fl;
	result.m[8] = m[8] / fl;

	return result;
}

bool Matrix33::operator==(const Matrix33 & matB)
{
	int a = 0;
	for (int i = 0; i < 9; i++)
	{		
		if (m[i] == matB.m[i])
		{
			a++;
		}
	}
	if (a == 9)
	{
		return true;
	}
	else
	{
		return false;
	}	
}
bool Matrix33::operator!=(const Matrix33 & matB)
{
	int a = 0;
	for (int i = 0; i < 9; i++)
	{
		if (m[i] != matB.m[i])
		{
			a++;
		}
	}
	if (a == 9)
	{
		return true;
	}
	else
	{
		return false;
	}
}