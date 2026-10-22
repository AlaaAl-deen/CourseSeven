//#include<iostream>
//#include<string>
//#include<vector>
//#include<fstream>
//using namespace std;
//
//
//const string ClientsFileName = "Clients.txt";
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
//stClient ReadNewClient()
//{
//	stClient Client;
//	cout << "Enter Account Number ? ";
//	getline(cin>>ws, Client.AccountNumber);
//
//	cout << "Enter PinCode ? ";
//	getline(cin, Client.PinCode);
//
//	cout << "Enter Name ? ";
//	getline(cin, Client.Name);
//
//	cout << "Enter Phone ? ";
//	getline(cin, Client.Phone);
//
//	cout << "Enter Account Balance ? ";
//	cin >> Client.AccountBalance;
//
//	return Client;
//
//}
//
//
//string ConvertRecordToLine(stClient Client, string Separator = "#//#")
//{
//	string stClientRecord = "";
//
//	stClientRecord += Client.AccountNumber + Separator;
//	stClientRecord += Client.PinCode + Separator;
//	stClientRecord += Client.Name + Separator;
//	stClientRecord += Client.Phone + Separator;
//	stClientRecord += to_string(Client.AccountBalance);
//
//	return stClientRecord;
//}
//
//
//void AddDataLineToFile(string FileName, string stDataLine)
//{
//	fstream MyFile;
//	MyFile.open(FileName, ios::out | ios::app);
//	if (MyFile.is_open())
//	{
//		MyFile << stDataLine << endl;
//		MyFile.close();
//	}
//}
//
//void AddNewClient()
//{
//	stClient Client;
//	Client = ReadNewClient();
//	AddDataLineToFile(ClientsFileName, ConvertRecordToLine(Client));
//}
//
//void AddClients()
//{
//	char AddMore = 'Y';
//
//	do
//	{
//		system("cls");
//		cout << "Adding New Client:\n\n";
//		AddNewClient();
//		cout << "\nClient Added Successfully , do you want to add more clients ? "; 
//			cin >> AddMore;
//	} while (toupper(AddMore) =='Y');
//}
//
//
//
//int main()
//{
//	AddClients();
//	system("pause>0");
//
//}