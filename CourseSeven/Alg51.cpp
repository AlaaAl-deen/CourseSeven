#include<iostream>
#include<string>
#include <iomanip> 
#include<vector>
#include<fstream>
using namespace std;


const string ClientsFileName = "Clients.txt";

struct stClient
{
	string AccountNumber = "";
	string PinCode = "";
	string Name = "";
	string Phone = "";
	double AccountBalance = 0;
	bool MarkForDelete = false;


};



vector <string> SplitString(string S1, string Delim)
{
	vector <string> vString;

	short pos = 0;
	string sWord;

	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}

	if (S1 != "")
	{
		vString.push_back(S1);
	}

	return vString;

}




stClient ConvertLineToRecord(string Line, string Separator = "#//#")
{
	stClient Client;
	vector <string> vClientData;
	vClientData = SplitString(Line, Separator);

	Client.AccountNumber = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stod(vClientData[4]);

	return Client;

}


vector <stClient> LoadClientsDataFromFile(string FileName)
{
	vector <stClient> vClients;
	fstream MyFile;
	MyFile.open(FileName, ios::in);
	if (MyFile.is_open())
	{
		string Line;
		stClient Client;
		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(Line);
			vClients.push_back(Client);

		}
	}

	return vClients;
}

void PrintClinetRecord(stClient Clinet)
{
	cout << "\n\nThe following is the extracted client record : \n\n";

	cout << "Account Number  : " << Clinet.AccountNumber << endl;
	cout << "PinCode         : " << Clinet.PinCode << endl;
	cout << "Name            : " << Clinet.Name << endl;
	cout << "Phone           : " << Clinet.Phone << endl;
	cout << "Account Balance : " << Clinet.AccountBalance << endl;
}


bool FindClientByAccountNumber(string AccountNumber, vector<stClient> vClients, stClient& Client)
{
	//vector <stClient> vClients = LoadClientsDataFromFile(ClientsFileName);

	for (stClient C : vClients)
	{
		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}
	}
	return false;
}

string ReadClientAccountNumber()
{
	string AccountNumber = "";

	cout << "\nPlease enter AccountNumber ? ";
	cin >> AccountNumber;

	return AccountNumber;
}

string ConvertRecordToLine(stClient Client, string Separator = "#//#")
{
	string stClientRecord = "";

	stClientRecord += Client.AccountNumber + Separator;
	stClientRecord += Client.PinCode + Separator;
	stClientRecord += Client.Name + Separator;
	stClientRecord += Client.Phone + Separator;
	stClientRecord += to_string(Client.AccountBalance);

	return stClientRecord;
}



vector <stClient>SaveClientsDataToFile(string FileName, vector<stClient>vClients)
{
	fstream MyFile;
	string DataLine;
	MyFile.open(FileName, ios::out);
	if (MyFile.is_open())
	{
		for (stClient C : vClients)
		{
			if (C.MarkForDelete == false)
			{
				DataLine = ConvertRecordToLine(C);
				MyFile << DataLine << endl;
			}
		}
		MyFile.close();
	}
	return vClients;
}


stClient ChangeClientRecord(string AccountNumber)
{
	stClient Client;
	/*cout << "Enter Account Number ? ";
	getline(cin>>ws, Client.AccountNumber);*/

	Client.AccountNumber = AccountNumber;

	cout << "Enter PinCode ? ";
	getline(cin>>ws, Client.PinCode);

	cout << "Enter Name ? ";
	getline(cin, Client.Name);

	cout << "Enter Phone ? ";
	getline(cin, Client.Phone);

	cout << "Enter Account Balance ? ";
	cin >> Client.AccountBalance;

	return Client;

}


bool UpdateClientByAccountNumber(string AccountNumber, vector<stClient>& vClients)
{
	stClient Client;
	char Answer = 'n';

	if (FindClientByAccountNumber(AccountNumber, vClients, Client))
	{
		PrintClinetRecord(Client);
		cout << "\n\nAre you sure you want Upade client ? n/y ?";
		cin >> Answer;

		if (Answer == 'y' || Answer == 'Y')
		{

			for (stClient& C : vClients)
			{
				if (C.AccountNumber == AccountNumber)
				{
					C = ChangeClientRecord(AccountNumber);
					break;
				}
			}

			SaveClientsDataToFile(ClientsFileName, vClients);
			//refresh
			vClients = LoadClientsDataFromFile(ClientsFileName);
			cout << "\n\n Client Updated Successfully. \n";
			return true;
		}
	}

	else
	{
		cout << "\nClient with Account Number (" << AccountNumber << ") is NOT Found!\n";
		return false;
	}
}


int main()
{
	stClient Client;

	vector<stClient> vClients = LoadClientsDataFromFile(ClientsFileName);
	string AccountNumber = ReadClientAccountNumber();
	UpdateClientByAccountNumber(AccountNumber, vClients);


	system("pause>0");

}