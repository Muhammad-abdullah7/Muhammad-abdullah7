#include <iostream>
using namespace std;
char myFunc(char alpha);
int main(){
   char chara;
   cout<<"Enter the character:";
   cin>>chara;
   char res=myFunc(chara);
   if (chara>='A'&&chara<='Z'){
   cout<<"You have entered capital "<<res<<endl;
   }
   
    if (chara>='a'&&chara<='z'){
   cout<<"You have entered small "<<res<<endl;
   } 
   if (!(chara >= 'A' && chara <= 'Z') && !(chara >= 'a' && chara <= 'z')){
       cout<<"You have entered an invalid character. Please enter a valid character."<<endl;
   }
    
} char myFunc(char alpha){
    char ch=alpha;
    return alpha;
}
