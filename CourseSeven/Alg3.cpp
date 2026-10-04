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
//void PrintMatrrix(int arr[3][3], short Rows, short Cols)
//{
//	for (int i = 0; i < Rows; i++)
//	{
//
//		for (int j = 0; j < Cols; j++)
//		{
//			cout << setw(3) << arr[i][j] << "   ";
//		}
//		cout << "\n";
//
//	}
//}
//
//int RowSum(int arr[3][3], short RowNumber, short Cols)
//{
//	int Sum = 0;
//	for (int j = 0; j < Cols; j++)
//	{
//		Sum += arr[RowNumber][j];
//	}
//	return Sum;
//}
//
//void PrintEachRowSum(int arr[3][3], short Rows, short Colos)
//{
//	cout << "\nThe following are the sum of each row in the matrix\n";
//	for (int i = 0; i < Rows; i++)
//	{
//		cout << "Row " << i + 1 << " Sum = " << RowSum(arr, i, Colos) << endl;
//	}
//}
//
//void SumMatrixRowsInArray(int arr[3][3], int arrSum[3], short Rows, short Cols)
//{
//
//	for (short i = 0; i < Rows; i++)
//	{
//		arrSum[i] = RowSum(arr, i, Cols);
//	}
//}
//
//void PrintRowsSumArray(int arr[3], short Rows)
//{
//	cout << "\nThe following are the sum of each row in the matrix : \n";
//
//	for (short i = 0; i < Rows; i++)
//	{
//		cout << " Row " << i + 1 << " Sum = " << arr[i] << endl;
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
//	PrintMatrrix(arr, 3, 3);
//
//	SumMatrixRowsInArray(arr, arrSum, 3, 3);
//	PrintRowsSumArray(arrSum, 3);
//
//	system("pause>0");
//
//}