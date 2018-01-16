#include<iostream>
#include<cmath>
using namespace std;
double findDivisor(int x){
	int i=2;
	while(i>1){
		if(x%i==0){
			return i;
		}
		i++;
	}
}
	int main(){
		cout<<findDivisor(10)<<endl;
		cout<<findDivisor(97)<<endl;
		cout<<findDivisor(221);
	}
