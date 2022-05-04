#include<iostream>
using namespace std;

int main()
{
    /* Prasuk write your code from here */
    int rows,columns;
    cout<<"\n---------------------------------------Rectangle Star Pattern---------------------------------------"<<endl<<endl;
    cout<<"enter the number of rows : ";
    cin>>rows;
    cout<<"\nenter the number of columns : ";
    cin>>columns;
    cout<<endl;

    for(int i=0; i<rows; i++){  // for rows
        for(int j=0; j<columns; j++){ //for columns
            cout<<" *";
        }
        cout<<endl;
    }

    return 0;
}