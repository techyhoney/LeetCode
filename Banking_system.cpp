#include <iostream>
#include<string>
using namespace std;

class Account
{
string customer_name;
int account_number;
string account_type;

public:
    void get_general_data()
    {   cout<<"\n\nEnter Customer Name :- ";
       cin>>customer_name;;
       cout<<"Enter Account Number :- ";
       cin>>account_number;
       cout<<"Enter Account Type :- ";
       cin>>account_type;

    }

    void show_general_data()
    {
        cout<<"Account Name: "<<customer_name<<endl;
        cout<<"Account Number: "<<account_number<<endl;
        cout<<"Account Type: "<<account_type<<endl;
    }
};

class cur_account: public Account
{
    double balance;
    const int min_balance=3000;
    double service_charge;
    int deposit;
    int withdraw;

public:
    void disp_curr()
    {
      cout<<"\nBalance :- "<<balance;
    }

    void deposit_curr()
    {
      cout<<"\nEnter amount to Deposit :- ";
      cin>>deposit;
      balance = balance + deposit;
    }

    void withdraw_curr()
    {
          cout<<"\nEnter amount to be withdraw :-";
          cin>>withdraw;
          balance=balance-withdraw;
          cout<<"\nAfter Withdrawl your Balance revels : "<<balance;
          if(balance < min_balance)
          {
          service_charge=500;
          balance=balance-service_charge;
          cout<<"\nBalance after deducting service charge : "<<balance;
          }
     }
};

class sav_account: public Account
{
     double savbal;
     double interest;
     int withdraw;
     int deposit;

     public:
     void disp_sav()
    {
      cout<<"\nBalance :- "<<savbal;
    }
    void deposit_sav()
    {
      cout<<"\nEnter amount to Deposit :- ";
      cin>>deposit;
      savbal = savbal + deposit;
      interest=(savbal*2)/100;
      savbal=savbal+interest;
    }
    void withdraw_sav()
    {
      cout<<"\nBalance :- "<<savbal;
      cout<<"\nEnter amount to be withdraw :-";
      cin>>withdraw;
      savbal=savbal-withdraw;
      cout<<"\nAfter Withdrawal your Balance revels : "<<savbal;
     }
};
int main()
{

cur_account c1;
sav_account s1;

 cout<<"\nEnter S for saving customer and C for current a/c customer\n\n";
 char type;
 cin>>type;

 int choice;

   if(type=='s' || type=='S')
     {
       s1.get_general_data();
           while(1)
           {
         cout<<"\nChoose Your Choice\n";
         cout<<"1)   Deposit\n";
         cout<<"2)   Withdraw\n";
         cout<<"3)   Display Balance\n";
         cout<<"4)   Display with full Details\n";

         cin>>choice;
             switch(choice)
                  {
               case 1 : s1.deposit_sav();
                    break;
               case 2 : s1.withdraw_sav();
                    break;
               case 3 : s1.disp_sav();
                    break;
               case 4 : s1.show_general_data();
                    break;

               default: cout<<"\n\nEntered choice is invalid,\"TRY AGAIN\"";
                    }
           }
     }

    else
     {
       c1.get_general_data();
       while(1)
       {
     cout<<"\nChoose Your Choice\n";
     cout<<"1)   Deposit\n";
     cout<<"2)   Withdraw\n";
     cout<<"3)   Display Balance\n";
     cout<<"4)   Display with full Details\n";

     cin>>choice;
     switch(choice)
     {
       case 1 : c1.deposit_curr();
            break;
       case 2 : c1.withdraw_curr();
            break;
       case 3 : c1.disp_curr();
            break;
       case 4 : c1.show_general_data();
            break;

       default: cout<<"\n\nEntered choice is invalid,\"TRY AGAIN\"";
     }
       }
     }

}

