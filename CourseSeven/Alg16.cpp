//#include<iostream>
//#include<iomanip>
//#include <cstdlib> 
//
//using namespace std;
//int RandomNumber(int From, int To)
//{
//	int RandNum = rand() % (To - From + 1) + From;
//	return RandNum;
//
//}
//void FillMatrrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
//{
//	for (int i = 0; i < Rows; i++)
//	{
//		for (int j = 0; j < Cols; j++)
//		{
//			arr[i][j] = RandomNumber(1, 10);
//		}
//	}
//}
//
//void PrintMatrix(int arr[3][3], short Rows, short Cols)
//{
//	for (int i = 0; i < Rows; i++)
//	{
//
//		for (int j = 0; j < Cols; j++)
//		{
//			//cout << setw(3) << arr[i][j] << "   ";
//			printf(" %0*d  ", 2, arr[i][j]);
//
//
//		}
//		cout << "\n";
//
//	}
//}
//
//
//short CountNumberInMatrix(int Matrix[3][3], int	Number, short Rows, short Cols)
//{
//	short NumberCount = 0;
//
//	for (short i = 0; i < Rows; i++)
//	{
//		for (short j = 0; j < Cols; j++)
//		{
//			if (Matrix[i][j] == Number)
//				NumberCount++;
//		}
//	}
//	return NumberCount;
//}
//
//short IsSparseMatrix(int Matrix[3][3], short Rows, short Cols)
//{
//	short MatrixSize = Rows * Cols;
//
//	return (CountNumberInMatrix(Matrix, 0, 3, 3) >= (MatrixSize / 2));
//}
//
//int main()
//{
//	int Matrix[3][3] = { {0,0,12},{0,0,1}, {0,0,9} };
//
//	cout << "\n Matrix  :\n";
//	PrintMatrix(Matrix, 3, 3);
//
//	if (IsSparseMatrix(Matrix, 3, 3))
//		cout << "\n YES : it is Sparse.\n";
//	else
//		cout << "\n No : it's NOT Sparse.\n";
//
//	system("pause>0");
//
//}