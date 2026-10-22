//#include<iostream>
//#include<string>
//#include <iomanip> 
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
//
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
//vector <stClient> LoadClientsDataFromFile(string FileName)
//{
//	vector <stClient> vClients;
//	fstream MyFile;
//	MyFile.open(FileName, ios::in);
//	if (MyFile.is_open())
//	{
//		string Line;
//		stClient Client;
//		while (getline(MyFile, Line))
//		{
//			Client = ConvertLineToRecord(Line);
//			vClients.push_back(Client);
//
//		}
//	}
//
//	return vClients;
//}
//
//void PrintClientRecord(stClient Client)
//{
//	cout << "| " << left << setw(15) << Client.AccountNumber;
//	cout << "| " << left << setw(10) << Client.PinCode;
//	cout << "| " << left << setw(30) << Client.Name;
//	cout << "| " << left << setw(12) << Client.Phone;
//	cout << "| " << left << setw(12) << Client.AccountBalance;
//
//}
//
//
//void PrintAllClientsData(vector<stClient> vClients)
//{
//	cout << "\n\t\t\t\t\tClients List (" << vClients.size() << ") Client(s).";
//	cout << "\n________________________________________________________";
//	cout << "__________________________________________\n" << endl;
//
//	cout << "| " << left << setw(15) << "Account Number";
//	cout << "| " << left << setw(10) << "Pin Code";
//	cout << "| " << left << setw(30) << "Client Name";
//	cout << "| " << left << setw(12) << "Phone";
//	cout << "| " << left << setw(15) << "Blance";
//
//	cout << "\n________________________________________________________";
//	cout << "__________________________________________\n" << endl;
//	for (stClient Client : vClients)
//	{
//		PrintClientRecord(Client);
//		cout << endl;
//	
//	}
//
//
//
//
//
//}
//
//
//int main()
//{
//	vector<stClient> vClients = LoadClientsDataFromFile(ClientsFileName);
//	PrintAllClientsData(vClients);
//
//	system("pause>0");
//
//}