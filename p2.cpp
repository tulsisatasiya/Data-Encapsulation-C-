#include <iostream>
#include<string.h>

using namespace std;

class Customer{
	
	public:
		int cust_id;
		char cust_name[50];
        int cust_age;
        char cust_tel_name[50];
        long cust_mobile_number;
        char cust_city[20];
        int cust_simcard_validity;
        
        void setter(int id, char name[],int age,char telname[],long mobileno,char city[],int validity){
        	cust_id=id;
        	strcpy(cust_name,name);
        	cust_age=age;
        	strcpy(cust_tel_name,telname);
        	cust_mobile_number=mobileno;
        	strcpy(cust_city,city);
        	cust_simcard_validity=validity;
        	
		}
		
		void getter(){
			cout<<cust_id<<endl;
			cout<<cust_name<<endl;
			cout<<cust_age<<endl;
			cout<<cust_tel_name<<endl;
			cout<<cust_mobile_number<<endl;
			cout<<cust_city<<endl;
			cout<<cust_simcard_validity<<endl<<endl;
			
		}
		

};

int main(){
	
	Customer c;
	char text1[]="NITYA";
	char text2[]="joi";
	char text3[]="surat";
	c.setter(101,text1,28,text2,7867564768,text3,2);
	c.getter();
	
	Customer c1;
	char text11[]="jiya";
	char text12[]="vi";
	char text13[]="surat";
	c1.setter(102,text11,23,text12,9867564768,text13,3);
	c1.getter();
	
	Customer c2;
	char text21[]="riya";
	char text22[]="joi";
	char text23[]="amreli";
	c2.setter(103,text21,30,text22,9067564768,text23,4);
	c2.getter();
	
	Customer c3;
	char text31[]="aditi";
	char text32[]="airtel";
	char text33[]="vadodara";
	c3.setter(104,text31,28,text32,7867564768,text33,2);
	c3.getter();
	
	Customer c4;
	char text41[]="Arti";
	char text42[]="vi";
	char text43[]="rajkot";
	c4.setter(104,text41,25,text42,7867564768,text43,2);
	c4.getter();
	
	
    return 0;
}

