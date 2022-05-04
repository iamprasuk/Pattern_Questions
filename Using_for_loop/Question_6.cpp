#include<iostream>
using namespace std;

int main()
{
    /* Prasuk write your code from here */
    int rows;
    cout<<"\n---------------------------------------Half Pyramid Using Numbers---------------------------------------"<<endl<<endl;
    cout<<"enter the number of rows : ";
    cin>>rows;
    cout<<endl;

    for(int i=0; i<rows; i++){  // for rows
        for(int j=0; j<=i; j++){ // for columns
            cout<<" "<<i+1;
        }
        cout<<endl;
    }

    return 0;
}