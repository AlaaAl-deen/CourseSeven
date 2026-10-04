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
//
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	int arr[3][3];
//	FillMatrrixWithRandomNumbers(arr, 3, 3);
//	cout << "\nThe following is a 3x3 random matrix\n";
//
//	PrintMatrrix(arr, 3, 3);
//
//}