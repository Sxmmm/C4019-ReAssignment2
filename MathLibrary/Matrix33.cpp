#include "Matrix33.h"

#include <iostream>
using namespace std;



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
///////////
// 1 0 0 //
// 0 1 0 //
// 0 0 1 //
///////////
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
	result.m[0] *= matB.m[0];
	result.m[1] *= matB.m[1];
	result.m[2] *= matB.m[2];

	result.m[3] *= matB.m[3];
	result.m[4] *= matB.m[4];
	result.m[5] *= matB.m[5];

	result.m[6] *= matB.m[6];
	result.m[7] *= matB.m[7];
	result.m[8] *= matB.m[8];

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
Matrix33 Matrix33::operator/=(const Matrix33 &matB)
{
	Matrix33 result;
	result.m[0] /= matB.m[0];
	result.m[1] /= matB.m[1];
	result.m[2] /= matB.m[2];

	result.m[3] /= matB.m[3];
	result.m[4] /= matB.m[4];
	result.m[5] /= matB.m[5];

	result.m[6] /= matB.m[6];
	result.m[7] /= matB.m[7];
	result.m[8] /= matB.m[8];

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
	result.m[0] = m[0] * matB.m[0];
	result.m[1] = m[1] * matB.m[1];
	result.m[2] = m[2] * matB.m[2];

	result.m[3] = m[3] * matB.m[3];
	result.m[4] = m[4] * matB.m[4];
	result.m[5] = m[5] * matB.m[5];

	result.m[6] = m[6] * matB.m[6];
	result.m[7] = m[7] * matB.m[7];
	result.m[8] = m[8] * matB.m[8];

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
Matrix33 Matrix33::operator/(const Matrix33 &matB)
{
	Matrix33 result;
	result.m[0] = m[0] / matB.m[0];
	result.m[1] = m[1] / matB.m[1];
	result.m[2] = m[2] / matB.m[2];

	result.m[3] = m[3] / matB.m[3];
	result.m[4] = m[4] / matB.m[4];
	result.m[5] = m[5] / matB.m[5];

	result.m[6] = m[6] / matB.m[6];
	result.m[7] = m[7] / matB.m[7];
	result.m[8] = m[8] / matB.m[8];

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
