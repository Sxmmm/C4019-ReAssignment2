#pragma once

#include "Vector3.h"

class Matrix44
{
private:

public:
	float m[16];

	//Constructor/Destructor//
	Matrix44() { identity(); }
	Matrix44(float m0, float m4, float m8, float m12,
			 float m1, float m5, float m9, float m13,
			 float m2, float m6, float m10, float m14,
			 float m3, float m7, float m11, float m15 );
	void identity(void);
	~Matrix44();

	//Functions
	void PrintMatrix();
	void translate(const Vector3 &trans);
	void rotate_x(const float &angle);
	void rotate_y(const float &angle);
	void rotate_z(const float &angle);
	void scale(const Vector3 &scale);

	//Overload Operations//
	Matrix44 operator += (const Matrix44 &matB);
	Matrix44 operator -= (const Matrix44 &matB);
	Matrix44 operator*=(const Matrix44 &matB);
	Matrix44 operator*=(const float &fl);
	Matrix44 operator/=(const float &fl);
	Matrix44 operator + (const Matrix44 &matB);
	Matrix44 operator - (const Matrix44 &matB);
	Matrix44 operator*(const Matrix44 &matB);
	Matrix44 operator*(const float &fl);
	Matrix44 operator/(const float &fl);
	
	bool operator==(const Matrix44 &matB);
	bool operator!=(const Matrix44 &matB);
};

