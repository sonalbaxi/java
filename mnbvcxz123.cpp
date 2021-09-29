#include<iostream>
using namespace std;
class Person{
	private:
		int age;
		char name[20];
	public:
		void inputName(){
			cout<<"\nEnter Person Name: ";
			cin>>name;
		}
		void inputAge(){
			cout<<"\nEnter Age of Person: ";
			cin>>age;
		}
		void display(){
			cout<<"\nName: "<<name<<"\nAge: "<<age;
		}
};


class Student:public Person
{
	private:
		int id;
		int subject_number;
		string subject_name[15];
		int mark[15];
		float percentage;
	public:
	Student(){
		id=subject_number=percentage=0;		
	}	
	void inputSubjectName(){
		cout<<"\nEnter Subject Name: ";
		for(int i=0;i<subject_number;i++)
		{
			cin>>subject_name[i];
		}
	}
	float percent(){
		for(int i=0;i<subject_number;i++){
			percentage+=mark[i];	
		}
		percentage=(float)percentage/subject_number;
		return percentage;
	}
	void inputName(){
		cout<<"\nfor Student: ";
		Person::inputName();
	}
	void inputAge(){
		cout<<"\nfor Student: ";
		Person::inputAge();
	}
	void inputId(){
		cout<<"\nEnter ID of Student: ";
		cin>>id;
	}
	void inputSubject(){
		cout<<"\nHow Many Subject//Subjects You want to add: ";
		cin>>subject_number;
	}
	void inputMark(){
		cout<<"\nEnter Your Subject Marks: \n";
		for(int i=0;i<subject_number;i++){
			cin>>mark[i];
		}
	}
	void display(){
		Person::display();
		cout<<"\nStudent ID: "<<id;
		cout<<"\nStudent Marks: ";
		for(int i=0;i<subject_number;i++){
			cout<<" "<<mark[i];
		}
		cout<<"\nPercentage of Student: "<<percent();
	}
};
int main()
{
}


