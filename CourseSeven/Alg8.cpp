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
//void PrintMatrrix(int arr[3][3], short Rows, short Cols)
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
//void MultiplyMatrix(int Matrix1[3][3], int Matrix2[3][3], int MatrixResults[3][3], short Rows, short Cols)
//{
//
//	for (short i = 0; i < Rows; i++)
//	{
//		for (short j = 0; j < Cols; j++)
//		{
//			MatrixResults[i][j] = Matrix1[i][j] * Matrix2[i][j];
//
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	int arr1[3][3], arr2[3][3], result[3][3];
//	FillMatrrixWithRandomNumbers(arr1, 3, 3);
//	FillMatrrixWithRandomNumbers(arr2, 3, 3);
//
//	cout << "\nThe following is a 3x3 random matrix one\n";
//	PrintMatrrix(arr1, 3, 3);
//	cout << "\nThe following is a 3x3 random matrix two\n";
//	PrintMatrrix(arr2, 3, 3);
//	MultiplyMatrix(arr1, arr2, result, 3, 3);
//	cout << "\nThe following is Result\n";
//	PrintMatrrix(result, 3, 3);
//
//	system("pause>0");
//
//
//}