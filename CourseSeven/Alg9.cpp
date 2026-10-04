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
//void PrintMiddleRowOfMatrix(int arr[3][3], short Rows, short Cols)
//{
//	short MiddleRow = Rows / 2;
//
//	for (short j = 0; j < Cols; j++)
//	{
//		printf(" %0*d  ", 2, arr[MiddleRow][j]);
//
//	}
//	cout << "\n";
//}
//
//void PrintMiddleColOfMatrix(int arr[3][3], short Rows, short Cols)
//{
//	short MiddleCol = Cols / 2;
//
//	for (short j = 0; j < Cols; j++)
//	{
//		printf(" %0*d  ", 2, arr[j][MiddleCol]);
//
//	}
//	cout << "\n";
//}
//
//int main()
//{
//	//Seeds the random number generator in C++, called only once     
//	srand((unsigned)time(NULL));
//
//	int Matrix1[3][3];
//
//	FillMatrrixWithRandomNumbers(Matrix1, 3, 3);
//	cout << "\n Matrix 1 :\n";
//	PrintMatrix(Matrix1, 3, 3);
//
//	cout << "\n Middle Row of Matrix 1 is :\n";
//	PrintMiddleRowOfMatrix(Matrix1, 3, 3);
//
//	cout << "\n Middle Col of Matrix 1 is :\n";
//	PrintMiddleColOfMatrix(Matrix1, 3, 3);
//
//	system("pause>0");
//
//}