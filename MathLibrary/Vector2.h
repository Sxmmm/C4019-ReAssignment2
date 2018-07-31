#pragma once
class Vector2
{
public:

	float x;
	float y;

	Vector2(void)
	{
		x = 0.0f;
		y = 0.0f;
	}

	//Constructor/Destructor//
	void initialise();
	Vector2(float m_x, float m_y);
	~Vector2();
	
	//Functions//
	static float dotProduct(const Vector2 &v1, const Vector2 &v2);
	static float distance(const Vector2 &v1, const Vector2 &v2);
	static float magnitude(const Vector2 &v1, const Vector2 &v2);
	void printVector();

	//Overloaded Operators//
	const Vector2 & operator+=(const Vector2 &v1);
	const Vector2 & operator-=(const Vector2 &v1);
	const Vector2 & operator*=(const float &v1);
	const Vector2 & operator*=(const Vector2 &v1);
	const Vector2 & operator/=(const Vector2 &v1);
	const Vector2 & operator/=(const float &v1);
	const Vector2 & operator+(const Vector2 &v1);
	const Vector2 & operator-(const Vector2 &v1);
	const Vector2 & operator*(const float & v1);
	const Vector2 & operator*(const Vector2 & v1);
	const Vector2 & operator/(const Vector2 & v1);
	const Vector2 & operator/(const float & v1);
	const Vector2 & operator=(const Vector2 &v1);

};

