#include<iostream>
using namespace std;

int main()
{
    /* Prasuk write your code from here */
    int rows;
    cout<<"\n---------------------------------------Inverted half Pyramid Using Numbers---------------------------------------"<<endl<<endl;
    cout<<"enter the number of rows : ";
    cin>>rows;
    cout<<endl;

    for(int i=rows; i>0; i--){  // for rows
        int count = 1;
        for(int j=i; j>0; j--){ // for columns
            cout<<count<<" ";
            count += 1;
        }
        cout<<endl;
    }

    return 0;
}

