#include<iostream>
using namespace std;

int main()
{
    /* Prasuk write your code from here */
    int rows;
    cout<<"\n---------------------------------------Flipped Half pyramid Star Pattern 2---------------------------------------"<<endl<<endl;
    cout<<"enter the number of rows : ";
    cin>>rows;
    cout<<endl;
    int space= rows-1;  // use space variable 

    for(int i=0; i<rows; i++){  // for rows
        for(int j=0; j<=rows; j++){ // for columns
            if (j<=space){  
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        space = space-1; 
        cout<<endl;
    }

    return 0;
}

