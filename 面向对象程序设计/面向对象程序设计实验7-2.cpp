#include<iostream>
using namespace std;
class vehicle{
public:
	void run()
	{cout<<"vehicle runing"<<endl;}
	void stop()
	{cout<<"vehicle stopped"<<endl;}
};
class bicycle:virtual public vehicle{
public:
	void run()
	{cout<<"bicycle runing"<<endl;}
};
class motorcar:virtual public vehicle{
public:
	void run()
	{cout<<"motorcar runing"<<endl;}
};
class motorcycle:public bicycle,public motorcar{
public:
	void run()
	{cout<<"motorcycle runing"<<endl;}
};
int main(){
	vehicle q;
	q.run();
	q.stop();
	cout<<endl;

	bicycle w;
	w.run();
	w.stop();
	cout<<endl;

	motorcar e;
	e.run();
	e.stop();
	cout<<endl;

	motorcycle r;
	r.run();
	r.vehicle::run();
	r.bicycle::run();
	r.motorcar::run();
	r.vehicle::stop();
	r.bicycle::stop();
	r.motorcar::stop();
	cout<<endl;

	vehicle *p=&w;
	p->run();
	p->stop();
	p=&r;
	p->run();
	p->stop();
	return 0;
}