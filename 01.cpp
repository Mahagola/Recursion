// printing name n times
#include<iostream>
using namespace std;
void func(int i, int n){
    if(i>n){
        return;
    }
    cout<<"Suryansh"<<endl;
    func(i+1,n);
}
int main(){
   int n;
   cin>>n;
   func(1,n);
   return 0;
}