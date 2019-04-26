#include<iostream>
using namespace std;
#include<fstream>
#include<windows.h>
#include<iomanip>
#include<cstdlib>
using std::setw;
#include<conio.h>
#include<string.h>
void cal_Price(int choice,int& theprice);
void box(int x, int y);
char stars();
int main()
{
	ofstream myfile;
	myfile.open("spimno.txt",ios::app);
	
 string studentid,pass;
 string choice1,choice5;
 string subjects[4],subjects2[3];
 int choice3,choice2,choice4,coreprice=10000,ncoreprice=7000;
 
 
 do
 {
 
 cout<<endl<<endl<<endl;
 box(178,20);
 cout<<"  W E L C O M E   T O   S P I M N O ";
 box(178,20);
 cout<<endl<<endl;
 myfile<<endl<<endl<<endl<<"W E L C O M E   T O   S P I M N O "<<endl<<endl;
 
 cout<<stars();
 cout<<endl<<endl<<"                  Student Id:  ";
 cin>>studentid;
 cout<<endl<<"                  Password:  ";
 cin>>pass;
 
 if(((studentid=="Adeel")&&(pass=="9a21"))||((studentid=="Tahir")&&(pass=="121"))||((studentid=="Murtaza")&&(pass=="122")))
 {
 	system("cls");
 		cout<<" Logging in, Please wait . ";
			 Sleep(1000);
			 cout<<" .";
			 Sleep(1000);
			 cout<<"  .";
			 Sleep(1000);
			 cout<<"  .";
			 Sleep(1000);
			 cout<<"  .";
			 Sleep(1000);
			 cout<<"  .";
 			system("cls");
 	do
 	{
 	myfile<<"\n\nNOW YOU ARE GOING TO REGISTERE YOUR COURSES\n\n";
    cout<<"\n                                                     0~ LOGOUT  |  4~ QUIT ";
    myfile<<"\n                                                     0~ LOGOUT  |  4~ QUIT ";
 	cout<<endl<<endl<<" \n \n 1: Add Subject"<<endl;
 	myfile<<endl<<endl<<" \n \n 1: Add Subject"<<endl;
 	cout<<" \n 2: View Registered Courses  \n "<<endl;
 	myfile<<" \n 2: View Registered Courses  \n "<<endl;
 	cout<<" 3: View All Subjects \n"<<endl;
 	myfile<<" 3: View All Subjects \n"<<endl;
	cout<<endl<<endl<<endl<<endl;
	myfile<<endl<<endl<<endl<<endl;
 	
 	cout<<" Where to go? Enter your choice : ";
 	myfile<<" Where to go? Enter your choice : ";
 	cin>>choice1;
 	myfile<<choice1;
 	
 	system("cls");
 		if(choice1=="1")
 		{
 			Sleep(300);
 			cout<<" Department: Computer Science";
 			myfile<<" \nDepartment: Computer Science";
 			Sleep(300);
			cout<<"           Semester: 1st \n\n\n";             //studentid
			myfile<<"           Semester: 1st \n\n\n";             //studentid
    
	
	Sleep(1000);
    cout<<" I";
    Sleep(400);
    cout<<" N";
    Sleep(400);
    cout<<" S";
    Sleep(400);
    cout<<" T";
    Sleep(400);
    cout<<" R";
    Sleep(400);
    cout<<" U";
    Sleep(400);
    cout<<" C";
    Sleep(400);
    cout<<" T";
    Sleep(400);
    cout<<" I";
    Sleep(400);
    cout<<" O";
    Sleep(400);
    cout<<" N";
    Sleep(400);
    cout<<" S :  \n\n\n";
    Sleep(300);
    myfile<<"\nIMPORTANT INSTRUCTIONS FOR REGISTRATION PROCESS\n";
    cout<<" 1. You need to select a minimum of 2 core and 1 non core subjects. \n";
    myfile<<" 1. You need to select a minimum of 2 core and 1 non core subjects. \n";
    Sleep(300);
    cout<<" 2. You can select a maximum of 4 core and 3 none core subjects. \n\n\n";
    myfile<<" 2. You can select a maximum of 4 core and 3 none core subjects. \n\n\n";
    
    cout<<" . ";
    Sleep(700);
    cout<<" . ";
    Sleep(700);
    cout<<" . ";
    Sleep(700);
    cout<<" . ";
    Sleep(700);
    cout<<" . \n\n\n\n";
    Sleep(700);

    system("pause");
    system("cls");

     do
     {
    Sleep(300);
    cout<<" Which you want to select first? \n \n";
    myfile<<" Which you want to select first? \n \n";
    Sleep(300);
	cout<<"1: Core Subjects \n";
	myfile<<"1: Core Subjects \n";
	Sleep(300);
	cout<<"2: Non-Core Subjects \n\n\n";
	myfile<<"2: Non-Core Subjects \n\n\n";
	Sleep(300);
	cout<<" Enter your choice : ";
	myfile<<" Enter your choice : ";
	cin>>choice2;
	myfile<<choice2;
	Sleep(300);
	system("cls");
	if(choice2==1||choice2==2)
	{
	
	for(int i=0;i<2;i++,choice2++)
	{
		if(choice2==1)
	{
		do
		{
		Sleep(300);
		cout<<"\n\n How many core-subjects you want to register? ( Min 2 & Max 4 ) \n"	;
		myfile<<"\n\n How many core-subjects you want to register? ( Min 2 & Max 4 ) \n"	;
	    cin>>choice3;
	    myfile<<choice3;
		Sleep(100);
		system("cls");
		if(choice3<2)
		{
			Sleep(300);
			cout<<"\n \n \n You'll have to select 2 core subjects minimum. \n\n\n\n\n\n" ;
			myfile<<"\n \n \n You'll have to select 2 core subjects minimum. \n\n\n\n\n\n" ;
			Sleep(300);
			system("pause");
			system("cls");
		}
		if(choice3>4)
		{
			Sleep(300);
			cout<<"\n \n \n You can only select 4 core subjects maximum \n\n\n\n\n\n" ;
			myfile<<"\n \n \n You can only select 4 core subjects maximum \n\n\n\n\n\n" ;
			Sleep(300);
			system("pause");
			system("cls");
		}
	
		if(choice3>=2&&choice3<=4)
		{
		Sleep(300);
		cout<<"\n\n C O R E   S U B J E C T S :                \n\n\n\n";
		myfile<<"\n\n C O R E   S U B J E C T S :                \n\n\n\n";
		Sleep(300);
	    cout<<"CODE       SUBJECTS            CREDIT HOURS      \n\n\n" ;
	    myfile<<"CODE       SUBJECTS            CREDIT HOURS      \n\n\n" ;
	    Sleep(300);
	    cout<<" BE     Basic ELectronics             3           \n\n";
	    myfile<<" BE     Basic ELectronics             3           \n\n";
	    Sleep(300);
	    cout<<" CP     Computer Programming          3            \n\n";
	    myfile<<" CP     Computer Programming          3            \n\n";
	    Sleep(300);
	    cout<<" ICT    Computer Technology           2             \n\n";
	    myfile<<" ICT    Computer Technology           2             \n\n";
	    Sleep(300);
	    cout<<" CL     Calculus                      2              \n\n";
	    myfile<<" CL     Calculus                      2              \n\n";
	    cout<<" Enter subject code for choice. \n\n";
	    myfile<<" Enter subject code for choice. \n\n";
	    for(int i=0,j=1;i<choice3;i++,j++)
	{
do
{
	cout<<" \n Choice "<<j<<" ? ";
	myfile<<" \n Choice "<<j<<" ? ";
	cin>>subjects[i];
	if(subjects[i]!="BE"&&subjects[i]!="Be"&&subjects[i]!="bE"&&subjects[i]!="be"&&subjects[i]!="CP"&&subjects[i]!="Cp"&&subjects[i]!="cP"&&subjects[i]!="cp"&&subjects[i]!="CL"&&subjects[i]!="Cl"&&subjects[i]!="cL"&&subjects[i]!="cl"&&subjects[i]!="ICT"&&subjects[i]!="Ict"&&subjects[i]!="ict"&&subjects[i]!="iCt"&&subjects[i]!="icT"&&subjects[i]!="ICt"&&subjects[i]!="iCT"&&subjects[i]!="IcT")
{
	Sleep(300);
	cout<<"\n You've entered invalid subject code. \n ";
	myfile<<"\n You've entered invalid subject code. \n ";
	
}
}
while(subjects[i]!="BE"&&subjects[i]!="Be"&&subjects[i]!="bE"&&subjects[i]!="be"&&subjects[i]!="CP"&&subjects[i]!="Cp"&&subjects[i]!="cP"&&subjects[i]!="cp"&&subjects[i]!="CL"&&subjects[i]!="Cl"&&subjects[i]!="cL"&&subjects[i]!="cl"&&subjects[i]!="ICT"&&subjects[i]!="Ict"&&subjects[i]!="ict"&&subjects[i]!="iCt"&&subjects[i]!="icT"&&subjects[i]!="ICt"&&subjects[i]!="iCT"&&subjects[i]!="IcT");


	
}

system("cls");

for(int i=0;i<choice3;i++)
{
	if(subjects[i]=="BE"||subjects[i]=="Be"||subjects[i]=="bE"||subjects[i]=="be")
	{
		subjects[i]="Basic Electronics -I";
	}
	if(subjects[i]=="CP"||subjects[i]=="Cp"||subjects[i]=="cP"||subjects[i]=="cp")
	{
		subjects[i]="Computer Programming";
	}
	if(subjects[i]=="CL"||subjects[i]=="Cl"||subjects[i]=="cL"||subjects[i]=="cl")
	{
		subjects[i]="Calculus - Advanced'";
	}
	if(subjects[i]=="ICT"||subjects[i]=="Ict"||subjects[i]=="ict"||subjects[i]=="iCt"||subjects[i]=="icT"||subjects[i]=="ICt"||subjects[i]=="iCT"||subjects[i]=="IcT")
	{
		subjects[i]="Informations &n Tech";
	}
	Sleep(300);
	cout<<endl<<"You've registered "<<subjects[i]<<" successfully!! \n\n\n\n "<<endl;
	myfile<<endl<<"You've registered "<<subjects[i]<<" successfully!! \n\n\n\n "<<endl;
}
system("pause");
system("cls");
cal_Price(choice3,coreprice);
Sleep(300);
cout<<"\n\n\n TOTAL PRICE FOR "<<choice3<<" CORE SUBJECTS IS : "<<coreprice<<" PKR \n\n\n\n";
myfile<<"\n\n\n TOTAL PRICE FOR "<<choice3<<" CORE SUBJECTS IS : "<<coreprice<<" PKR \n\n\n\n";
system("pause");
system("cls");

		}
		}
		while(choice3<2||choice3>4);
		
}

if(choice2==2)
	{
		do
		{
			Sleep(300);
			cout<<"\n\n How many Non core-subjects you want to register? ( Min 1 & Max 3 ) \n"	;
			myfile<<"\n\n How many Non core-subjects you want to register? ( Min 1 & Max 3 ) \n"	;
	    cin>>choice4;
	    myfile<<choice4;
		Sleep(700);
		system("cls");
		if(choice4<1)
		{
			Sleep(300);
			cout<<"\n \n \n You'll have to select 1 Non core subject minimum. \n\n\n\n\n\n" ;
			myfile<<"\n \n \n You'll have to select 1 Non core subject minimum. \n\n\n\n\n\n" ;
			Sleep(100);
			system("pause");
			system("cls");
		}
		if(choice4>3)
		{
			Sleep(300);
			cout<<"\n \n \n You can only select 3 Non core subjects maximum \n\n\n\n\n\n" ;
			myfile<<"\n \n \n You can only select 3 Non core subjects maximum \n\n\n\n\n\n" ;
			Sleep(100);
			system("pause");
			system("cls");
		}
		
		if(choice4>=1&&choice4<=3)
		{
		Sleep(300);
		cout<<"\n\n N O N    C O R E   S U B J E C T S :                \n\n\n\n";
		myfile<<"\n\n N O N    C O R E   S U B J E C T S :                \n\n\n\n";
		Sleep(300);
	    cout<<"CODE       SUBJECTS            CREDIT HOURS    \n\n\n" ;
	    myfile<<"CODE       SUBJECTS            CREDIT HOURS    \n\n\n" ;
	    Sleep(300);
	    cout<<" ISL       Islamiat                 2           \n\n";
	    myfile<<" ISL       Islamiat                 2           \n\n";
	    Sleep(300);
	    cout<<" PS        Pakistan Studies         2            \n\n";
	    myfile<<" PS        Pakistan Studies         2            \n\n";
	    Sleep(300);
	    cout<<" EN        English                  2             \n\n";
	    myfile<<" EN        English                  2             \n\n";
	    cout<<" Enter subject code for choice. \n\n";
	    myfile<<" Enter subject code for choice. \n\n";
	    for(int i=0,j=1;i<choice4;i++,j++)
	{
do
{
	Sleep(300);
	cout<<" \n Choice "<<j<<" ? ";
	myfile<<" \n Choice "<<j<<" ? ";
	cin>>subjects2[i];
	if(subjects2[i]!="ISL"&&subjects2[i]!="Isl"&&subjects2[i]!="isl"&&subjects2[i]!="IsL"&&subjects2[i]!="iSl"&&subjects2[i]!="ISl"&&subjects2[i]!="iSL"&&subjects2[i]!="ps"&&subjects2[i]!="PS"&&subjects2[i]!="Ps"&&subjects2[i]!="pS"&&subjects2[i]!="en"&&subjects2[i]!="EN"&&subjects2[i]!="En"&&subjects2[i]!="eN")
{
	Sleep(300);
	cout<<"\n You've entered invalid subject code. \n ";
	myfile<<"\n You've entered invalid subject code. \n ";
	
}
}
while(subjects2[i]!="ISL"&&subjects2[i]!="Isl"&&subjects2[i]!="isl"&&subjects2[i]!="IsL"&&subjects2[i]!="iSl"&&subjects2[i]!="ISl"&&subjects2[i]!="iSL"&&subjects2[i]!="ps"&&subjects2[i]!="PS"&&subjects2[i]!="Ps"&&subjects2[i]!="pS"&&subjects2[i]!="en"&&subjects2[i]!="EN"&&subjects2[i]!="En"&&subjects2[i]!="eN");


	
}

system("cls");

for(int i=0;i<choice4;i++)
{
	if(subjects2[i]=="EN"||subjects2[i]=="eN"||subjects2[i]=="eN"||subjects2[i]=="en")
	{
		subjects2[i]="English - Advanced I";
	}
	if(subjects2[i]=="Ps"||subjects2[i]=="PS"||subjects2[i]=="pS"||subjects2[i]=="ps")
	{
		subjects2[i]= "Pakistan's Studies I";
	}
	
	if(subjects2[i]=="isl"||subjects2[i]=="ISL"||subjects2[i]=="Isl"||subjects2[i]=="iSl"||subjects2[i]=="isL"||subjects2[i]=="ISl"||subjects2[i]=="iSL"||subjects2[i]=="IsL")
	{
		subjects2[i]= "Islamiat Advanced- I";
	}
	cout<<endl<<"You've registered "<<subjects2[i]<<" successfully!! \n\n\n\n "<<endl;
	
}
system("pause");
system("cls");
cal_Price(choice4,ncoreprice);
Sleep(300);
cout<<"\n\n\n TOTAL PRICE FOR "<<choice4<<" NON-CORE SUBJECTS IS : "<<ncoreprice<<" PKR \n\n\n\n";
myfile<<"\n\n\n TOTAL PRICE FOR "<<choice4<<" NON-CORE SUBJECTS IS : "<<ncoreprice<<" PKR \n\n\n\n";
system("pause");
system("cls");
choice2=choice2-2;
		}
		}
		while(choice4<1||choice4>3);	
}
	}
	 Sleep(100);
	 system("cls");
	 
	
	 do
	 {
	 	Sleep(300);
	 cout<<" We wish you Good luck studying these courses. \n\n\n\n\n";
	 myfile<<" We wish you Good luck studying these courses. \n\n\n\n\n";
	 
	 Sleep(300);
	 cout<<"0: LOG OUT "<<endl<<endl;
	 myfile<<"0: LOG OUT "<<endl<<endl;
	 Sleep(300);
	 cout<<"4: QUIT"<<endl<<endl;
	 myfile<<"4: QUIT"<<endl<<endl;
	 Sleep(300);
	 cout<<"6: Generate Slip"<<endl<<endl;
	 myfile<<"6: Generate Slip"<<endl<<endl;
	 Sleep(300);
	 cout<<"\n\n\n Enter your choice: ";
	 myfile<<"\n\n\n Enter your choice: ";
	 cin>>choice5;
	 myfile<<choice5;
	 system("cls");
	 if(choice5=="4")
 	{
 		        myfile<<"THANK YOU WE WILL MEET AGAIN BEST OF LUCK \n\n\n";
 		        Sleep(1000);
 				cout<<endl<<endl<<"            T H A N K";
 				Sleep(300);
				cout<<"   Y O U !";
				Sleep(300);
				cout<<"  W E ' L L";
				Sleep(300);
				cout<<"   M E E T ";
				Sleep(300);
				cout<<"  A G A I N  ";
    }
    else if(choice5=="6")
    {
    	 Sleep(300);
	 cout<<"\n\n\n O P E R A T I O N     S U C C E S S F U L \n\n\n";
	 myfile<<"\n\n\n O P E R A T I O N     S U C C E S S F U L \n\n\n";
	 Sleep(300);
	 myfile<<"S.No    Registered Courses    Credit Hours    Price \n\n";
	 cout<<"S.No    Registered Courses    Credit Hours    Price \n\n";
	 for(int w=0,x=1;w<choice3;w++,x++)
	 {
	 	Sleep(300);
	 	cout<<x<<"     "<<subjects[w]<<"           4     "<<coreprice<<" PKR "<<endl;
	 	myfile<<x<<"     "<<subjects[w]<<"           4   "<<coreprice<<" PKR "<<endl;
	 	
	 }
	 for(int l=0,n=choice3+1;l<choice4;l++,n++)
	 {
	 	Sleep(300);
	 	cout<<n<<"     "<<subjects2[l]<<"           3     "<<ncoreprice<<" PKR "<<endl;
	 	myfile<<n<<"     "<<subjects2[l]<<"          3     "<<ncoreprice<<" PKR"<<endl;
	 }
	 Sleep(300);
	 cout<<"\n\n\n";
	 system("pause");
	 system("cls");
    	
	}
	else if(choice5!="6"&&choice5!="0"&&choice5!="4")
	{
		Sleep(300);
		system("cls");
		Sleep(300);
		cout<<"You've entered invalid choice!";
		myfile<<"You've entered invalid choice!";
		Sleep(300);
		system("cls");
		
	}
	 }
	 while(choice5!="4"&&choice5!="0");
	 
	}
	else
	 {
	 	
	 	cout<<"\n \n \n You've entered invalid choice ! \n\n\n\n\n" ;
	 	myfile<<"\n \n \n You've entered invalid choice ! \n\n\n\n\n" ;
	 	Sleep(2500);
	 	cout<<"Taking you back in ";
	 	myfile<<"Taking you back in previous section\n ";
	 	cout<<"1 ";
	 	Sleep(1500);
	 	cout<<"2 ";
	 	Sleep(1500);
	 	cout<<"and ";
	 	Sleep(1500);
	 	cout<<"3 ";
	 	Sleep(100);
	 	system("cls");
	 }

	 
	 	
  }
    
	 while(choice2!=1&&choice2!=2);
		 }
		 else if(choice1=="2")
 		{
 		Sleep(300);
 		stars();
 		Sleep(300);
		cout<<endl<<endl<<"            YOU HAVEn't REGISTERED ANY COURSES YET   \n";
		myfile<<endl<<endl<<"            YOU HAVEn't REGISTERED ANY COURSES YET   \n";
		Sleep(300);
		stars();
		cout<<"\n\n\n\n\n\n";
			system("pause");
		//Sleep(1000);
		system("cls");
		 }
		 else if(choice1=="3")
 	{
 	
 		cout<<endl<<endl<<"C O R E    S U B J E C T S \n \n \n ";
 		myfile<<endl<<endl<<"C O R E    S U B J E C T S \n \n \n ";
		Sleep(300);
		cout<<"1. Computer Programming \n \n ";
		myfile<<"1. Computer Programming \n \n ";
		Sleep(300);
		cout<<"2. Basic Electronics \n \n ";
		myfile<<"2. Basic Electronics \n \n ";
		Sleep(300);
		cout<<"3. Introduction To Computer Technology \n \n ";
		myfile<<"3. Introduction To Computer Technology \n \n ";
		Sleep(300);
		cout<<"4. Calculus \n \n ";
		myfile<<"4. Calculus \n \n ";
		Sleep(300);
		cout<<"N O N    C O R E    S U B J E C T S \n \n \n ";
		myfile<<"N O N    C O R E    S U B J E C T S \n \n \n ";
		Sleep(300);
		cout<<"1. Islamiat \n \n ";
		myfile<<"1. Islamiat \n \n ";
		Sleep(300);
		cout<<"2. English \n \n ";
		myfile<<"2. English \n \n ";
		Sleep(300);
		cout<<"3. Pakistan Studies \n \n \n";
		myfile<<"3. Pakistan Studies \n \n \n";
		Sleep(300);
		cout<<endl<<endl<<endl;
 		system("pause");
	
		
		system("cls");
 		
	 }
		 else if(choice1=="4")
 		{
 				cout<<endl<<endl<<"            T H A N K   Y O U !  W E ' L L   M E E T   A G A I N  ";
 				myfile<<endl<<endl<<"            T H A N K   Y O U !  W E ' L L   M E E T   A G A I N  ";
		 }
		 else if(choice1=="0")
 		{
 			cout<<" Logging out, Please wait . ";
 			cout<<" Logged off..\n\n ";
			 Sleep(1000);
			 cout<<" .";
			 Sleep(1000);
			 cout<<"  .";
			 Sleep(1000);
			 cout<<"  .";
			 Sleep(1000);
			 cout<<"  .";
			 Sleep(1000);
			 cout<<"  .";
 			system("cls");
		 }
		 else
		 {
		cout<<"You've entered inavlid choice!!! \n \n\n\n";
		myfile<<"You've entered inavlid choice!!! \n \n\n\n";
		system("pause");
		system("cls");
		 }
 		
	 }
	 while(choice1!="1"&&choice1!="4"&&choice1!="0");
 }
 else
 {
 	system("cls");
 	cout<<endl<<" THE USERNAME OR PASSWORD YOU've ENTERED IS INVALID \n \n \n \n ";
 	myfile<<endl<<" THE USERNAME OR PASSWORD YOU've ENTERED IS INVALID \n \n \n \n ";
 	system("pause");
 	system("cls");
 }
 
}
while((studentid!="Adeel"&&studentid!="Tahir"&&studentid!="Murtaza")||(pass!="9a21"&&pass!="121"&&pass!="122")||(choice1=="0")||(choice5=="0"));
getch();
}
void cal_Price(int choice,int& theprice)
{
	theprice=choice*theprice;
}
char stars()
{
	cout<<"****************************************************************************";
}
void box(int x, int y)
{
	for(int i=0;i<y;i++)
	cout<<(char)x;
}

