#include<iostream>
#include<cmath>
using namespace std;
double findDistance(double u,double a,double t){
	double s;
	return s=(u*t)+(0.5)*(a*pow(t,2));
}
	int main(){
		double u,a,t;
		cout <<"u = ";
		cin >> u;
		cout <<"a = ";
		cin >> a;
		cout <<"t = ";
		cin >> t;
		cout <<findDistance(u,a,t);
	}
