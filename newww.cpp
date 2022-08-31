#include<iostream>
using namespace std;
typedef struct array{
   
    int size ;
    int length;
    int *p;
}arr;
void create(arr *A){
    cout<<"enter size of the array"<<endl;
    cin>>A->size;
    A->p=new int [A->size];
    
    cout<<"enter length of the array"<<endl;
    cin>>A->length;
    for(int i=0;i<A->length;i++){
        cin>>A->p[i];
    }}
    void display(arr *A){
        for(int i=0;i<A->length;i++){
            cout<<A->p[i]<<endl;
        }
    }
void insert_sort(arr *A,int key){
    int i=0;
    
    while(key<A->p[6-i-1]){
        A->p[6-i]=A->p[6-1-i];
        i++;
    }
    A->p[6-i]=key;
}
            
int main(){
    arr A;
    A.size=10;
    A.length=6;
    A.p=new int [10];
//    cout<<"enter length of the array"<<endl;
//    cin>>A.length;
        cout<<"enter elements of the array"<<endl;
    for(int i=0;i<A.length;i++){
        cin>>A.p[i];}
//    create(&A);
    insert_sort(&(A), 5);
    for(int i=0;i<7;i++){
        cout<<A.p[i]<<endl;
    }
//    display(&A);
    
    return 0;
}
