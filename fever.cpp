#include<iostream>
using namespace std;

int main(){
    int temp;
    cout << "Enter your body's temperature; ";
    cin >> temp;

    if ( temp >= 100 ){
        cout << "You have a fever :(";
    } else {
        cout << "You dont have a fever :)";
    }

}