#include<iostream>
#include<string>
using namespace std;
int main(){
	char q;
	cin>>q;
		if(q>=65&&q<=82){
			cout<<char(q+8);
		}else if(q>82&&q<=90){
			cout<<char(q-18);
		}else if(q>=97&&q<=114){
			cout<<char(q+8);
		}else if(q>114&&q<=121){
			cout<<char(q-18);
		}else if(q=='!'){
			cout<<"~";
		}else if(q=='.'){
			cout<<"。";
		}else if(q==','){
			cout<<" ";
		}
	return 0;
}
