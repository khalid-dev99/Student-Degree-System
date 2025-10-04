#include<iostream>
using namespace std;
int main(){
int theoretical, practical;
string cheat;
cout<<"Enter your details:";
cin >> theoretical >> practical >> cheat;
bool cheating=( cheat == "yes" || cheat == "YES" || cheat == "Yes");
cout<<"Your result is:";
if(((theoretical >=60 && practical >= 55) || practical >= 90) &&  !cheating){
cout<<"Passed"<<endl;
}
else{
cout<<"Failed"<<endl;
}
return 0;
}
