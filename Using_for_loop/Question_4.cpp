#include<iostream>
using namespace std;

int main()
{
    /* Prasuk write your code from here */
    int rows;
    cout<<"\n---------------------------------------Inverted Half Pyramid Star Pattern---------------------------------------"<<endl<<endl;
    cout<<"enter the number of rows : ";
    cin>>rows;
    cout<<endl;

    for(int i=rows; i>0; i--){  // for rows
        for(int j=i; j>0; j--){ // for columns
            cout<<" *";
        }
        cout<<endl;
    }

    return 0;
}