#include<iostream>
using namespace std;
//for printing the sqare of 1234
 int n = 4;
int main(){
     for(int i=0; i<=n-1; i++){
          for(int j=0; j<=n-1; j++){
               cout<<j<<" ";
          }
cout<<endl;
     }
     return 0;
}
//for printing the *

//for the character sqaure ABCD
int n = 4;
int main(){
     for(int i=0; i<=n-1; i++){
          char ch = 'A'; //SKI WAJAH SE HAR LINE A SE SHURU HOGI
          for(int j=0; j<=n-1; j++){
               cout<<ch<<" ";
               ch = ch + 1;
          }
cout<<endl;
     }
     return 0;
};

int n = 4;char ch = 'A';

int main(){
     for(int i=0; i<=n-1; i++){
          for(int j=0; j<=n-1; j++){
               cout<<ch<<" ";
               ch = ch + 1;
          }
cout<<endl;
     }
     return 0;
}