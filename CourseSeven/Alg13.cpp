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
//
//
//void PrintMatrix(int arr[3][3], short Rows, short Cols)
//{
//	for (int i = 0; i < Rows; i++)
//	{
//
//		for (int j = 0; j < Cols; j++)
//		{
//			cout << setw(3) << arr[i][j] << "   ";
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
//
//
//
//
//bool IsIdentityMatrix(int Matrix[3][3], short Rows, short Cols)
//{
//	 Check Diagonal elements are 1 and rest elements are 0 
//
//	for (short i = 0; i < Rows; i++)
//	{
//		for (short j = 0; j < Cols; j++)
//		{
//			 check for diagonals element 
//			if (i == j && Matrix[i][j] != 1)
//			{
//				return false;
//			}
//			 check for rest elements 
//			else if (i != j && Matrix[i][j] != 0)
//			{
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	Seeds the random number generator in C++, called only once     
//	srand((unsigned)time(NULL));
//
//	int Matrix1[3][3];
//	int Matrix2[3][3] = { {1,0,0},{0,1,0},{0,0,1} };
//
//	FillMatrrixWithRandomNumbers(Matrix1, 3, 3);
//
//	PrintMatrix(Matrix2, 3, 3);
//
//	if (IsIdentityMatrix(Matrix2, 3, 3))
//		cout << "\n YES : Matrix is Identity.";
//	else
//		cout << "\n No : Matrix is NOT Identity.";
//
//	system("pause>0");
//
//}