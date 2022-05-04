#include<iostream>
using namespace std;

int main()
{
    /* Prasuk write your code from here */
    int columns;
    cout<<"\n---------------------------------------ZigZag Star Pattern---------------------------------------"<<endl<<endl;
    cout<<"enter the number of columns : ";
    cin>>columns;
    cout<<endl;

    for(int i=1; i<=3; i++){  // for rows
        for(int j=1; j<=columns; j++){ // for columns
            if(((i+j)%4==0) || (i==2 && j%4==0)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}