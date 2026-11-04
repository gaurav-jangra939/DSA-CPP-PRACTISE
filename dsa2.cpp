#include<iostream>    //star triangle
using namespace std;
int main(){
int n=5;

for(int i=1; i<=n; i++){
    for(int j = 1; j<=i; j++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}
return 0;
}
   
//triangle pattern for 1,22,333
// for(int i = 1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//         cout<<i;
//     }
//     cout<<endl;
// }
// return 0;   
// }

//triangle pattern for chracters A,BB,CCC,DDDD


//      for(int i=1; i<=n; i++){
      
        
//           for(int j=1; j<=i; j++){
//             if(i == 1){
//                 cout<<'A';
//             }
//             else{

//                 cout<<char('A'+i-1)<<" ";
//             } 
//           }
// cout<<endl;
//      }   
//      return 0;

// }

//FOR PRINTING THE CHARACTERS 1,12,123,1234
// for( int i = 1; i<=n; i++){
//     for(int j = 1; j<=i; j++){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }
// return 0;
// }

//reverse triangle 1'21'321.....
//backward loop
// for(int i=0; i<n; i++){
// for(int j=i+1; j>0; j--){
//     cout<<j;                                                                                         
// }
// cout<<endl;
// }
// return 0;
// }

//floyds triangle pattern1,23,456,789
// int num =1;
// for(int i=0; i<n; i++){
//     for(int j=i+1; j>0; j++)
//     cout<<num<<" ";
//     num++;
// }
// cout<<endl;
// }

// char ch ='A';
// //for(int i=0; i<n; i++){
//     for(int j=i+1; j>0; j--){

    
//     cout<<ch<<" ";
//     ch=ch+1;
// }
// cout<<endl;
// }
// }
