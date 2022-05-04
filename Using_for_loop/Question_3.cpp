#include<iostream>
using namespace std;

int main()
{
    /* Prasuk write your code from here */
    int rows;
    cout<<"\n---------------------------------------Half Pyramid Star Pattern---------------------------------------"<<endl<<endl;
    cout<<"enter the number of rows : ";
    cin>>rows;
    cout<<endl;

    for(int i=0; i<rows; i++){  // for rows
        for(int j=0; j<=i; j++){ // for columns
            cout<<" *";
        }
        cout<<endl;
    }

    return 0;
}