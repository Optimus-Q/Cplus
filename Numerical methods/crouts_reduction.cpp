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

	//Derived matrix
	Matrix3f C;
	Vector3f D;

	// First column of the augmented matrix is same for derived matrix
	C(0, 0) = A(0, 0);
	C(1, 0) = A(1, 0);
	C(2, 0) = A(2, 0);

	// first row
	C(0, 1) = A(0, 1) / A(0, 0);
	C(0, 2) = A(0, 2) / A(0, 0);
	D(0) = B(0) / A(0, 0); 

	// Second column:
	C(1, 1) = A(1, 1) - (C(0, 1) * C(1, 0));
	C(2, 1) = A(2, 1) - (C(0, 2) * C(2, 0));
	D(1) = (B(1) - (D(0) * C(1, 0))) / C(1, 1);

	//last
	C(1, 2) = (A(1, 2) - (C(0, 2) * C(1, 0))) / C(1, 1);
	C(2, 2) = A(2, 2) - C(1, 2) * C(2, 1) - C(0, 2) * C(2, 0);
	D(2) = (B(2) - B(1) * C(2, 1) - D(0) * C(2, 0)) / C(2, 2);

	// equation values for x,y,z:

	float x, y, z;

	z = D(2); 
	y = D(1) - C(1, 2) * z;
	x = D(0) - C(0, 2) * z - C(0, 1) * y;

	std::cout << "Actual A: " << A << std::endl;
	std::cout << "Vector A: " << B << std::endl;
	std::cout << "Derived C: " << C << std::endl;
	std::cout << "Derived D: " << D << std::endl;
	std::cout << "X: " << x << " Y: " << y << " Z: " << z << std::endl;
}