#include<iostream>
#include<conio.h>
using namespace std;
int main() {
    char pin[100];
    int k=0;
    cout<<"Enter  password : ";
    while(pin[k-1]!='\r') {
        pin[k]=getch();
        if(pin[k-1]!='\r') {
            cout<<"*";
        }
        k++;
    }
    pin[k-1]='\0';
    cout<<"\nYou entered : "<<pin<<endl;
}