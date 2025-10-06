#include <iostream>

using namespace std;

void put(double *p_array, int inx, double value, int &n, int size){
    if(inx > n || inx > size){
        cout<<"Out of bound!"<<endl;
        return;
    }
    p_array[inx] = value;
    n = (inx < n)? n+1: n;
}
void insertElement( double *p_array, int inx, double value, int &n, int size){
    if(n>=size){
        cout<<"Array is full"<<endl;
        return;
    }
    if(inx <0 || inx>n){ 
        cout<<"Invalid index"<<endl;
        return;
    }
    for( int i=n; i>inx; i--){
        p_array[i]=p_array[i-1];
    }
    p_array[inx]=value;
    n++;
}
void deleteElement( double *p_array, int inx, int &n){
    if( inx<0 ||  inx>=n){
        cout<<"Invalid index"<<endl;
    }
    for(int i=inx; i<n-1; i++){
        p_array[i]=p_array[i+1];
    }
    n--;
}
int main(){

    double array[100] = {5,4,3,2,1};
    int n = 5;
    double *p_array = array;
    cout<<"Original Array: ";
    for(int i=0; i<n; i++){
        cout<<p_array[i]<<" ";
    }
    cout<<endl;
    insertElement(p_array, 2,10 ,n, 100);
    cout<<"After insert 10 at index 2: ";
    for( int i=0;i<n; i++){
        cout<<p_array[i]<<" ";
    }
    cout<<endl;
    deleteElement(p_array, 1, n);
    cout<<"After delete at index 1: ";
    for(int i=0;i<n; i++){
        cout<<p_array[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}
