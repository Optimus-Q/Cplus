#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;

int main()

{

	Matrix3i A;
	A(0, 0) = 2;
	A(0, 1) = 1;
	A(0, 2) = 1;

	A(1, 0) = 1;
	A(1, 1) = -1;
	A(1, 2) = -1;

	A(2, 0) = 1;
	A(2, 1) = 2;
	A(2, 2) = 1;

	Vector3i B;
	B(0) = 3;
	B(1) = 0;
	B(2) = 0;

	//Overall matrix determinant:
	float Det = A.determinant();
	float Det_X, Det_Y, Det_Z;
	int totRow = A.rows();
	int totCol = A.cols();
	Matrix3i Aprime = A;


	for (int c = 0; c < totCol; c++)
	{
		for (int r = 0; r < totRow; r++)
		{
			Aprime(r, c) = B(r);
		}
		std::cout << "Matrix orientation at each iteration:" << std::endl;
		std::cout << Aprime << std::endl;
		if (c == 0)
		{
			Det_X = Aprime.determinant();
		}
		else if (c == 1)
		{
			Det_Y = Aprime.determinant();
		}
		else if (c == 2)
		{
			Det_Z = Aprime.determinant();
		}
		Aprime = A;
	}
	std::cout << "The determinants: " << std::endl;
	std::cout << Det << " " << Det_X << " " << Det_Y << " " << Det_Z << std::endl;

	float x, y, z;

	x = float(Det_X) / float(Det);
	y = float(Det_Y) / float(Det);
	z = float(Det_Z) / float(Det);

	std::cout << "X: " << x << " " << "Y: " <<y <<" "<< "Z: " << z << std::endl;

}