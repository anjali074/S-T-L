#include<iostream>
#include<stack>
using namespace std;
int main(){
  stack<string> s;
  s.push("anjali");
  s.push("kumari");
  s.push("intelligent");
  cout<<"Top Element->"<<s.top()<<endl;
  s.pop();
  cout<<"size of stack"<<s.size()<<endl;
  cout<<"Empty of not"<<s.empty()<<endl;
}