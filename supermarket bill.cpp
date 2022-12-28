#include <iostream>
#include <fstream>
using namespace std;

class shopping {
	private:
		int pcode;
		float price;
		float dis;
		string pname;

	public:
		void menu();
		void administrator();
		void buyer();
		void add();
		void edit();
		void rem();
		void list();
		void receipt();
};
void shopping ::menu();
{
	m;
	int choice;
	string email;
	string password;
	cout<< "Super market Main Menu\n";
	do {
		cout<< "1.Administrator "
		    cout<< "2.Buyer "
		    cout<< "3.Exit "
		    cin>>choice;
	} while(choice!=3);
	switch(choice) {
		case 1:
			cout<<"Please login \n";
			cout<<"Please enter your email \n";
			cin>>email;
			cout<<"Please enter your password \n";
			cin>>password;

			if(email="giannakis24@gmail.com"&& password="kostakis231@") {
				administrator();
			} else {
				cout<<"Invalid Username and or password.Please try again";
			}
			break;
	case 2: {
		buyer();
	}
case 3: {
		exit(0);
	}
default: {
		cout<<"Please Select From The Given Options";
	}
}
goto m;	
}

void shopping::administrator()
{
	m;
	int choice;
	cout<<" Administrator Menu \n";
	cout<<"1) Add A Product \n";
	cout<<"2) Modify A Product \n";
	cout<<"3) Remove A Product\n";
	cout<<"4) Return To Main Menu \n";
	cout<<"5) Please Enter Your Choice \n";
	cin>>choice;
	
	switch(choice);
	{
		case 1:
			add();
			break;
		case 2:		
			modify();
			break;
		case 3:
			remove();
			break;
		case 4:
			menu();
			break;
		default:
			cout<<"Invalid Choice";				
	}
goto m;	
}
void shopping::buyer()
{
	m;
	int choice;
	cout<<" 1) Buyer \n";
	cout<<" 2) Buy Product  \n";
	cout<<" 3) Go Back \n";
	cout<<"  Please Enter Your Choice \n";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			receipt();
			break;
			
		case 2:
			menu();
		default:
			cout<<"Invalide choice";		
	}
	
goto m;	
}
void shopping::add()
{
	m;
	fstream data;
	int c,token=0;
	float p,d;
	string n;
	
	cout<<" Add A New Product \n";
	cout<<" Please Enter The Product Code \n";
	cin>>pcode;
	cout<<"Enter The Name Of The Product \n";
	cin>>pname;
	cout<<" What Is The Price Of The Product \n";
	cin>>price;
	cout<<"Please Enter Any Discount You May Have \n";
	cin>>dis;  	
	
	data.bad(dtabase.txt,ios::in);
	
	if(!data)
	{
		data.open(database.txt,ios::app|ios:;out);
		data<<""<<pcode<<""<<pname<""<<price<<""<<dis<<"\n";
		data.close();
		
	}
	else
	{
		data>>c>>n>>p>>d;
		while(!data.eof())
		{
			if(c==pcode)
			{
				token++
			}
			data>>c>>n>>p>>d;
		}
		data.close();
	}
	if(token==1)
	goto m;
	else
	{
		data.open(database.txt,ios::app|ios:;out);
		data<<""<<pcode<<""<<pname<""<<price<<""<<dis<<"\n";
		data.close();	
	}
	cout<<"Record Has Been Inserted";
}
void shopping::mofify()
{
	m;
	fstream data,data1;
	int pkey,token,c
	float p,d;
	string n;
	
	cout<<" Modify The Record ";
	cout<<" Please Enter The Product Code ";
	cin>>pkey;
	
	data.open("database.txt",ios::in); 
	if(!data)
	{
		cout<<" This file does not exist ";	
	}
	else
	{
		data1.open("database 1.txt",ios::app|ios::out);
		
		data>>pcode>>pname>>price>.dis;
		while(!data.eof())
		{
			if(pkey==pcode)
			{
				cout<<" Product new code \n";
				cin>.c;
				cout<<" Enter the name of the product \n";
				cin>>n;
				cout<<" price of product \n";
				cin>>p;
				cout<<" Discount \n";
				cin>>d;
				data1<<""<<c<<""<<n<<""<<p<<""<<d;
				cout<<" The record has been edited ";
				token++;
			}
			else
			{
				data1<<""<<pcode<<""<<pname<<""<<price<<""<<dis<<"\n";
			}
			data>>pcode>>pname>>price>>disc;
		}
	}
	data.close();
	data1.close1();
	
	remove("database.txt";)
	rename("database1.txt","database.txt");
	
	if(token==0)
	{
		cout<<" Record not found ";
	}
}
void shopping::remove()
{
	fsream data,data1;
	int pkey,token=0;
	cout<<" Remove Product \n";
	cout<<" Enter The Product Code \n";
	cin>>pkey;
	data.open("database.txt",ios::in);
	if(!data)
	{
		cout<<" File does not exist";
	}
	else
	{
		data1.open("database1.txt"ios::app|ios::out);
		data>>pcode>>pname>>price>>dis;
		while(!data.eof())
		{
			if(pcode==pkey)
			{
				cout<<"Product Has Been Deleted";
				token++;
			}
			else
			{
				data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis;
			}
				data>>pcode>>pname>>price>>dis;
		}
		data.close();
		data1.close;
		remove("database.txt";)
	rename("database1.txt","database.txt");
	if(token==0)
	{
		cout<<" Record not found ";
	}
	}
}
void shopping::list()
{
	fstream data;
	data.open("database.txt",ios::in)
	cout<<"ProNo\t\tName\t\tPrce\n";
	data>>pcode>>pname>>dis;
	while(!data.eof())
	{
		cout<<pcode<<pname<<price<<"\n";
		data>>pcode>>pname>>dis;
	}
	data.close();
}
void shopping::receipt()
{
	fstream data;
	int arrc[100],arrc[100],c=0;
	float amount=0;dis=0,total=0;
	char choice;
	
	
	cout<<" Receipt ";
	data.open("database.txt",ios::in)
	if(!data)
	{
		cout<<"Empty Database";
	}
	else
	{
		data.close();
		list();
		cout<<" Please Place The Order ";
		do
		{
			cout<<"Please Enter The Product Code";
			cin>>arrc[c];
			cout<<"Please Enter The Producy Quantity";
			cin>>arrq[c];
			for(int i=0;i<c;i++)
			{
				if(arrc[c]==arrc[i])
				{
					cout<<"Duplicate code Please try again";
					goto m;
				}
			}
			c++;
			cout<<"Do you want to buy another product ?Yes Or No";
			cin>>choice;
		}
		while(choice=="yes");
		cout<<"Repeipt\n";
		cout<<"Product Name\n Quantity\n Price\n Amount With Discound\n";
		for	(int i=0;i<c;i++)
		{
			data.open("database.exe"ios::in);
			data>>pcode>>pname>>dis;
			while(!data.eof())
			{
				if(pcode=arrc[i])
				{
					amount=price*arrq[i];
					dis=amount-(amount*dis/100);
					total=total+dis
					cout<<pcode<<pname<<arrq[i]<<price<<amount<<"\n";
					
				}
				data>>pcode>>pname>>dis;
			}
				
		}
		data.close();
	}
	cout<<" Total Amount:"<<total;
}
int main
{
	shopping s;
	s.menu();
}		
}

