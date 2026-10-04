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
//bool ISEqualMatrix(int arr1[3][3],int arr2[3][3], short Rows, short Cols)
//{
//	for (int i = 0; i < Rows; i++)
//	{
//		for (int j = 0; j < Cols; j++)
//		{
//			if (arr1[i][j] != arr2[i][j])
//				return false;
//		}
//	}
//
//	return true;
//}
//
//int SumOfMatrix(int arr[3][3], short Rows, short Cols)
//{
//	int Sum = 0;
//	for (int i = 0; i < Rows; i++)
//	{
//		for (int j = 0; j < Cols; j++)
//		{
//			Sum += arr[i][j];
//		}
//	}
//	return Sum;
//	
//}
//
//bool AreEqualMatrices(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
//{
//	return (SumOfMatrix(Matrix1, Rows, Cols) == SumOfMatrix(Matrix2, Rows, Cols));
//}
//
//int main()
//{
//	//Seeds the random number generator in C++, called only once     
//	srand((unsigned)time(NULL));
//
//	int Matrix1[3][3], Matrix2[3][3];
//
//	FillMatrrixWithRandomNumbers(Matrix1, 3, 3);
//	FillMatrrixWithRandomNumbers(Matrix2, 3, 3);
//
//	cout << "\n Matrix 1 :\n";
//	PrintMatrix(Matrix1, 3, 3);
//
//	cout << "\n Matrix 2 :\n";
//	PrintMatrix(Matrix2, 3, 3);
//
//	if (AreEqualMatrices(Matrix1, Matrix2, 3, 3))
//		cout << "\n YES : bout Matrices are equal.";
//	else
//		cout << "\n No : Matrices are NOT equal";
//
//	system("pause>0");
//
//}