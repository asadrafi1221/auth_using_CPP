#include<iostream>
using namespace std;

int main(){
    

    ///////loops have three types:
    ////1 : for loop  2 :while    3:do while


////// i=5 < 5  not possible so it will break; 
/// a=3 i=1 a=4 
int a=2;
int s=7;


////////////////////////////------------for loop--------------//////////////////////////
    // for(int i=0;i<5;i++){
    //   cout<<--------;
    // }

    ////////////////////////////////////////////////////////////////////////////////////

    ////----------------------------------------while-loop--------------------------------------///
    
    // int i=0;
    // int mun=4;
    // while(i<7){
        
    //     if(mun==10){
    //         cout<<endl;
    //         cout<<"muneeb is 10 year old now give him a break "<<endl;
    //         break;
    //     }
    //     cout<<mun<<" ";
    //     mun++;
    //     i++;
    // }

    ////-------------------------------------------------------------------------------------------//

    //////////////////////-------------------do while------------------------------------------////

int i=0;
int mun=1;
    do{
 if(mun==7){
    cout<<"break"<<endl;
    break;

 }
 cout<<mun<<" ";
 mun++;
 i++;
    }
    while(i<9);

    return 1;

}