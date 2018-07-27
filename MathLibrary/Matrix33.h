#pragma once
#include "Vector3.h"

class Matrix33
{
public:
	float m[9];

	Matrix33() { identity(); }

	Matrix33(float m0, float m3, float m6,
		float m1, float m4, float m7,
		float m2, float m5, float m8);

	void identity(void);
	void scale(const Vector3 &scale);
	Matrix33 operator + (const Matrix33 &matB);
	Matrix33 operator - (const Matrix33 &matB);
	Matrix33 operator += (const Matrix33 &matB);
	Matrix33 operator -= (const Matrix33 &matB);

};
