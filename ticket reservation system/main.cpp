#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

void reservation();
void ONE();
void TWO();
void THREE();
void FOUR();

void Display();
void menu();
int main()
{
    Display();
    menu();
    return 0;
}

void Display(){
cout<<"---------------------------------------------------------------------------------"<<endl;
cout<<"---------------------------------------------------------------------------------"<<endl;
cout<<"----------------------Railway ticket reservation system--------------------------"<<endl;
cout<<"---------------------------------------------------------------------------------"<<endl;
cout<<"---------------------------------------WELCOME-----------------------------------"<<endl;
getch();

}

void menu(){
    top:
cout<<endl<<endl<<endl<<"Menu:"<<endl;
cout<<"     1:Reserve A ticket"<<endl;
cout<<"     2:Check Schedule"<<endl;
cout<<"     3:Destinations"<<endl;
cout<<"     4:exit"<<endl;
//cout<<"     6:"<<endl;

int a;
cin>>a;
if(a==1){
        ONE();
}
else if(a==2){
        TWO();
}
else if (a==3){
    cout<<"Our Destinations:"<<endl;
        THREE();
}
else if (a==4){
  cout<<" Thankyou for using our system , Good By"<<endl;

}else{
cout<<"invalid entry \n plz chose again";
goto top;}
}

void ONE(){
cout<<"You Can Reserve A ticket for "<<endl;
cout<<"          1.Lahore.         "<<endl;
cout<<"          2.Rawalpindi.     "<<endl;
cout<<"          3.Islamabad.      "<<endl;
cout<<"          4.Karachi.        "<<endl;
cout<<"          5.Peshawar.       "<<endl;
cout<<"          6.Quetta.          "<<endl<<endl;
reservation();
}
void reservation(){
    cout<<"\tPlz Enter Your "<<endl;
cout<<"Departure place name from above List :";
string a;
cin>>a;
cout<<"Destination Place name from above List :";
string b;
cin>>b;
cout<<"Plz Enter your Full name :";
string name,name2;
cin>> name>>name2;
cout<<"Plz Enter your Phone number :";
string number;
cin>> number;

cout<<"Plz Enter your departure date in MM/DD/YYY format :";
string date;
cin>> date;
cout<<"Plz Enter your departure time in HH:MM format :";
string time;
cin>> time;

cout<<"Please note down that \nYour ticket has been reserved under \nname :"<<name<<" "<<name2;
cout<<"\nPhone number :"<<number<<"\ndate :"<<date<<" and time :"<<time<<"\nfrom :"<<a<<"\nto:"<<b<<endl;


cout<<"\n\n\n\t\tThank you for using our system...\n";

}

void TWO(){
cout<<"Chose the location of departure "<<endl;
cout<<"          1.Lahore.         "<<endl;
cout<<"          2.Rawalpindi.     "<<endl;
cout<<"          3.Islamabad.      "<<endl;
cout<<"          4.Karachi.        "<<endl;
cout<<"          5.Peshawar.       "<<endl;
cout<<"          6.Queta.          "<<endl;
int Departure,Arrival;
cin>>Departure;
if(Departure==1){cout<<"\n\n Your departure Place is Lahore "<<endl;
        topm:
        cout<<"Please enter Place where you want go !"<<endl;
        cin>>Arrival;
        if(Arrival==2){
            cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
                }
            else if(Arrival==3){
        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
                         }
            else if (Arrival==4){
        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
                          }
              else if (Arrival==5){
        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
}
             else if (Arrival==6){

        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
               }else{
                 cout<<"invalid entry \n plz chose again";
                 goto topm;
}}
else if(Departure==2){cout<<"\n\n Your departure Place is Rawalpindi "<<endl;
        topm2:
        cout<<"Please enter Place where you want go !"<<endl;
        cin>>Arrival;
        if(Arrival==1){
            cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
                }
            else if(Arrival==3){
        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
                         }
            else if (Arrival==4){
        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
                          }
              else if (Arrival==5){
        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
}
             else if (Arrival==6){

        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
               }else{
                 cout<<"invalid entry \n plz chose again";
                 goto topm2;
}

}
else if (Departure==3){cout<<"\n\n Your departure Place is Islamabad "<<endl;
        topm3:
        cout<<"Please enter Place where you want go !"<<endl;
        cin>>Arrival;
        if(Arrival==1){
            cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
                }
            else if(Arrival==2){
        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
                         }
            else if (Arrival==4){
        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
                          }
              else if (Arrival==5){
        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
}
             else if (Arrival==6){

        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
               }else{
                 cout<<"invalid entry \n plz chose again";
                 goto topm3;
}
}
else if (Departure==4){cout<<"\n\n Your departure Place is Karachi "<<endl;
        topm4:
        cout<<"Please enter Place where you want go !"<<endl;
        cin>>Arrival;
        if(Arrival==2){
            cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
                }
            else if(Arrival==3){
        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
                         }
            else if (Arrival==1){
        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
                          }
              else if (Arrival==5){
        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
}
             else if (Arrival==6){

        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
               }else{
                 cout<<"invalid entry \n plz chose again";
                 goto topm4;
}

}
else if (Departure==5){cout<<"\n\n Your departure Place is Peshawar "<<endl;
        topm5:
        cout<<"Please enter Place where you want go !"<<endl;
        cin>>Arrival;
        if(Arrival==2){
            cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
                }
            else if(Arrival==3){
        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
                         }
            else if (Arrival==4){
        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
                          }
              else if (Arrival==1){
        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
}
             else if (Arrival==6){

        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
               }else{
                 cout<<"invalid entry \n plz chose again";
                 goto topm5;
}

}
else if (Departure==6){cout<<"\n\n Your departure Place is Queta "<<endl;
        topm6:
        cout<<"Please enter Place where you want go !"<<endl;
        cin>>Arrival;
        if(Arrival==2){
            cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
                }
            else if(Arrival==3){
        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
                         }
            else if (Arrival==4){
        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
                          }
              else if (Arrival==5){
        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
}
             else if (Arrival==1){

        cout<<"  1AM   |    6AM   |   12PM  |   4PM   |   10PM   "<<endl;
               }else{
                 cout<<"invalid entry \n plz chose again";
                 goto topm6;
}

}else{
cout<<"invalid entry \n plz chose again";

}
}

void THREE(){

cout<<"          1.Lahore."<<endl;
cout<<"          2.Rawalpindi."<<endl;
cout<<"          3.Islamabad."<<endl;
cout<<"          4.Karachi."<<endl;
cout<<"          5.Peshawar."<<endl;
cout<<"          6.Queta."<<endl;


cout<<"want to reserve any ticket: y/n";
char b;
cin>>b;
if((b=='y') | (b=='Y')){ONE();}
}
