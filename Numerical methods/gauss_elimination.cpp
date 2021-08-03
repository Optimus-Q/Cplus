#include<iostream>
#include<Eigen/Dense>

using namespace Eigen;

int main()
{
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

	//Get the middle row first element to be zero:

	int mid_row = 1;
	int upval = A(mid_row - int(1), 0);
	int lowval = A(mid_row, 0);
	for (int c = 0; c < 3; c++)
	{
		A(mid_row, c) = upval * A(mid_row, c) - lowval * A(mid_row - int(1), c);
			}
	B(mid_row) = upval * B(mid_row) - lowval * B(mid_row - 1);

	//Get the last row first element to be zero:

	int last_row = 2;
	int upval_m = A(last_row - 2, 0);
	int lowval_m = A(last_row, 0);

	for (int c = 0; c < 3; c++)
	{
		A(last_row, c) = upval_m * A(last_row, c) - lowval_m * A(last_row - 2, c);
	}
	B(last_row) = upval_m * B(last_row) - lowval_m * B(last_row - 2);


	//Get the last row second element to be zero:

	int last_row_ = 2;
	int upval_m_ = A(last_row_ - 1, 1);
	int lowval_m_ = A(last_row_, 1);

	for (int c = 0; c < 3; c++)
	{
		A(last_row_, c) = upval_m_ * A(last_row_, c) - lowval_m_ * A(last_row_ - 1, c);
	}
	B(last_row_) = upval_m_ * B(last_row_) - lowval_m_ * B(last_row_ - 1);

	Vector3f x = A.colPivHouseholderQr().solve(B);

	std::cout << A << std::endl;
	std::cout << B << std::endl;
	std::cout << x;
	//std::cout << y;

}
