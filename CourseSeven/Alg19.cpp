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
//int MaxNumberInMatrix(int Matrix[3][3], short Rows, short Cols)
//{
//	int Max = Matrix[0][0];
//	for (short i = 0; i < Rows; i++)
//	{
//		for (short j = 0; j < Cols; j++)
//		{
//			if (Matrix[i][j] > Max)
//				Max = Matrix[i][j];
//
//		}
//	}
//
//	return Max;
//}
//
//int main()
//{
//	int Matrix1[3][3] = { {77,5,12}, {22,20,1 },{1,3,9} };
//
//	cout << "\nMartix1:\n";
//	PrintMatrix(Matrix1, 3, 3);
//
//
//	cout << "\n Minmum Number is : " << MinNumberInMatrix(Matrix1, 3, 3) << endl;
//	cout << "\n Maxmum Number is : " << MaxNumberInMatrix(Matrix1, 3, 3) << endl;
//
//
//
//}
