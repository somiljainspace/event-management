#include <iostream>
#include<string>
#include <cstring>
using namespace std;
void insertevent(string &name, string &date,string &time,string &veneue){
    cout<<"Enter the name of the event:";
    cin>>name;
    cout<<"Enter the time of the event:";
    cin>>time;
    cout<<"Enter the date of the event:";
    cin>>date;
    cout<<"Enter the venue of the event:";
    cin>>veneue;

}

void display(string &name, string &date,string &time,string &veneue){
    cout<<" name of the event:";
    cout<<name<<endl;
    cout<<" time of the event:";
    cout<<time<<endl;;
    cout<<" date of the event:";
    cout<<date<<endl;
    cout<<"venue of the event:";
    cout<<veneue<<endl;
}
void deleteevent(string &name, string &date,string &time,string &veneue){
    name="";
    date="";
    time="";
    veneue="";
}
void modifyevent(string &name, string &date,string &time,string &veneue){
    cout<<"enter the option you want to modify"<<endl;
    cout<<"1.Event name"<<endl;
    cout<<"2. event time"<<endl;
    cout<<"3.event date"<<endl;
    cout<<"4.event venue"<<endl;
    int k;
    switch(k){
        case 1:
            cout<<"enter the event name "<<endl;
            cin>>name;
            break;
        case 2:
            cout<<"enter the event time "<<endl;
            cin>>time;
            break;
        case 3:
        cout<<"enter the event date "<<endl;
            cin>>date;
            break;
        case 4:
        cout<<"enter the event venue "<<endl;
            cin>>veneue;
            break;
    }
    
    
}

int main(){

    int choice;
    
    string name;
    string date;
    string time;
    string veneue;
    do {
    
    cout<<"select the options "<<endl;
    cout<<"1.Add Event"<<endl;
    cout<<"2.Display events details"<<endl;
    cout<<"3.Modify Event Information"<<endl;
    cout<<"4.Delete Event"<<endl;
    
    cout<<"enter your choice"<<endl;
    cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"you have choosen to add event "<<endl;
            insertevent( name , date,time,veneue);
            break;
        case 2:
            cout<<"displaying event details"<<endl;
            display(name,date,time,veneue);
            break;
        case 4:
            cout<<"deleting the event"<<endl;
            deleteevent(name,date,time,veneue);
            break;
            
        case 3:
            cout<<"selection the option you want to modify"<<endl;
            modifyevent(name,date,time,veneue);
            break;

        }
    }
    while (choice!=-1);
    return 0;
}
    
    
  
    
