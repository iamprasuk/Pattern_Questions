#include<iostream>
using namespace std;

int main()
{
    /* Prasuk write your code from here */
    int rows;
    cout<<"\n---------------------------------------Flipped Half pyramid Star Pattern---------------------------------------"<<endl<<endl;
    cout<<"enter the number of rows : ";
    cin>>rows;
    cout<<endl;

    for(int i=0; i<rows; i++){  // for rows
        for(int j=0; j<=rows; j++){ // for columns
            if (j<=rows-(i+1)){ 
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    return 0;
}

