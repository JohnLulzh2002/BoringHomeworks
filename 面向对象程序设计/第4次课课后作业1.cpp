#include<iostream>
using namespace std;
class Time{
	int hour,min,sec;
	friend ostream& operator<<(ostream& os,const Time& c);
	void checkTime(){
		min+=sec/60;
		hour+=min/60;
		sec%=60;
		min%=60;
		hour%=24;
	}
public:
	Time(int _hour,int _min,int _sec)
		:hour(_hour),min(_min),sec(_sec){
		checkTime();
	}
	Time(){
		cout<<"Set time(XX XX XX)\t";\
		cin>>hour>>min>>sec;
		checkTime();
	}
	void showTime(){
		cout<<"press ctrl+C to stop"<<endl;
		while(1){
			cout<<(*this)<<endl;
			sec++;
			checkTime();
			_sleep(1000);
		}
	}
};
ostream& operator<<(ostream& os,const Time& t){
	os<<t.hour<<":"<<t.min<<":"<<t.sec;
	return os;
}
int main(){
	Time a;
	cout<<a<<endl;
	int q,w,e;
	cout<<"Set time again (XX XX XX)\t";
	cin>>q>>w>>e;
	Time b(q,w,e);
	cout<<b<<endl;
	cout<<"Let the clock run?(Y/N)\t";
	char o;
	cin>>o;
	if(o=='Y'||o=='y')
		b.showTime();
	return 0;
}