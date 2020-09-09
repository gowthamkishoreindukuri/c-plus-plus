#pragma once
class student
{
public:
    string name,cls,sec;
    int id;
    void ipt()
    {
        cout<<"Roll.no : ";
        cin>>id;
        cout<<"Name : ";
        cin>>name;
        cout<<"class : ";
        cin>>cls;
        cout<<"section : ";
        cin>>sec;

    }
    void pnt()
    {
        cout<<id<<"\t\t"<<name<<"\t\t"<<cls<<"\t\t"<<sec<<endl;
    }
};
