#include<iostream>
using namespace std;
class Time{
public:
	int hour,min,sec;
	void show(){
		cout<<hour<<':'<<min<<':'<<sec<<endl;
	}
};
int main(){
	Time a;
	a.hour=14;
	a.min=15;
	a.sec=16;
	a.show();
	return 0;
}