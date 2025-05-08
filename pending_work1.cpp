#include<iostream>
using namespace std;
#include<stack>
int main(){
    //reversing an string
    string bird = "Eagle";
    stack<char> r; 
    for(int i=0;i<bird.length();i++){
        r.push(bird[i]);
    }
    string ans;
    int i=0;
    while(r.empty()==0){
        char a=r.top();
        ans.push_back(a);
        r.pop();
    }
 cout<<"The reversed word is "<<ans;
    
}