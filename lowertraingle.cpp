#include<iostream>
using namespace std;
int main(){
   int arr[3][3];
   cout<<"Enter the elements in Array";
   for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
        cin>>arr[i][j];
     }
   }
   cout<<"\n Array is=\n";
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<" "<<arr[i][j];
    }
    cout<<"\n";
   }

   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
         if(i<j){
            arr[i][j]=0;
         }
    }
   }
        cout<<"\nLower traingular matrix is=\n";
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<" "<<arr[i][j];
            }
            cout<<endl;
        }

    return 0;
}