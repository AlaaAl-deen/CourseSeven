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
//			arr[i][j] = RandomNumber(1, 100);
//		}
//	}
//}
//
//
//
//
//
//int ColSum(int arr[3][3], short Rows, short ColsNumber)
//{
//	int Sum = 0;
//	for (int i = 0; i < Rows; i++)
//	{
//		Sum += arr[i][ColsNumber];
//	}
//	return Sum;
//}
//
//void PrintMatrix(int arr[3][3], short Rows, short Cols)
//{
//	for (short i = 0; i < Rows; i++)
//	{
//		for (short j = 0; j < Cols; j++)
//		{
//
//			cout << setw(3) << arr[i][j] << "     ";
//		}
//
//		cout << "\n";
//	}
//}
//
//void SumMatrixColosInArray(int arr[3][3], int arrSum[3], short Rows, short Cols)
//{
//
//	for (short j = 0; j < Cols; j++)
//	{
//		arrSum[j] = ColSum(arr, Rows, j);
//	}
//}
//
//void PrintColosSumArray(int arr[3], short Rows)
//{
//	cout << "\nThe following are the sum of each colo in the matrix : \n";
//
//	for (short i = 0; i < Rows; i++)
//	{
//		cout << " Colo " << i + 1 << " Sum = " << arr[i] << endl;
//	}
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	int arr[3][3];
//	int arrSum[3];
//	FillMatrrixWithRandomNumbers(arr, 3, 3);
//	cout << "\nThe following is a 3x3 random matrix\n";
//	PrintMatrix(arr, 3, 3);
//
//	SumMatrixColosInArray(arr, arrSum, 3, 3);
//	PrintColosSumArray(arrSum, 3);
//
//	system("pause>0");
//
//
//}