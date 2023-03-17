#include<iostream>
#include<queue>
using namespace std;
int main(){
  queue<string> q;
  q.push("anjali");
  q.push("yadav");
  q.push("tillent");
  cout<<"size before pop"<<q.size()<<endl;
  q.pop();
  cout<<"first element "<<q.front()<<endl;
  cout<<"first element "<<q.front()<<endl;
  cout<<"size before pop"<<q.size()<<endl;
}


