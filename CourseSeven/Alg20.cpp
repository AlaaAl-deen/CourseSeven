//#include<iostream>
//#include<iomanip>
//#include <cstdlib> 
//using namespace std;
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
//int MinNumberInMatrix(int Matrix[3][3], short Rows, short Cols)
//{
//	int Min = Matrix[0][0];
//	for (short i = 0; i < Rows; i++)
//	{
//		for (short j = 0; j < Cols; j++)
//		{
//			if (Matrix[i][j] < Min)
//				Min = Matrix[i][j];
//				
//		}
//	}
//
//	return Min;
//}
//
//bool IsPalindromeMatrix(int Matrix[3][3], short Rows, short Cols)
//{
//	for (short i = 0; i < Rows; i++)
//	{
//		for (short j = 0; j < Cols; j++)
//		{
//			/*if (Matrix[i][j] != Matrix[i][j + 2])
//				return false;
//			j = 3;*/
//
//			if (Matrix[i][j] != Matrix[i][Cols - 1 - j])
//				return false;
//
//		}
//	}
//
//	return true;
//}
//
//int main()
//{
//	int Matrix1[3][3] = { {1,2,1}, {5,5,5 },{7,3,7} };
//
//	cout << "\nMartix1:\n";
//	PrintMatrix(Matrix1, 3, 3);
//
//	if (IsPalindromeMatrix(Matrix1, 3, 3))
//		cout << "\nYes: Matrix is PalindromeMatrix\n";
//	else
//		cout << "\nNo: Matrix is Not PalindromeMatrix\n";
//
//
//
//
//}
