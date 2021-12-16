#include<iostream>
using namespace std;
class Point{
private:
	int x,y;
public:
	Point(int _x,int _y):x(_x),y(_y){}
	Point& operator++(){
		x++;y++;
		return *this;
	}
	Point operator++(int){
		Point original=*this;
		x++;y++;
		return original;
	}
	Point& operator--(){
		x--;y--;
		return *this;
	}
	Point operator--(int){
		Point original=*this;
		x--;y--;
		return original;
	}
	friend ostream& operator<<(ostream& out,Point p);
};
ostream& operator<<(ostream& out,Point p){
	out<<p.x<<' '<<p.y;
	return out;
}
int main(){
	Point q(1,2);
	cout<<"q:\n"<<q<<endl;

	cout<<"++q:\n"<<++q<<endl;
	cout<<q<<endl;

	cout<<"q++:\n"<<q++<<endl;
	cout<<q<<endl;
	return 0;
}