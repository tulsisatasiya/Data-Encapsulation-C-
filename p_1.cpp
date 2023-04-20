#include<iostream>
#include<string.h>

using namespace std;

class student{
	
	public:
		int std_id;
		char name[50];
		int std_age;
		char std_course[50];
		char std_email[50];
		char std_city[50];
		char std_college[50];
		
		void setter(int id,char n[],int a,char c[],char e[],char ci[],char co[]){
			std_id=id;
			strcpy(name,n);
			std_age=a;
			strcpy(std_course,c);
		    strcpy(std_email,e);
		    strcpy(std_city,ci);
		    strcpy(std_college,co);
			
			
		}
		
		void getter(){
			cout<<std_id<<endl;
			cout<<name<<endl;
			cout<<std_age<<endl;
			cout<<std_course<<endl;
			cout<<std_email<<endl;
			cout<<std_city<<endl;
			cout<<std_college<<endl<<endl;
		}
};

int main(){
	
	student s;
	char text[]="tulsi";
	char text1[]="full-stack";
	char text2[]="tulsi@gmail.com";
	char text3[]="surat";
	char text4[]="sdj";
	s.setter(101,text,50000,text1,text2,text3,text4);
	s.getter();
	
	
	student s2;
	char t1[]="jiya";
	char t11[]="web design";
	char t12[]="jiya@gmail.com";
	char t13[]="surat";
	char t14[]="r v patel";
	s2.setter(102,t1,40000,t11,t12,t13,t14);
	s2.getter();
	
	student s3;
	char text01[]="jiya";
	char text11[]="web design";
	char text12[]="jiya@gmail.com";
	char text13[]="surat";
	char text14[]="r v patel";
	s3.setter(103,text01,40000,text11,text12,text13,text14);
	s3.getter();
	
	student s4;
	char te01[]="niya";
	char te11[]="web devloping";
	char te12[]="niya@gmail.com";
	char te13[]="surat";
	char te14[]="wadiya womens";
	s4.setter(104,te01,45000,te11,te12,te13,te14);
	s4.getter();
	
	student s5;
	char tex01[]="tiya";
	char tex11[]="web design";
	char tex12[]="tiya@gmail.com";
	char tex13[]="surat";
	char tex14[]="r v patel";
	s5.setter(105,tex01,42000,tex11,tex12,tex13,tex14);
	s5.getter();
	
	return 0;
}
