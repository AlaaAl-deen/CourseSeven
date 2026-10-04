//#include<iostream>
//#include<string>
//using namespace std;
//
//string ReadString()
//{
//	string S1;
//	cout << "Please Enter Your String\n";
//	getline(cin, S1);
//	return S1;
//}
//
//void PrintFirstLetterOfEachWord(string S1)
//{
//	bool isFirstLetter = true;
//	for (short i = 0; i < S1.length(); i++)
//	{
//		if (S1[i] != ' ' && isFirstLetter)
//		{
//			cout << S1[i] << endl;
//		}
//		isFirstLetter = (S1[i] == ' ' ? true : false);
//	}
//}
//
//void PrintLastLetterOfEachWord(string S1)
//{
//	for (short i = 0; i < S1.length(); i++)
//	{
//		if (S1[i] != ' ' && (S1[i + 1] == ' ' || i ==S1.length()-1))
//		{
//			cout << S1[i] << endl;
//		}
//	}
//}
//
//int main()
//{
//	PrintLastLetterOfEachWord(ReadString());
//}