/*1. WAP to get and display 5 Students information using
encapsulation by including below mentioned
attributes:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_email
- stu_city
- stu_college
*/

#include<iostream>
#include<string.h>
using namespace std;

class Student{

	private:
		
	int	stu_id;
	char stu_name[100];
	int stu_age;
	char stu_course[100];
	char stu_email[100];
	char stu_city[100];
	char stu_college[100];
	

		public:
			
		void setData(){
			
			cout<<"Enter ID :- "<<endl;
			cin>>stu_id;
			cout<<"Enter name :- "<<endl;
			cin>>stu_name;
			cout<<"Enter age :- "<<endl;
			cin>>stu_age;
			cout<<"Enter course :- "<<endl;
			cin>>stu_course;
			cout<<"Enter EMAIL :- "<<endl;
			cin>>stu_email;
			cout<<"Enter CITY :- "<<endl;
			cin>>stu_city;
			cout<<"Enter COLLEGE :- "<<endl;
			cin>>stu_college;
			
			
		}
		
		void getData(){
			cout<<"ID is = "<<stu_id<<endl
				<<"name is "<<stu_name<<endl
				<<"age is "<<stu_age<<endl
				<<"course is "<<stu_course<<endl
				<<"email is "<<stu_email<<endl
				<<"city is "<<stu_city<<endl
				<<"college is "<<stu_college<<endl;
			
			
		}

};


int main(){
	
	Student d,d1,d2,d3,d4;
	
	d.setData();
	d.getData();
	d1.setData();
	d1.getData();
	d2.setData();
	d2.getData();
	d3.setData();
	d3.getData();
	d4.setData();
	d4.getData();
	
	return 0;
	
}

