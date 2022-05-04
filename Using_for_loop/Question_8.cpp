#include<iostream>
using namespace std;

int main()
{
    /* Prasuk write your code from here */
    int rows;
    cout<<"\n---------------------------------------Floyd's Pyramid---------------------------------------"<<endl<<endl;
    cout<<"enter the number of rows : ";
    cin>>rows;
    cout<<endl;
    int count = 1;
    for(int i=0; i<rows; i++){  // for rows
        for(int j=0; j<=i; j++){ // for columns
            cout<<count<<" ";
            count += 1;
        }
        cout<<endl;
    }

    return 0;
}