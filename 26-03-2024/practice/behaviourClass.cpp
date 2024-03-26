#include<cstdio>

class Person{
	private:
		char name[20];
		int age;
		char occupation[10];
	public:
		void setValues(){
		
			printf("Enter the name: ");
			scanf("%s",&name);
			printf("\nEnter the age: ");
			scanf("%d",&age);
			printf("\nEnter occupation: ");
			scanf("%s",&occupation);
		}	
}

class teacher : private Person{
	private:
		float salary;
		char section;
		char subject[10];
	
	public:
		void setValues(){
			
		 printf("Enter the salary: ");
		 scanf("%f",&this.salary);
		 printf("\nEnter the section a/b/c: ");
		 scanf("%c",&this.section);
		 printf("\nEnter the subject: ");
		 scanf("%s",&this.subject);

		}
}

class student : private Person{
	private:
		char batch[10];
		char section;
		long rollNo;
	public:
		void setValues(){
			p

		}

}

int main(void){
Person p;

}
