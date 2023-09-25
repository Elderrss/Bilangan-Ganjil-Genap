#include <iostream>
using namespace std;

int main ( ) {
     int bil;
     cout<<"Masukan Bilangan :";
     cin>>bil;
     cout<<endl;
     
     if (bil%2==0){
     	cout<<bil<<"Adalah Bilangan Genap"<<endl;
     }else {
     	cout<<bil<<"Adalah Bilangan Ganjil"<<endl;
     }
}
