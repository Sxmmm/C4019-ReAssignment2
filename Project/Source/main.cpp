#include "Matrix44.h"
#include "Matrix33.h"
#include "Vector3.h"
#include "Vector2.h"

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{

	float x1 = 0.0f;
	float y1 = 0.0f;
	float z1 = 0.0f;
	float x2 = 0.0f;
	float y2 = 0.0f;
	float z2 = 0.0f;

	//Asking user for the input of the first Vector3
	cout << "Vector3 Demonstration.\n";
	cout << "Enter Vector 1 x.\n";
	cin >> x1;
	cout << "Enter Vector 1 y.\n";
	cin >> y1;
	cout << "Enter Vector 1 z.\n";
	cin >> z1;

	//Asking user for the input of the second Vector3
	cout << "Enter Vector 2 x.\n";
	cin >> x2;
	cout << "Enter Vector 2 y.\n";
	cin >> y2;
	cout << "Enter Vector 2 z.\n";
	cin >> z2;

	cin.get();
	cout << "\n\n\n\n";

	//Setting up the v1 Vector3 inputted by the user
	Vector3 v1;
	v1 = Vector3::Vector3(x1, y1, z1);

	//Setting up the v2 Vector3 inputted by the user
	Vector3 v2;
	v2 = Vector3::Vector3(x2, y2, z2);

	//Seting up a Vector3 to hold the value of the cross product
	Vector3 crP;
	crP = Vector3::crossProduct(v1, v2);

	//Setting up a float to hold the value of the dot product
	float dP;
	dP = Vector3::dotProduct(v1, v2);

	//Setting up a float to hold the value of the distance
	float dis;
	dis = Vector3::distance(v1, v2);

	//Setting up a Vector3 to hold the Vectors added together
	Vector3 addition;
	addition = (v1 + v2);

	//Setting up a Vector3 to hold the Vectors minus
	Vector3 subtract;
	subtract = (v1 - v2);

	//Setting up a vector to hold v1 multiplied
	Vector3 multi;
	multi = (v1 * 3);

	//Setting up a vector to hold v2 multiplied
	Vector3 multi1;
	multi1 = (v2 * 3);

	//Setting up a vector to hold our two vectors multiplied together
	Vector3 total;
	total = (v1 * v2);

	//Setting up a vector to hold v1 divided
	Vector3 divide;
	divide = (v1 / 3);

	//Setting up a vector to hold v2 divided
	Vector3 divide1;
	divide1 = (v2 / 3);

	//Setting up a vector to hold our vectors divided together
	Vector3 dividetotal;
	dividetotal = (v1 / v2);

	//Print out the inputs from the user
	cout << "///////////////////\n";
	cout << "Vector1: ";
	v1.printVector();
	cout << "Vector2: ";
	v2.printVector();
	cout << "///////////////////\n";

	cout << "The Cross Product of Vector1 and Vector2 =  ";
	crP.printVector();
	cout << "The Dot Product of Vector1 and Vector2 =  " << dP << "\n";
	cout << "The Distance Between Vector1 and Vector2 =  " << dis << "\n";
	cout << "Vector1 + Vector2 =  ";
	addition.printVector();
	cout << "Vector1 - Vector2 =  ";
	subtract.printVector();
	cout << "Vector1 * 3 =  ";
	multi.printVector();
	cout << "Vector2 * 3 =  ";
	multi1.printVector();
	cout << "Vector1 * Vector2 =  ";
	total.printVector();
	cout << "Vector1 / 3 =  ";
	divide.printVector();
	cout << "Vector2 / 3 =  ";
	divide1.printVector();
	cout << "Vector1 / Vector2 =  ";
	dividetotal.printVector();
	cout << "\n\n";
	cout << "Press 'Enter' to go to Vector2 demonstration...";
	cin.get();

	cout << "\n\n\n\n";

	float xx1 = 0.0f;
	float yy1 = 0.0f;
	float xx2 = 0.0f;
	float yy2 = 0.0f;


	//Asking user for the input of the first Vector2
	cout << "Vector2 Demonstration.\n";
	cout << "Enter Vector 1 x.\n";
	cin >> xx1;
	cout << "Enter Vector 1 y.\n";
	cin >> yy1;

	//Asking user for the input of the second Vector2
	cout << "Enter Vector 2 x.\n";
	cin >> xx2;
	cout << "Enter Vector 2 y.\n";
	cin >> yy2;


	cin.get();
	cout << "\n\n\n\n";

	//Setting up the vv1 Vector2 inputted by the user
	Vector2 vv1;
	vv1 = Vector2::Vector2(xx1, yy1);

	//Setting up the vv2 Vector2 inputted by the user
	Vector2 vv2;
	vv2 = Vector2::Vector2(xx2, yy2);

	//Setting up a float to hold the value of the dot product
	float dP1;
	dP1 = Vector2::dotProduct(vv1, vv2);

	//Setting up a float to hold the value of the distance
	float dis1;
	dis1 = Vector2::distance(vv1, vv2);

	//Setting up a Vector2 to hold the Vectors added together
	Vector2 addition1;
	addition1 = (vv1 + vv2);

	//Setting up a Vector2 to hold the Vectors minus
	Vector2 subtract1;
	subtract1 = (vv1 - vv2);

	//Setting up a vector to hold vv1 multiplied
	Vector2 multi11;
	multi11 = (vv1 * 3);

	//Setting up a vector to hold vv2 multiplied
	Vector2 multi12;
	multi12 = (vv2 * 3);

	Vector2 total1;
	total1 = (vv1 * vv2);

	//Setting up a vector to hold v1 divided
	Vector2 divide11;
	divide11 = (vv1 / 3);

	//Setting up a vector to hold v2 divided
	Vector2 divide12;
	divide12 = (vv2 / 3);

	//Setting up a vector to hold our vectors divided together
	Vector2 dividetotal1;
	dividetotal1 = (vv1 / vv2);

	//Print out the inputs from the user
	cout << "///////////////////\n";
	cout << "Vector1: ";
	vv1.printVector();
	cout << "Vector2: ";
	vv2.printVector();
	cout << "///////////////////\n";

	cout << "The Dot Product of Vector1 and Vector2 =  " << dP1 << "\n";
	cout << "The Distance Between Vector1 and Vector2 =  " << dis1 << "\n";
	cout << "Vector1 + Vector2 =  ";
	addition1.printVector();
	cout << "Vector1 - Vector2 =  ";
	subtract1.printVector();
	cout << "Vector1 * 3 =  ";
	multi11.printVector();
	cout << "Vector2 * 3 =  ";
	multi12.printVector();
	cout << "Vector1 * Vector2 =  ";
	total1.printVector();
	cout << "Vector1 / 3 =  ";
	divide11.printVector();
	cout << "Vector2 / 3 =  ";
	divide12.printVector();
	cout << "Vector1 / Vector2 =  ";
	dividetotal1.printVector();
	cout << "\n\n";
	cout << "Press 'Enter' to go to Matrix3 demonstration...";
	cin.get();


	cout << "\n\n\n\n";



	Matrix33 Matrix1;
	Matrix1 = Matrix33::Matrix33(0, 1, 2, 3, 4, 5, 6, 7, 8);

	Matrix33 Matrix2;
	Matrix2 = Matrix33::Matrix33(9, 10, 11, 12, 13, 14, 15, 16, 17);

	Matrix33 mAdd;
	mAdd = (Matrix1 + Matrix2);

	Matrix33 mSub;
	mSub = (Matrix1 - Matrix2);

	Matrix33 mMulti1;
	mMulti1 = (Matrix1 * 3);

	Matrix33 mMulti2;
	mMulti2 = (Matrix2 * 3);

	Matrix33 mMultiTotal;
	mMultiTotal = (Matrix1 * Matrix2);

	Matrix33 mDivide1;
	mDivide1 = (Matrix1 / 3);

	Matrix33 mDivide2;
	mDivide2 = (Matrix2 / 3);

	cout << "\\\\\\\\\\\\\\\\\\ \n";
	cout << "---------Matrix1:\n";
	Matrix1.PrintMatrix();
	cout << "---------Matrix2:\n";
	Matrix2.PrintMatrix();
	cout << "\\\\\\\\\\\\\\\\\\ \n";
	cout << "---------Matrix1 + Matrix2 =  \n";
	mAdd.PrintMatrix();
	cout << "---------Matrix1 - Matrix2 =  \n";
	mSub.PrintMatrix();
	cout << "---------Matrix1 * 3 =  \n";
	mMulti1.PrintMatrix();
	cout << "---------Matrix2 * 3 =  \n";
	mMulti2.PrintMatrix();
	cout << "Press 'Enter' to see the rest of the Matrix3 demonstration...";
	cin.get();
	cout << "\n---------Matrix1 * Matrix2 =  \n";
	mMultiTotal.PrintMatrix();
	cout << "---------Matrix1 / 3 =  \n";
	mDivide1.PrintMatrix();
	cout << "---------Matrix2 / 3 =  \n";
	mDivide2.PrintMatrix();
	cout << "------------------\n";
	if (Matrix1 == Matrix2)
	{
		cout << "The two matrices are equal.\n";
	}
	else {
		cout << "The two matrices are not equal.\n";
	}


	cout << "Press 'Enter' to go to Matrix4 demonstration...";
	cin.get();


	cout << "\n\n\n\n";


	Matrix44 m4Matrix1;
	m4Matrix1 = Matrix44::Matrix44(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15);

	Matrix44 m4Matrix2;
	m4Matrix2 = Matrix44::Matrix44(16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31);

	Matrix44 m4Add;
	m4Add = (m4Matrix1 + m4Matrix2);

	Matrix44 m4Sub;
	m4Sub = (m4Matrix1 - m4Matrix2);

	Matrix44 m4Multi;
	m4Multi = (m4Matrix1 * 3);

	Matrix44 m4Multi1;
	m4Multi1 = (m4Matrix2 * 3);

	Matrix44 m4MultiTotal;
	m4MultiTotal = (m4Matrix1 * m4Matrix2);

	Matrix44 m4Divide1;
	m4Divide1 = (m4Matrix1 / 3);

	Matrix44 m4Divide2;
	m4Divide2 = (m4Matrix2 / 3);


	cout << "\\\\\\\\\\\\\\\\\\\\\ \n";
	cout << "Matrix1:\n";
	m4Matrix1.PrintMatrix();
	cout << "Matrix2:\n";
	m4Matrix2.PrintMatrix();
	cout << "\\\\\\\\\\\\\\\\\\\\\ \n";
	cout << "---------Matrix1 + Matrix2 =  \n";
	m4Add.PrintMatrix();
	cout << "---------Matrix1 - Matrix2 =  \n";
	m4Sub.PrintMatrix();
	cout << "Press 'Enter' to see the rest of the Matrix4 demonstration...";
	cin.get();
	cout << "---------Matrix1 * 3 =  \n";
	m4Multi.PrintMatrix();
	cout << "---------Matrix2 * 3 =  \n";
	m4Multi1.PrintMatrix();
	cout << "------------------Matrix1 * Matrix2 =  \n";
	m4MultiTotal.PrintMatrix();
	cout << "------------------Matrix1 / 3 =  \n";
	m4Divide1.PrintMatrix();
	cout << "------------------Matrix2 / 3 =  \n";
	m4Divide2.PrintMatrix();
	cout << "------------------\n";
	if (m4Matrix1 == m4Matrix2)
	{
		cout << "The two matrices are equal.\n";
	}
	else {
		cout << "The two matrices are not equal.\n";
	}

	cin.get();


	////Print Matrix A
	//p = 0;
	//for (int i = 0; i < 4; i++)
	//{
	//	cout << "\n";
	//	for (int j = 0; j < 4; j++)
	//	{
	//		cout << matrixA[p] << " ";
	//		p++;
	//	}
	//}

	//cout << "\n";

	////Print Matrix B
	//p = 0;
	//for (int i = 0; i < 4; i++)
	//{
	//	cout << "\n";
	//	for (int j = 0; j < 4; j++)
	//	{
	//		cout << matrixB[p] << " ";
	//		p++;
	//	}
	//}

	

}