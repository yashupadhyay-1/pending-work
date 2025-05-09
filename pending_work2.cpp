#include<iostream>
using namespace std;
#include<stack>
void reverseString(string &s){
    stack<char> ch;
    for(int i=0;i<s.length();i++){
        ch.push(s[i]);
    }
    string ans;
    while(ch.empty()==0){
        char a = ch.top();
        ans.push_back(a);
        ch.pop();
    }
    s = ans;
}

void solve(Stack<int> &s,int count,int size){
    if(count==size/2){
        s.pop();
        return;
    }
    int num = s.top()
    s.pop();
    solve(s,count++,size);
    s.push(num);
}
void deleteMiddle(Stack<int>&s,int size){
    int count = 0;
    solve(s,count,size);
}
int main(){
    string abcd = "Rabbit";
    reverseString(abcd);
    cout<<abcd;
}