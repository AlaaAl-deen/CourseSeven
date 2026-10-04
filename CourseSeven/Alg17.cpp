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
//int ReadPositiveNumber(string Message)
//{
//	int Number;
//
//	do
//	{
//		cout << Message << endl;
//		cin >> Number; 
//
//	} while (Number < 0);
//	return Number;
//}
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
//bool IsNumberInMatrix(int Matrix[3][3], int Number, short Rows, short Cols)
//{
//	for (short i = 0; i < Rows; i++)
//	{
//		for (short j = 0; j < Cols; j++)
//		{
//			if (Matrix[i][j] == Number)
//				return true;
//		}
//	}
//	return false;
//}
//
//int main()
//{
//	Seeds the random number generator in C++, called only once     
//	srand((unsigned)time(NULL));
//
//	int Matrix1[3][3];
//	int Matrix2[3][3] = { {5,0,0},{0,5,0},{0,0,5} };
//
//	FillMatrrixWithRandomNumbers(Matrix1, 3, 3);
//
//	cout << "\nMatrix1:\n";
//	PrintMatrix(Matrix1, 3, 3);
//
//	int Number = ReadPositiveNumber(" Please Enter the Number to look for in Matrix?");
//
//	if (IsNumberInMatrix(Matrix1, Number, 3, 3))
//		cout << "\nYes it is there\n";
//	else
//		cout << "\nNo it is not there\n";
//
//	system("pause>0");
//
//}