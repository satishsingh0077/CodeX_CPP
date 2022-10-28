#include<iostream>

using namespace std;
void disp(int (&B)[5]);
void disp1(int[], int);
void disp2(int *arrptr);

int main(){
    int arr[5]= {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    disp(arr);
    disp1(arr,size);
    disp2(arr);
}

// passing as a reference variable
void disp(int (&B)[5]){
    for(int i:B){cout<<i<<endl;}

}
// Here the array decays as a pointer so the size informaion is lost.
void disp1(int a[],int n){
    for(int i = 0; i<n;i++){cout<<a[i]<<endl;}
}
// Passing by reference
void disp2(int *arrptr){
    for(int i=0; i<5;i++){
        cout<<*(arrptr+i)<<endl;
    }
}