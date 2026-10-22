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
//short Countletter(string S1, char Letter, bool MachCase = true)
//{
//	short Counter = 0;
//	for (short i = 0; i < S1.length(); i++)
//	{
//		if (MachCase)
//		{
//			if (char(S1[i]) == Letter)
//				Counter++;
//		}
//		else
//		{
//			if (tolower(S1[i]) == towlower(Letter))
//				Counter++;
//		}
//
//		
//	}
//	return Counter;
//}
//
// char InvertLetterCase(char ch)
//{
//	return isupper(ch) ? tolower(ch) : toupper(ch);
//	
//}
// 
// //by own idea
//short CountletterMath(string S1, char Letter)
//{
//	char LetterInvert = InvertLetterCase(Letter);
//		
//
//	short Counter = 0;
//	for (short i = 0; i < S1.length(); i++)
//	{
//		if (char(S1[i]) == Letter || char(S1[i])== LetterInvert)
//			Counter++;
//	}
//	return Counter;
//}
//
//int main()
//{
//	string S1 = ReadString();
//	char ch1;
//	cout << "please enter charcter\n";
//	cin >> ch1;
//	cout << "Letter '" << ch1 << "' Count " << Countletter(S1, ch1) << endl;
//
//	cout << "\nLetter \'" << ch1 << "\' ";
//	cout << "Or \'" << InvertLetterCase(ch1) << "\' ";
//	cout << " Count = " << Countletter(S1, ch1, false);
//
//
//}