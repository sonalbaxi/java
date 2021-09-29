#include<iostream>
using namespace std;

class Student{
	private:int eno;
	public: void getdata(){
		
		cout<<"enter no:";
		cin>>eno;
		cout<<eno;
	}
};

class emp:public Student{
	public :void get(){
		Student::getdata();
	}
};
int main(){
	emp s1;
	s1.get();
	return 0;
}
