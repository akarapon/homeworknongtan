#include<iostream>
#include<string>
using namespace std;
int main()
{
	string User, Pass, User_log, Pass_log;
	char choose;
	do
	{
		cout<<"////////////////Menu////////////////\n";
			cout<<" 1. Register\n";
			cout<<" 2. Login\n";
			cout<<" Q. Exit Program\n";
			cout<<"____________________________\n";
			cout<<"Enter Menu : ";
		cin >>choose;
		if(choose == '1');
		{
		cout<<"***********Register***********\n";
		cout<<"Input Username : ";
		cin >>User;
		cout<<"Input Password : ";
		cin >>Pass;
		}
		if(choose == '2')
		{
			do
			{
				cout<<"********Login********\n";
				cout<<"Input Username : ";
				cin >>User_log;
				cout<<"Input Password : ";
				cin >>Pass_log;
				if(!((User_log == User) && (Pass_log == Pass)))
			cout<<"Username or Password incorrect Please try again!!!! :(\n";
			}while(!((User_log == User) && (Pass_log == Pass)));
			cout<<"Username and Password correct ^__^\n";
		}
	}while ((choose != 'Q') && (choose != 'q'));
	cout<<"Exit Program....\n";
	return 0;
}
