#include<iostream>
using namespace std;

int main()
{
    /* Prasuk write your code from here */
    int rows;
    cout<<"\n---------------------------------------Butterfly Pattern Using Star---------------------------------------"<<endl<<endl;
    cout<<"enter the number of rows : ";
    cin>>rows;
    cout<<endl;
    
    for(int i=0; i<rows; i++){  // for rows
        for(int j=0; j<=i; j++){ // for columns
            cout<<"* ";
        }
        int space= (rows*2) - ((i+1)*2);
        for(int i=0; i<space; i++){
            cout<<"  ";
        }
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    int space=0;
    for(int i=rows; i>0; i--){  // for rows
        for(int j=i; j>0; j--){ // for columns
            cout<<"* ";
        }
        for(int i=space; i>0; i--){
            cout<<"  ";
        }
        for(int j=i; j>0; j--){
            cout<<"* ";
        }
        space += 2;
        cout<<endl;
    }

    return 0;
}