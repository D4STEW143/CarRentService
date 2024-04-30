#include<iostream>
#include<conio.h>
#include<Windows.h>

using namespace std;

class User
{
private:
	string UserName, Login, Password;

public:
	//Get-Set
	void set_UserName(string UserName)
	{
		this->UserName = UserName;
	}
	string get_UserName()const
	{
		return UserName;
	}
	void set_Login(string Login) 
	{
		this->Login = Login;
	}
	string get_Login()const
	{
		return Login;
	}
	void set_Password(string Password)
	{
		this->Password = Password;
	}
	string get_Password()const
	{
		return Password;
	}
	//Constructor
	User()
	{
		this->UserName = '0';
		this->Login = '0';
		this->Password = '0';
	}
	//Destructor
	~User()
	{
		cout << "Destruct User" << endl;
	}
	//Methods
	void WorkGood()const
	{
		cout << "Getting info" << endl;
		for (int i = 0; i < 75; i++)
		{
			cout << "#";
			Sleep(15);
		}
		cout << endl;
	}
	void Check()const
	{
		cout << "Check your data:" << endl;
		cout << "You user name is: " << UserName << endl;
		cout << "You login is: " << Login << endl;
		cout << "You password is: " << Password  << endl;
	}

	
};

void main()
{
	setlocale(LC_ALL, "");
	
	int choose_key = 0;
	string UserName, Login, Password;
	cout << "What would you do:" << endl;
	cout << "1.Create new profile. " << endl;
	cout << "2.Login in exist profile. " << endl;
	cin >> choose_key;

	if (choose_key == 1)
	{
		User NewUser;
		NewUser.WorkGood();
		cout << "Create a username: ";
		cin >> UserName;
		cout << "Create a login: ";
		cin >> Login;
		cout << "Create a password: ";
		cin >> Password;
		NewUser.set_UserName(UserName);
		NewUser.set_Login(Login);
		NewUser.set_Password(Password);
		NewUser.Check();
		

	}
	else if (choose_key == 2)
	{

	}
}