#include<iostream>
using namespace std;

int main()
{
    /* Prasuk write your code from here */
    int rows;
    cout<<"\n---------------------------------------Number Triangle Pattern---------------------------------------"<<endl<<endl;
    cout<<"enter the number of rows : ";
    cin>>rows;
    cout<<endl;
    int space= rows-1;
    for(int i=1; i<=rows; i++){  // for rows
        for(int j=1; j<=space; j++){ // for columns
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        space -= 1;
        cout<<endl;
    }

    return 0;
}

