#include<iostream>
using namespace std;
string command="";
string BOT_TOKEN = "";
int main(void){
cout<<"test\n";
command = "curl https://api.telegram.org/bot" + BOT_TOKEN +"/getMe";
system(command.c_str());
return 0;
}
