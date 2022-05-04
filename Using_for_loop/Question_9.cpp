#include<iostream>
using namespace std;

int main()
{
    /* Prasuk write your code from here */
    int rows;
    cout<<"\n---------------------------------------Zero Ones Half Pyramid---------------------------------------"<<endl<<endl;
    cout<<"enter the number of rows : ";
    cin>>rows;
    cout<<endl;
    for(int i=1; i<=rows; i++){  // for rows
        for(int j=1; j<=i; j++){ // for columns
            if(i%2==1){
                int arr[2]= {0,1};
                cout<<arr[j%2]<<" ";
            }
            else{
                int arr[2]= {1,0};
                cout<<arr[j%2]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}

