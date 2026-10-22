//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//struct stClient
//{
//	string AccountNumber = "";
//	string PinCode = "";
//	string Name = "";
//	string Phone = "";
//	double AccountBalance;
//
//};
//
//
//  vector <string> SplitString(string S1, string Delim)
//{
//	vector <string> vString;
//
//	short pos = 0;
//	string sWord;
//
//	while (( pos = S1.find(Delim)) != std::string::npos)
//	{
//		sWord = S1.substr(0, pos);
//		if (sWord != "")
//		{
//			vString.push_back(sWord);
//		}
//		S1.erase(0, pos + Delim.length());
//	}
//
//	if (S1 != "")
//	{
//		vString.push_back(S1);
//	}
//
//	return vString;
//
//}
//
//void ConvertLineToRecordByMyWay(string S1, string Separator = "#//#")
//{
//	vector <string> vString = SplitString(S1, Separator);
//	stClient client;
//
//	vector<string>::iterator iter = vString.begin();
//	cout << "Account Number " << *iter << endl;
//	iter++;
//	cout << "Pin code:" << *iter <<  endl;
//	iter++;
//	cout << "Name:" << *iter << endl;
//	iter++;
//	cout << "phone:" << *iter << endl;
//	iter++;
//	cout << "Account Blance: " << stod( * iter) << endl;
//
//	
//}
//
//
//stClient ConvertLineToRecord(string Line, string Separator = "#//#")
//{
//	stClient Client;
//	vector <string> vClientData;
//	vClientData = SplitString(Line, Separator);
//
//	Client.AccountNumber = vClientData[0];
//	Client.PinCode = vClientData[1];
//	Client.Name = vClientData[2];
//	Client.Phone = vClientData[3];
//	Client.AccountBalance = stod(vClientData[4]);
//
//	return Client;
//
//}
//
//
//void PrintClientRecord(stClient Client)
//{
//	cout << "\n\nThe following is the extracted client record : \n\n";
//
//	cout << "Account Number  : " << Client.AccountNumber << endl;
//	cout << "PinCode         : " << Client.PinCode << endl;
//	cout << "Name            : " << Client.Name << endl;
//	cout << "Phone           : " << Client.Phone << endl;
//	cout << "Account Balance : " << Client.AccountBalance << endl;
//}
//
//int main()
//{
//	string stLine = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.00000"; 
//		cout << "\nLine Record is : \n";
//	cout << stLine << endl;
//
//	stClient Client = ConvertLineToRecord(stLine);
//
//	PrintClientRecord(Client);
//
//	cout << "\n\n-----------------------\n";
//	ConvertLineToRecordByMyWay(stLine);
//
//
//}