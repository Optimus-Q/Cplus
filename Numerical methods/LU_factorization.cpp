#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;

int main()
{
	//Augmented matrix
	Matrix3f A;
	Vector3f B;

	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			int elements;
			std::cout << "Enter the matrix elements of position: " << (r, c) << std::endl;
			std::cin >> elements;
			A(r, c) = elements;
		}
	}

	for (int v = 0; v < 3; v++)
	{
		int vecEl;
		std::cout << "Enter the vector elements: " << std::endl;
		std::cin >> vecEl;
		B(v) = vecEl;
	}

	//LU matrix
	Matrix3f L;
	Matrix3f U;

	U(0, 0) = A(0, 0);
	U(0, 1) = A(0, 1);
	U(0, 2) = A(0, 2);
	U(1, 0) = 0.0;
	U(1, 1) = A(1, 1) - (A(1, 0) / A(0, 0)) * A(0, 1);
	U(1, 2) = A(1, 2) - (A(1, 0) / A(0, 0)) * A(0, 2);
	U(2, 0) = 0.0;
	U(2, 1) = 0.0;
	L(0, 0) = 1.0;
	L(0, 1) = 0.0;
	L(0, 2) = 0.0;
	L(1, 0) = A(1, 0) / A(0, 0);
	L(1, 1) = 1.0;
	L(1, 2) = 0.0;
	L(2, 0) = A(2, 0) / A(0, 0);
	L(2, 1) = (A(2, 1) - (A(2, 0) / A(0, 0)) * A(0, 1)) / U(1, 1);
	L(2, 2) = 1.0;
	U(2, 2) = A(2, 2) - L(2, 0) * U(0, 2) - L(2, 1) * U(1, 2);

	float x1, x2, x3, y1, y2, y3;

	y1 = B(0) / L(0, 0);
	y2 = B(1) - L(1, 0) * y1;
	y3 = B(2) - L(2, 0) * y1 - L(2, 1) * y2;

	x3 = y3 / U(2, 2);
	x2 = (y2 - U(1, 2) * x3) / U(1, 1);
	x1 = (y1 - U(0, 2) * x3 - U(0, 1) * x2) / U(0, 0);

	std::cout << L << std::endl;
	std::cout << U << std::endl;
	std::cout << "Y1: " << y1 << " Y2: " << y2 << " Y3: " << y3 << std::endl;
	std::cout << "X: " << x1 << " Y: " << x2 << " Z: " << x3 << std::endl;
}