#pragma once
#include "Vector3.h"

class Matrix33
{
public:
	float m[9];

	//Constructor/Destructor//
	Matrix33() { identity(); }
	Matrix33(float m0, float m3, float m6,
		float m1, float m4, float m7,
		float m2, float m5, float m8);
	void identity(void);
	~Matrix33();

	//Functions//
	void PrintMatrix();
	void rotate_x(const float & angle);
	void rotate_y(const float & angle);
	void rotate_z(const float & angle);
	void scale(const Vector3 &scale);
	

	//Overload Operations//
	Matrix33 operator+=(const Matrix33 &matB);
	Matrix33 operator-=(const Matrix33 &matB);
	Matrix33 operator*=(const Matrix33 &matB);
	Matrix33 operator*=(const float &fl);
	Matrix33 operator/=(const float &fl);
	Matrix33 operator+(const Matrix33 &matB);
	Matrix33 operator-(const Matrix33 &matB);
	Matrix33 operator*(const Matrix33 &matB);
	Matrix33 operator*(const float &fl);
	Matrix33 operator/(const float &fl);

	bool operator==(const Matrix33 &matB);
	bool operator!=(const Matrix33 &matB);
	
};
