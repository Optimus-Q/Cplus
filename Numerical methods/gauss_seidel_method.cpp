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

	// Initial values xo, yo, zo

	float x0, y0, z0, X, Y, Z;
	int iterationN;

	y0 = 0.0;
	z0 = 0.0;

	std::cout << "Enter the total iteration: " << std::endl;
	std::cin >> iterationN;

	for (int i = 0; i < iterationN; i++)
	{
		X = (B(0) / A(0, 0)) - (A(0, 1) / A(0, 0)) * y0 - (A(0, 2) / A(0, 0)) * z0;
		x0 = X;
		Y = (B(1) / A(1, 1)) - (A(1, 0) / A(1, 1)) * x0 - (A(1, 2) / A(1, 1)) * z0;
		y0 = Y;
		Z = (B(2) / A(2, 2)) - (A(2, 0) / A(2, 2)) * x0 - (A(2, 1) / A(2, 2)) * y0;
		z0 = Z;

	}
	std::cout << X << " " << Y << " " << Z << std::endl;

}