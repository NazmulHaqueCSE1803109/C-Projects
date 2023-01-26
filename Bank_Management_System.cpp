#include<bits/stdc++.h>
using namespace std;

class Bank{
	public:
		char name[100],address[100],acct[10];
		int accn,pass,balance;
		void open_account();
		void deposite_account();
		void withdraw_account();
		void display_account();
};

void Bank :: open_account()
{ 
   cout<<"Enter Your Name : ";
   cin.ignore();
   cin.getline(name,100);
   cout<<"Enter Your Address : ";
   cin.ignore();
   cin.getline(address,100);
   cout<<"What type of Account You Want to Open? :";
   cin.ignore();
   cin.getline(acct,10);
   cout<<"Enter Your Account Number : ";
   cin>>accn;
   cout<<"Enter Your Password : ";
   cin>>pass;
   cout<<"Enter Amount For Deposite : ";
   cin>>balance;
   cout<<"Your Account Created Succesfully"<<"\n\n";
}

void Bank :: deposite_account()
{
	int dp;
	cout<<"How Much You Deposite : ";
	cin>>dp;
	balance +=dp;
	cout<<"Your Deposite Balance : "<<balance<<"\n\n";
}

void Bank :: withdraw_account()
{
	int wd;
	cout<<"\n Enter Withdrawing Amount : ";
	cin>>wd;
	balance -=wd;
	cout<<"\nNew Account Balance : "<<balance<<"\n\n";

}

void Bank :: display_account()
{
	cout<<"\nDisplay Account:\n";
	cout<<"Your Full Name : "<<name<<endl;
	cout<<"Your Address : "<<address<<endl;
	cout<<"Your Accounts Number : "<<accn<<endl;
	cout<<"What Type of Your Account : "<<acct<<"\n\n";
}

int main()
{
	Bank ob;
	int op;
  while(1)
  {
  	cout<<"1. Open Account"<<endl;
  	cout<<"2. Deposite Money"<<endl;
  	cout<<"3. Withdraw Money"<<endl;
  	cout<<"4. Display Account"<<endl;
  	cout<<"5. Exit"<<endl<<endl;

  	cout<<"Please choice any above option : ";
  	cin>>op;
  	if(op==5)
  		break;
  	switch(op){

  		case 1:
  		     cout<<"\nOpen Account\n";
           ob.open_account();
  		     break;
  		case 2:
  		     cout<<"\nDeposite Account\n";
  		     ob.deposite_account();
  		     break;
  		case 3:
  		     cout<<"\nWithdraw Account\n";
  		     ob.withdraw_account();
  		     break;
  		case 4:
  		     cout<<"\nDisplay Account\n";
  		     ob.display_account();
  		     break;
  		default:
  		     cout<<"\nThis Is Not Exist.Try Again.\n";
  		     cout<<"If You Want to choose any above option then press (1 to 4) and if you want to exit this process then press 5.\n\n ...Thanks...\n";
  		     break;
  	}
  }
  return 0;
}