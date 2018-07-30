#include "Matrix44.h"
#include "Matrix33.h"
#include "Vector3.h"
#include "Vector2.h"

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	////////////////////////////////
	////////////////////////////////
	////         Vector3        ////
	////      Demonstration     ////
	////////////////////////////////
	////////////////////////////////
	//Setting up integers so the user can input specific integers for our vectors
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

	//Correclty pausing the command prompt
	cin.get();
	//Printing blank lines to make it easier to see whats going on
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
	//Printing the cross produnt of the two Vector3 vectors
	cout << "The Cross Product of Vector1 and Vector2 =  ";
	crP.printVector();
	//Printing out the dot product of the two Vector3 vectors
	cout << "The Dot Product of Vector1 and Vector2 =  " << dP << "\n";
	//Printing the distance between the two Vector3 vectors
	cout << "The Distance Between Vector1 and Vector2 =  " << dis << "\n";
	//Printing the two Vector3 vectors added together
	cout << "Vector1 + Vector2 =  ";
	addition.printVector();
	//Printing the two Vector3 vectors minused
	cout << "Vector1 - Vector2 =  ";
	subtract.printVector();
	//Printing Vector3's Vector1 multiplied by 3
	cout << "Vector1 * 3 =  ";
	multi.printVector();
	//Printing Vector3's Vector2 multiplied by 3
	cout << "Vector2 * 3 =  ";
	multi1.printVector();
	//Printing the Vector3 vectors multiplied together
	cout << "Vector1 * Vector2 =  ";
	total.printVector();
	//Printing Vector3's Vector1 divided by 3
	cout << "Vector1 / 3 =  ";
	divide.printVector();
	//Printing Vector3's Vector2 divided by 3
	cout << "Vector2 / 3 =  ";
	divide1.printVector();
	//Printing the Vector3 vectors divided
	cout << "Vector1 / Vector2 =  ";
	dividetotal.printVector();
	cout << "\n\n";
	//Telling the user to press enter to see the Vector2 demonstration
	cout << "Press 'Enter' to go to Vector2 demonstration...";
	//Pausing the command prompt to be able to read the results
	cin.get();
	//Printing blank lines to make it easier to see whats going on
	cout << "\n\n\n\n";


	////////////////////////////////
	////////////////////////////////
	////         Vector2        ////
	////      Demonstration     ////
	////////////////////////////////
	////////////////////////////////

	//Setting up integers so the user can input specific integers for our vectors
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
	//Printing the cross produnt of the two Vector2 vectors
	cout << "The Dot Product of Vector1 and Vector2 =  " << dP1 << "\n";
	//Printing out the dot product of the two Vector2 vectors
	cout << "The Distance Between Vector1 and Vector2 =  " << dis1 << "\n";
	//Printing the two Vector2 vectors added together
	cout << "Vector1 + Vector2 =  ";
	addition1.printVector();
	//Printing the two Vector2 vectors minused
	cout << "Vector1 - Vector2 =  ";
	subtract1.printVector();
	//Printing Vector2's Vector1 multiplied by 3
	cout << "Vector1 * 3 =  ";
	multi11.printVector();
	//Printing Vector2's Vector2 multiplied by 3
	cout << "Vector2 * 3 =  ";
	multi12.printVector();
	//Printing the Vector2 vectors multiplied together
	cout << "Vector1 * Vector2 =  ";
	total1.printVector();
	//Printing Vector2's Vector1 divided by 3
	cout << "Vector1 / 3 =  ";
	divide11.printVector();
	//Printing Vector2's Vector1 divided by 3
	cout << "Vector2 / 3 =  ";
	divide12.printVector();
	//Printing the Vector2 vectors divided
	cout << "Vector1 / Vector2 =  ";
	dividetotal1.printVector();
	cout << "\n\n";
	//Telling the user to press enter to see the Matrix3 demonstration
	cout << "Press 'Enter' to go to Matrix3 demonstration...";
	cin.get();


	cout << "\n\n\n\n";


	////////////////////////////////
	////////////////////////////////
	////         Matrix3        ////
	////      Demonstration     ////
	////////////////////////////////
	////////////////////////////////

	//Setting up variables for the user to use as it would take alot of time
	//	to type in so many matrices
	Matrix33 Matrix1;
	Matrix1 = Matrix33::Matrix33(0, 1, 2, 3, 4, 5, 6, 7, 8);
	Matrix33 Matrix2;
	Matrix2 = Matrix33::Matrix33(9, 10, 11, 12, 13, 14, 15, 16, 17);
	//Setting up a Matrix33 to hold our matrices added together
	Matrix33 mAdd;
	mAdd = (Matrix1 + Matrix2);
	//Setting up a Matrix33 to hold our matrices minused
	Matrix33 mSub;
	mSub = (Matrix1 - Matrix2);
	//Setting up a Matrix33 to hold Matrix1 multiplied by 3
	Matrix33 mMulti1;
	mMulti1 = (Matrix1 * 3);
	//Setting up a Matrix33 to hold Matrix2 multiplied by 3
	Matrix33 mMulti2;
	mMulti2 = (Matrix2 * 3);
	//Setting up a Matrix33 to hold our matrices multiplied
	Matrix33 mMultiTotal;
	mMultiTotal = (Matrix1 * Matrix2);
	//Setting up a Matrix33 to hold Matrix1 divided by 3
	Matrix33 mDivide1;
	mDivide1 = (Matrix1 / 3);
	//Setting up a Matrix33 to hold Matrix2 divided by 3
	Matrix33 mDivide2;
	mDivide2 = (Matrix2 / 3);
	//Setting up a Vector3 to demonstrate a vector multiplied by a matrice
	Vector3 vxm;
	vxm = (v1 * Matrix1);
	//Print out the matrices for the user to see
	cout << "\\\\\\\\\\\\\\\\\\ \n";
	cout << "---------Matrix1:\n";
	Matrix1.PrintMatrix();
	cout << "---------Matrix2:\n";
	Matrix2.PrintMatrix();
	cout << "\\\\\\\\\\\\\\\\\\ \n";
	//Printing the two matrices added together
	cout << "---------Matrix1 + Matrix2 =  \n";
	mAdd.PrintMatrix();
	//Printing the two matrices minused
	cout << "---------Matrix1 - Matrix2 =  \n";
	mSub.PrintMatrix();
	//Printing Matrix1 multiplied by 3
	cout << "---------Matrix1 * 3 =  \n";
	mMulti1.PrintMatrix();
	//Printing Matrix2 multiplied by 3
	cout << "---------Matrix2 * 3 =  \n";
	mMulti2.PrintMatrix();
	//Printing our previous Vector3 'Vector1'(from other demo) multiplied by Matrix1
	cout << "---------(" << v1.x << " " << v1.y << " " << v1.z << ") * " << "Matrix1" << " =  \n";
	vxm.printVector();
	//Telling the user to press 'Enter' to see the rest of the Matrix3 demonstration
	cout << "Press 'Enter' to see the rest of the Matrix3 demonstration...";
	cin.get();
	//Printing our two Matrix33 multiplied together
	cout << "\n---------Matrix1 * Matrix2 =  \n";
	mMultiTotal.PrintMatrix();
	//Printing Matrix1 divided by 3
	cout << "---------Matrix1 / 3 =  \n";
	mDivide1.PrintMatrix();
	//Printing Matrix2 divided by 3
	cout << "---------Matrix2 / 3 =  \n";
	mDivide2.PrintMatrix();
	cout << "------------------\n";
	//Checking if the two matrices are equal
	//If they are equal it will print out saying they are equal
	if (Matrix1 == Matrix2)
	{
		cout << "The two matrices are equal.\n";
	}
	//If they arent equal it will print our that they arent equal
	else {
		cout << "The two matrices are not equal.\n";
	}

	//Telling the user to press enter to go to the Matrix4 demonstration
	cout << "Press 'Enter' to go to Matrix4 demonstration...";
	cin.get();


	cout << "\n\n\n\n";


	////////////////////////////////
	////////////////////////////////
	////         Matrix4        ////
	////      Demonstration     ////
	////////////////////////////////
	////////////////////////////////

	//Setting up variables for the user to use as it would take alot of time
	//	to type in so many matrices
	Matrix44 m4Matrix1;
	m4Matrix1 = Matrix44::Matrix44(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15);
	Matrix44 m4Matrix2;
	m4Matrix2 = Matrix44::Matrix44(16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31);
	//Setting up a Matrix44 to hold our matrices added together
	Matrix44 m4Add;
	m4Add = (m4Matrix1 + m4Matrix2);
	//Setting up a Matrix44 to hold our matrices minused
	Matrix44 m4Sub;
	m4Sub = (m4Matrix1 - m4Matrix2);
	//Setting up a Matrix44 to hold Matrix1 multiplied by 3
	Matrix44 m4Multi;
	m4Multi = (m4Matrix1 * 3);
	//Setting up a Matrix44 to hold Matrix2 multiplied by 3
	Matrix44 m4Multi1;
	m4Multi1 = (m4Matrix2 * 3);
	//Setting up a Matrix44 to hold our matrices multiplied
	Matrix44 m4MultiTotal;
	m4MultiTotal = (m4Matrix1 * m4Matrix2);
	//Setting up a Matrix44 to hold Matrix1 divided by 3
	Matrix44 m4Divide1;
	m4Divide1 = (m4Matrix1 / 3);
	//Setting up a Matrix44 to hold Matrix2 divided by 3
	Matrix44 m4Divide2;
	m4Divide2 = (m4Matrix2 / 3);

	//Print out the matrices for the user to see
	cout << "\\\\\\\\\\\\\\\\\\\\\ \n";
	cout << "Matrix1:\n";
	m4Matrix1.PrintMatrix();
	cout << "Matrix2:\n";
	m4Matrix2.PrintMatrix();
	cout << "\\\\\\\\\\\\\\\\\\\\\ \n";
	//Printing the two matrices added together
	cout << "---------Matrix1 + Matrix2 =  \n";
	m4Add.PrintMatrix();
	//Printing the two matrices minused
	cout << "---------Matrix1 - Matrix2 =  \n";
	m4Sub.PrintMatrix();
	//Telling the user to press 'Enter' to see the rest of the Matrix4 demonstration
	cout << "Press 'Enter' to see the rest of the Matrix4 demonstration...";
	cin.get();
	//Printing Matrix1 multiplied by 3
	cout << "---------Matrix1 * 3 =  \n";
	m4Multi.PrintMatrix();
	//Printing Matrix2 multiplied by 3
	cout << "---------Matrix2 * 3 =  \n";
	m4Multi1.PrintMatrix();
	//Printing our two Matrix33 multiplied together
	cout << "------------------Matrix1 * Matrix2 =  \n";
	m4MultiTotal.PrintMatrix();
	//Printing Matrix1 divided by 3
	cout << "------------------Matrix1 / 3 =  \n";
	m4Divide1.PrintMatrix();
	//Printing Matrix2 divided by 3
	cout << "------------------Matrix2 / 3 =  \n";
	m4Divide2.PrintMatrix();
	cout << "------------------\n";
	//Checking if the two matrices are equal
	//If they are equal it will print out saying they are equal
	if (m4Matrix1 == m4Matrix2)
	{
		cout << "The two matrices are equal.\n";
	}
	//If they arent equal it will print our that they arent equal
	else {
		cout << "The two matrices are not equal.\n";
	}

	cin.get();

}