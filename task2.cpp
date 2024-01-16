/*

2. WAP to get and display 5 Customers
information using encapsulation by including
below mentioned attributes:
- cust_id
- cust_name
- cust_age
- cust_telecome_brand_name (like Jio, Airtel, Vi, etc.)
- cust_mobile_number
- cust_city
- cust_simcard_validity (in years)

*/

#include<iostream>
#include<string.h>
using namespace std;

class Customers{

	private:
		
	int	cust_id;
	char cust_name[100];
	int cust_age;
	char cust_telecome_brand_name[100];
	int cust_mobile_number;
	char cust_city[100];
	int cust_simcard_validity;
	
	 public:
		
		void setData(){
			
			cout<<"Enter ID :- "<<endl;
			cin>>cust_id;
			cout<<"Enter name :- "<<endl;
			cin>>cust_name;
			cout<<"Enter age :- "<<endl;
			cin>>cust_age;
			cout<<"Enter telecome_brand_name :- "<<endl;
			cin>>cust_telecome_brand_name;
			cout<<"Enter mobile_number :- "<<endl;
			cin>>cust_mobile_number;
			cout<<"Enter CITY :- "<<endl;
			cin>>cust_city;
			cout<<"Enter simcard_validity :- "<<endl;
			cin>>cust_simcard_validity;
			
			
		}
		
		void getData(){
			cout<<"ID is = "<<cust_id<<endl
				<<"name is "<<cust_name<<endl
				<<"age is "<<cust_age<<endl
				<<"telecome_brand_name "<<cust_telecome_brand_name<<endl
				<<"mobile_number is  "<<cust_mobile_number<<endl
				<<"city is "<<cust_city<<endl
				<<"simcard_validity is "<<cust_simcard_validity<<endl;
			
			
		}

};


int main(){
	
	Customers d,d1,d2,d3,d4;
	
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

