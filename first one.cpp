/*first checked out how to make a simple calculator. this is my code so far but i want it to let me choose which opration to use
#include <iostream>
using namespace std;
int main()
{
    int a,b,sub,add, mul;
    float div;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    add= a+b;
    sub=a-b;
    mul=a*b;
    div= (1.0*a /b);
    
    cout<<"addition"<< add<<endl;
    cout<<"subraction"<<sub<<endl;
    cout<<"multiplication"<<mul<<endl;
    cout<<"divison"<<div<<endl;
    

    return 0;
}*/
/*  soo this is one with offers to what operations you want but it wint terminate so there's a probke there. but here goes the code for now.
#include <iostream>
using namespace std;
int main(){
    
int a,b;
char operations;
char iscontinue;
do{
    cout<<"enter any operation from the give (+,-,*,/,%)"<<endl;
    cin>>operations;
    
    cout<<"enter two numbers separated by a space"<<endl;
    cin>>a>>b;
    
    switch(operations){
        case '+':
       cout<<"the sum of these two numbers is: "<<a+b<<endl;
       break;
       
       case '-':
       cout<<"the diffrence between these two numbers is: "<<a-b<<endl;
       break;
       
       case '*':
       cout<<"the product of these two numbers is: "<<a*b<<endl;
       break;
       
       case '/':
       if(b!=0){
           cout<<"the quatient of these two numbers is: "<<a/b<<endl;
       }else {
           cout<<"cant devide by zero babes"<<endl;
       }
       break;
       
       case '%':
       if (b!=0){
           cout <<"the remainder of a devided by b is: "<<a%b<<endl;
       }else{
           cout<<"no dividing by zero soo"<<endl;
       }
          break; 
       
       default:
       cout<<"invalid operator, access denied"<<endl;
       }
      
      cout<<"enter 0 to stop and 1 to go on"<<endl;
      cin>>iscontinue;
      
      }while(iscontinue!= 0);
       cout <<"the program has terminated"<<endl;
       
    return 0;
}*/
