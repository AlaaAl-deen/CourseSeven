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
//	cout << "\n Sum of Matrix 1 is : "<< SumOfMatrix(Matrix1,3,3);
//	
//
//	system("pause>0");
//
//}