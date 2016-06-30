/*================================================================================================*/
/*                          GPA Calculator Console Application                                    */
/*================================================================================================*/

#include<iostream>
using namespace std;

int main()
{
	int grade;
	int courses=0;
	int credit, total_credit=0;
	float x=0,a=0, gpa;

	cout<<"Welcome to GPA Calculator\n"<<endl;

	cout<<"Enter number of courses: ";
	cin>>courses;


	for(int i=0;i<courses;i++)
	{
		/*=========Grade Menu=============*/
		cout<<"Select your grade: "<<endl;
		cout<<"1. A\n";
		cout<<"2. B+\n";
		cout<<"3. B\n";
		cout<<"4. C+\n";
		cout<<"5. C\n";
		cout<<"6. D\n";
		cout<<"7. F\n";

		cin>>grade;

		/*======Credit Hours Input======*/
		cout<<"Enter credit hours: ";
		cin>>credit;

		/*total credit hours counter*/
		total_credit += credit; 

		switch (grade) 
		{
		case 1:
			x = 4*credit;
		break;
		case 2:
			x = 3.5*credit;
		break;
		case 3:
			x = 3*credit;
		break;
		case 4:
			x = 2.5*credit;
		break;
		case 5:
			x = 2*credit;
		break;
		case 6:
			x = 1.5*credit;
		break;
		case 7:
			x = 0*credit;
		break;
		
		}
		a += x; // a = Summation(grade x credit hours)
		cout << string(30, '\n');
	}

	gpa = a/total_credit; // gpa = summation(grade x credit hours) / Total credit hours

	cout<<"Your gpa = "<<gpa<<endl;

	cin.get();

	return 0;



}