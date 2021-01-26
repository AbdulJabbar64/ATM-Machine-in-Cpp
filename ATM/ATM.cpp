#include<iostream>
#include<conio.h>
#include<unistd.h>
#include<fstream>
#include<string>
using namespace std;
//char password;
//string password;
int main ()
{
	system("color 1f");
	ofstream output;
	char ch,password;
	int choice, withdraw, deposit,account_number;
	int amount=50000.00;
	int num;
	cout<<"\t\t__________________________________________________"<<endl;
	cout<<"\t\t******************CP Class Project****************"<<endl;
	cout<<"\t\t******************Roll No:18SW64******************"<<endl;
	cout<<"\t\t******************Name: Abdul Jabbar**************"<<endl;
	cout<<"\t\t******************project name:ATM Machine********"<<endl;
	cout<<"\t\t__________________________________________________"<<endl;
	system("pause");
	system("cls");
//	system("color 3A");
	cout<<"Please Enter \nYour Card"<<endl;
	getch();
	system("cls");
	cout<<"Please Enter 4 Digit PIN"<<endl;
	password=getch();  
	for(int i=1;i<=4;i++)
	{
		//pass.push_back(password);
		cout<<'*';
		password=getch();
    }
    output.open("ATM.txt",ios::app);
	cout<<"\nProcessing Please Wait!...";
 	sleep(1);
 	cout<<"\nPlease Wait!...\n\nWe are finding Your Account!..";
 	sleep(2);
 	system("cls");
 	cout<<"Account Found!"<<endl;
 	sleep(1);
 	system("cls");
	cout<<"********************************************************";
 	cout<<endl<<"^_^_^_^_^_^_^_^_^_WELCOME TO ATM MACHINE_^_^_^_^_^_^_^_^"<<endl;
 	cout<<"********************************************************";
	cout<<"\n1:English\n2:Urdu";
    cout<<endl<<"Please Select "<<endl;
    cin>>choice;
    if(choice<3)
    {
    cout<<endl<<"1:SAVEING";
	cout<<endl<<"2:CURRENT";
    cout<<endl<<"Select Account Type \n";
    cin>>choice;
    system("cls");
    if(choice<3)
    {
    	while(true)
	{
	cout<<endl<<"****************************************";
	cout<<"**\n**\t\t\t  MENU\t\t**\n";
	cout<<"**\t1. Withdraw       \t\t**\n";
	cout<<"**\t2. Deposit        \t\t**\n";
	cout<<"**\t3. Transfer       \t\t**\n";
	cout<<"**\t4. Bill Pay       \t\t**\n";
	cout<<"**\t5. Check Balance  \t\t**\n";
	cout<<"**\t6. Check File data\t\t**\n";
	cout<<"**\t7. Exit           \t\t**\n";
	cout<<"******************************************"<<endl;
	cout<<"Enter your choice: "<<endl;
	cin>>choice;
	system("cls");
	if(choice==1)
	{
		system("cls");
		cout<<"Do you want to withdraw\n\nPlease Your Choice\n";
		cout<<"1: for 500\n";
		cout<<"2: for 1000\n";
		cout<<"3: for 10000\n";
		cout<<"4: for 15000\n";
		cout<<"5: Enter amount(<500) you want to withdraw \n";
		cin>>ch;
		switch(ch)
		{
			case '1':
				amount=amount-500;
				output<<"Withdrow Amount "<<endl<<500<<endl;
				break;
			case '2':
				amount=amount-1000;
				output<<"Withdrow Amount "<<endl<<1000<<endl;
				break;
			case '3':
				amount=amount-10000;
				output<<"Withdrow Amount "<<endl<<10000<<endl;
				break;
			case '4':
				amount=amount-15000;
				output<<"Withdrow Amount "<<endl<<15000<<endl;
				break;
		    case '5':
		    	cout<<"Enter Amount "<<endl;
				cin>>withdraw;
		    	amount-=withdraw;
		    	output<<"Withdrow Amount "<<endl<<withdraw<<endl;
		    	break;
		    default:
		    	cout<<"Your option is wrong";
		    	break;
		}//end of switch statment
		if (amount<500 && amount>0)
		
            cout<<endl<<endl<<"You Can't withdraw the amount there must be minimum 500";
		else if(amount==0 && amount<0)
		cout<<endl<<"You don't have sufficient balance";
	}//end of if option 1
	
	else if(choice==2)
	{
		system("cls");
		cout<<endl<<endl<<"Enter the amount you want to deposit: ";
        cin>>deposit;
        amount+=deposit;
        output<<"You Deposited Amount "<<endl<<deposit<<endl<<"New Amount is "<<amount<<endl;
	}//end of if option 2
	
		if(choice==3)
	{
		cout<<endl<<"1: Account at other Bank";
	    cout<<endl<<"2: Account same Bank\n";
	    //char ch;
	    cin>>ch;
	    switch(ch)
	    {
	    	case '1':
	    		cout<<"0: State Bank of Pakistan (SBP)"<<endl;
	    		cout<<"1: National Bank of Pakistan (NBP)"<<endl;
	    		cout<<"2: Habib Bank Limited (HBL)"<<endl;
	    		cout<<"3: United Bank Limited (UBL)"<<endl;
	    		cout<<"4: MCB bank Limited (MCB)"<<endl;
	    		cout<<"5: JS Bank Limited"<<endl;
	    		cout<<"6: Allied Bank Limited (ALB)"<<endl;
	    		cout<<"7: Askari Bank Limited (ABL)"<<endl;
	    		cout<<"8: Faysal Bank Limited"<<endl;
	    		cout<<"9: Habib Metropolitan"<<endl;
	    		cin>>num;
	    		switch(num)
	    		{
	    			system("cls");
	    			case '0':
		    	        cout<<"Enter Your Account Number "<<endl;
		    	        cin>>account_number;
		    	        cout<<"Enter Amount "<<endl;
		    	        cin>>withdraw;
		    	        amount-=withdraw;
		    	        output<<"You Transfer Amount is (minus) form your account "<<endl<<withdraw<<endl;
		    	        break;
		    	    case '1':
		    	        cout<<"Enter Your Account Number "<<endl;
		    	        cin>>account_number;
		    	        cout<<"Enter Amount "<<endl;
		    	        cin>>withdraw;
		    	        amount-=withdraw;
		    	         output<<"You Transfer Amount is (minus) form your account "<<endl<<withdraw<<endl;
		    	        break;
		    	    case '2':
		    	        cout<<"Enter Your Account Number "<<endl;
		    	        cin>>account_number;
		    	        cout<<"Enter Amount "<<endl;
		    	        cin>>withdraw;
		    	        amount-=withdraw;
		    	        output<<"You Transfer Amount is (minus) form your account "<<endl<<withdraw<<endl;
		    	        break;
					case '3':
		    	        cout<<"Enter Your Account Number "<<endl;
		    	        cin>>account_number;
		    	        cout<<"Enter Amount "<<endl;
		    	        cin>>withdraw;
		    	        amount-=withdraw;
		    	        output<<"You Transfer Amount is (minus) form your account "<<endl<<withdraw<<endl;
		    	        break;
		    	    case '4':
		    	        cout<<"Enter Your Account Number "<<endl;
		    	        cin>>account_number;
		    	        cout<<"Enter Amount "<<endl;
		    	        cin>>withdraw;
		    	        amount-=withdraw;
		    	        output<<"You Transfer Amount is (minus) form your account "<<endl<<withdraw<<endl;
		    	        break;
		    	    case '5':
		    	        cout<<"Enter Your Account Number "<<endl;
		    	        cin>>account_number;
		    	        cout<<"Enter Amount "<<endl;
		    	        cin>>withdraw;
		    	        amount-=withdraw;
		    	        output<<"You Transfer Amount is (minus) form your account "<<endl<<withdraw<<endl;
		    	        break;
		    	    case '6':
		    	        cout<<"Enter Your Account Number "<<endl;
		    	        cin>>account_number;
		    	        cout<<"Enter Amount "<<endl;
		    	        cin>>withdraw;
		    	        amount-=withdraw;
		    	        output<<"You Transfer Amount is (minus) form your account "<<endl<<withdraw<<endl;
		    	        break;
		    	    case '7':
		    	        cout<<"Enter Your Account Number "<<endl;
		    	        cin>>account_number;
		    	        cout<<"Enter Amount "<<endl;
		    	        cin>>withdraw;
		    	        amount-=withdraw;
		    	        output<<"You Transfer Amount is (minus) form your account "<<endl<<withdraw<<endl;
		    	        break;
		    	    case '8':
		    	        cout<<"Enter Your Account Number "<<endl;
		    	        cin>>account_number;
		    	        cout<<"Enter Amount "<<endl;
		    	        cin>>withdraw;
		    	        amount-=withdraw;
		    	        output<<"You Transfer Amount is (minus) form your account "<<endl<<withdraw<<endl;
		    	        break;
					case '9':
		    	        cout<<"Enter Your Account Number "<<endl;
		    	        cin>>account_number;
		    	        cout<<"Enter Amount "<<endl;
		    	        cin>>withdraw;
		    	        amount-=withdraw;
		    	        output<<"You Transfer Amount is (minus) form your account "<<endl<<withdraw<<endl;
                        break;
				}
	    	case '2':
		    	cout<<"Enter Your Account Number "<<endl;
		    	cin>>account_number;
		    	cout<<"Enter Amount "<<endl;
		    	cin>>withdraw;
		    	amount-=withdraw;
		    	output<<"You Transfer Amount is (minus) form your account "<<endl<<withdraw<<endl;
		    	break;
		    default:
		    	cout<<"Your option is wrong";
		    	break;
		}
	}//end of if option 3
	
	if(choice==4)
		{
			
		    cout<<"1: for Electrcial bill"<<endl;
		    cout<<"2: for Gas bill"<<endl;
		    cout<<"3: for PTCL bill"<<endl;
		    cout<<"4: for Internet Bill"<<endl;
		    cin>>ch;
		switch(ch)
		{
			case '1':
				cout<<"Enter Account No: which is in Yours Bill"<<endl;
				cin>>account_number;
				cout<<"Enter Amount of Your Bill"<<endl;
				cin>>withdraw;
				amount-=withdraw;
				output<<"You payed Electrcial bill amount is "<<endl<<withdraw<<endl;
				break;
			case '2':
				cout<<"Enter Account No: which is in Yours Bill"<<endl;
				cin>>account_number;
				cout<<"Enter Amount of Your Bill"<<endl;
				cin>>withdraw;
				amount-=withdraw;
				output<<"You payed Gas bill amount is "<<endl<<withdraw<<endl;
				break;
			case '3':
				cout<<"Enter Account No: which is in Yours Bill"<<endl;
				cin>>account_number;
				cout<<"Enter Amount of Your Bill"<<endl;
				cin>>withdraw;
				amount-=withdraw;
				output<<"You payed PTCL bill amount is "<<endl<<withdraw<<endl;
				break;
			case '4':
				cout<<"Enter Account No: which is in Yours Bill"<<endl;
				cin>>account_number;
				cout<<"Enter Amount of Your Bill"<<endl;
				cin>>withdraw;
				amount-=withdraw;
				output<<"You payed Internet Bill amount is "<<endl<<withdraw<<endl;
				break;
			default:
				cout<<"You enter wrong number ";
				break;
		    }
	    }//end of if option 4
	
	if(choice==5)
	{
		cout<<endl<<endl<<"Current balance on your account: \n"<<amount;
		output<<"total Amount "<<endl<<amount<<endl;
	}//end of if option 5
	else if(choice==6)
	{
		string data;
		ifstream read;
		read.open("ATM.txt");
		while(!read.eof())
		{
			getline(read,data);
			cout<<data<<endl;
		}
		read.close();
	}
	else if(choice==7)
	{
	cout<<"Thanks for using ";
	exit(1);
	}//end of if option 6
	
	
	}
	output.close();
	}//end account type
	else
	cout<<"Your choice is Worng ";
	}//end of language
	else
	cout<<"Your choice is Worng ";

}
