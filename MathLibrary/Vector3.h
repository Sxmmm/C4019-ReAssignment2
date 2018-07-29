#pragma once
class Matrix33;

class Vector3
{
public:

	float x;
	float y;
	float z;

	Vector3(void)
	{
		x = 0.0f;
		y = 0.0f;
		z = 0.0f;
	}

	//Constructor/Destructor
	void initialise();
	Vector3(float m_x, float m_y, float m_z);
	~Vector3();

	//Functions
	static Vector3 crossProduct(const Vector3 &v1, const Vector3 &v2);
	static float dotProduct(const Vector3 &v1, const Vector3 &v2);
	static float distance(const Vector3 &v1, const Vector3 &v2);
	void printVector();

	//Overloaded Operators
	const Vector3 & operator+=(const Vector3 &v1);
	const Vector3 & operator+(const Vector3 &v1);
	const Vector3 & operator-=(const Vector3 &v1);
	const Vector3 & operator-(const Vector3 &v1);
	const Vector3 & operator=(const Vector3 &v1);
	const Vector3 & operator*=(const float &v1);
	const Vector3 & operator*=(const Vector3 &v1);
	const Vector3 & operator/=(const Vector3 &v1);
	const Vector3 & operator/=(const float & v1);
	const Vector3 & operator*(const float & v1);
	const Vector3 & operator*(const Vector3 & v1);
	const Vector3 & operator/(const Vector3 & v1);
	const Vector3 & operator/(const float & v1)

};