                             // STUDENT REPORT MANAGEMENT SYSTEM
#include<iostream>
using namespace std;
string name[20],roll_no[20],avg[20],arr[20];
float eng[20],math[20],sci[20],cs[20],lang[20],arr_avg[20];
int total=0;
void enter()
{
		int ch=0;
		float sum=0;
		float avg=0;
			cout<<"How many students do u want to enter??"<<endl;
			cin>>ch;
			if(total==0)
			{
			total=ch+total;
			for(int i=0;i<ch;i++)
			{

				cout<<"\nEnter the students details "<<i+1<<endl;
				
				cout<<"Enter name ";

				cin>>name[i];

				cout<<"Enter Roll no ";

				cin>>roll_no[i];
				cout<<"\n All marks should be out of 100"<<endl;

				cout<<"Enter marks in english -";

				cin>>eng[i];

				cout<<"Enter marks in Math -";

				cin>>math[i];

				cout<<"enter marks in science -";

				cin>>sci[i];

				cout<<"enter the marks of computer science -";
				cin>>cs[i];

				cout<<"enter the marks of 2nd language -";
				cin>>lang[i];
				
			arr_avg[i]=eng[i]+math[i]+sci[i]+cs[i]+lang[i];
				cout<<"sum of total marks obtained= "<<arr_avg[i];
				avg=arr_avg[i]/5;
				
				cout<<" \naverage marks="<<avg<<"%";
			 if(avg>35 && avg<=50)
			 {
				cout<<"\n the grade of student is = C"<<endl;

			 }
			 if(avg>50 && avg<=80)
			 {
				cout<<"\n the grade of student is = B"<<endl;
				
			 }
			 if(avg>80 && avg<=100)
			 {
				cout<<"\n the grade of student is = A"<<endl;
				
			 }
			 if(avg<35)
			 {
				cout<<"\n the student is fail in exam"<<endl;
				
			 }
				
			}

	    	}

	    	else

	    	{
	    		for(int i=total;i<ch+total;i++)
			{
				cout<<"\nEnter the Data of student "<<i+1<<endl;

				cout<<"Enter name ";

				cin>>name[i];

				cout<<"Enter Roll no ";

				cin>>roll_no[i];

				cout<<"\n All marks should be out of 100"<<endl;

				cout<<"Enter marks in english -";

				cin>>eng[i];

				cout<<"Enter marks in Math -";

				cin>>math[i];

				cout<<"enter marks in science -";

				cin>>sci[i];

				cout<<"enter the marks of computer science -";
				cin>>cs[i];

				cout<<"enter the marks of 2nd language -";
				cin>>lang[i];
			
			arr_avg[i]=eng[i]+math[i]+sci[i]+cs[i]+lang[i];
				cout<<"sum of total marks obtained= "<<arr_avg[i];
				avg=arr_avg[i]/5;
				
				cout<<"\naverage marks="<<avg<<"%";
			 if(avg>35 && avg<=50)
			 {
				cout<<"\n the grade of student is = C"<<endl;
			 }
			 if(avg>50 && avg<=80)
			 {
				cout<<"\n the grade of student is = B"<<endl;
				
			 }
			 if(avg>80 && avg<=100)
			 {
				cout<<"\n the grade of student is = A"<<endl;
				
			 }
			 if(avg<35)
			 {
				cout<<"\n the student is fail in exam"<<endl;
				
			 }

			}

			total=ch+total;

			}

	


}

void show()

{
	float avg=0;

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		for(int i=0;i<total;i++)

	    		{

	    		cout<<"\nData of Student "<<i+1<<endl;

	    		cout<<"Name "<<name[i]<<endl;

	    		cout<<"Roll no "<<roll_no[i]<<endl;
				cout<<"\n obtained marks out of 100"<<endl;

	    		cout<<"English -"<<eng[i]<<endl;

	    		cout<<"Math -"<<math[i]<<endl;

	    		cout<<"science -"<<sci[i]<<endl;
	    		
	    		cout<<"computer science -"<<cs[i]<<endl;

				cout<<"2nd language -"<<lang[i]<<endl;

				arr_avg[i]=eng[i]+math[i]+sci[i]+cs[i]+lang[i];
				cout<<"sum of total marks obtained= "<<arr_avg[i];
				avg=arr_avg[i]/5;
				
				cout<<"\naverage marks="<<avg<<"%";

				if(avg>35 && avg<=50)
			 {
				cout<<"\n the grade of student is = C"<<endl;

			 }
			 if(avg>50 && avg<=80)
			 {
				cout<<"\n the grade of student is = B"<<endl;
				
			 }
			 if(avg>80 && avg<=100)
			 {
				cout<<"\n the grade of student is = A"<<endl;
				
			 }
			 if(avg<35)
			 {
				cout<<"\n the student is fail in exam"<<endl;
				
			 }
	    	    }

	    	}

}

void search()

{
    float avg=0;
	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

	string rollno;

				cout<<"Enter the roll no of student"<<endl;

				cin>>rollno;

				for(int i=0;i<total;i++)

				{

					if(rollno==roll_no[i])

					{

						cout<<"Name "<<name[i]<<endl;

	    	        	cout<<"Roll no "<<roll_no[i]<<endl;
                        cout<<"\n marks obtained out of 100"<<endl;
	    		        cout<<"english -"<<eng[i]<<endl;

	    		        cout<<"math -"<<math[i]<<endl;

	    	        	cout<<"science -"<<sci[i]<<endl;
	    	        	
	    	        	cout<<"computer science -"<<cs[i]<<endl;

						cout<<"2nd language -"<<lang[i]<<endl;

						arr_avg[i]=eng[i]+math[i]+sci[i]+cs[i]+lang[i];
				cout<<"sum of total marks obtained= "<<arr_avg[i];
				avg=arr_avg[i]/5;
				
				cout<<"\naverage marks="<<avg<<"%";

				if(avg>35 && avg<=50)
			 {
				cout<<"\n the grade of student is = C"<<endl;

			 }
			 if(avg>50 && avg<=80)
			 {
				cout<<"\n the grade of student is = B"<<endl;
				
			 }
			 if(avg>80 && avg<=100)
			 {
				cout<<"\n the grade of student is = A"<<endl;
				
			 }
			 if(avg<35)
			 {
				cout<<"\n the student is fail in exam"<<endl;
				
			 }

					}

				}

			}

}

void update()

{
	float avg=0;

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		string rollno;

				cout<<"Enter the roll no of student which you want to update"<<endl;

				cin>>rollno;

					for(int i=0;i<total;i++)

				{

					if(rollno==roll_no[i])

					{

						cout<<"\nPrevious data"<<endl<<endl;

						cout<<"Data of Student "<<i+1<<endl;

						cout<<"Name "<<name[i]<<endl;

	    	        	cout<<"Roll no "<<roll_no[i]<<endl;
						cout<<"\n marks obtained out of 100"<<endl;

	    		        cout<<"english -"<<eng[i]<<endl;

	    		        cout<<"math -"<<math[i]<<endl;

	    	        	cout<<"science -"<<sci[i]<<endl;
	    	        	
	    	        	cout<<"computer science -"<<cs[i]<<endl;

						cout<<"2nd language -"<<lang[i]<<endl;

						arr_avg[i]=eng[i]+math[i]+sci[i]+cs[i]+lang[i];
				cout<<"sum of total marks obtained= "<<arr_avg[i];
				avg=arr_avg[i]/5;
				cout<<"\naverage marks="<<avg<<"%";
				if(avg>35 && avg<=50)
			 {
				cout<<"\n the grade of student is = C"<<endl;

			 }
			 if(avg>50 && avg<=80)
			 {
				cout<<"\n the grade of student is = B"<<endl;
				
			 }
			 if(avg>80 && avg<=100)
			 {
				cout<<"\n the grade of student is = A"<<endl;
				
			 }
			 if(avg<35)
			 {
				cout<<"\n the student is fail in exam"<<endl;
				
			 }
				
				

	    	        	cout<<"\nEnter new data"<<endl;

							cout<<"Enter name ";

				            cin>>name[i];

				            cout<<"Enter Roll no ";

				            cin>>roll_no[i];

							cout<<"\n All marks should be out of 100"<<endl;
                             
			             	cout<<"Enter marks of english -";

				            cin>>eng[i];

				            cout<<"Enter marks of maths -";

				            cin>>math[i];

				            cout<<"Enter marks of science -";

				            cin>>sci[i];
				            
				            cout<<"enter marks of computer science -";
				            
				            cin>>cs[i];

							cout<<"enter the marks of 2nd language -";
							cin>>lang[i];

							arr_avg[i]=eng[i]+math[i]+sci[i]+cs[i]+lang[i];
				cout<<"sum of total marks obtained= "<<arr_avg[i];
				avg=arr_avg[i]/5;
				
				cout<<" \n average marks="<<avg<<"%";
				if(avg>35 && avg<=50)
			 {
				cout<<"\n the grade of student is = C"<<endl;

			 }
			 if(avg>50 && avg<=80)
			 {
				cout<<"\n the grade of student is = B"<<endl;
				
			 }
			 if(avg>80 && avg<=100)
			 {
				cout<<"\n the grade of student is = A"<<endl;
				
			 }
			 if(avg<35)
			 {
				cout<<"\n the student is fail in exam"<<endl;
				
			 }

					}

				}

			}

		}



void deleterecord()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		int a;

	        	cout<<"Press 1 to delete all record"<<endl;

				cout<<"Press 2 to delete specific record"<<endl;

				cin>>a;

				if(a==1)

				{

					total=0;

					cout<<"All record is deleted..!!"<<endl;

				}

				else if(a==2)

				{

				string rollno;

				cout<<"Enter the roll no of student which you wanted to delete"<<endl;

				cin>>rollno;

				for(int i=0;i<total;i++)

				{

					if(rollno==roll_no[i])

					{

						for(int j=i;j<total;j++)

						{

						name[j]=name[j+1];

						roll_no[j]=roll_no[j+1];

					    eng[j]=eng[j+1];

						math[j]=math[j+1];

						sci[j]=sci[j+1];
						
						cs[j]=cs[j+1];

						lang[j]=lang[j+1];

				     	}

					total--;

					cout<<"Your required record is deleted"<<endl;

					}

				}

				}

				 

			

			else 

			{

				cout<<"Invalid input";

			}

}
}
 int main()
{
	cout<<"\n --------------------Student Report Management System---------------------"<<endl;
	int value;
	while(true)
	{
	cout<<"\nPress 1 to create a student record"<<endl;

	cout<<"Press 2 to display all student's record"<<endl;

	cout<<"Press 3 to search student record"<<endl;

	cout<<"Press 4 to modify student record"<<endl;

	cout<<"Press 5 to delete student record"<<endl;

	cout<<"Press 6 to exit form the student report management system"<<endl;

	cin>>value;

	switch(value)

	{

		case 1:

			enter();

			break;

		case 2:

			show();

			break;

		case 3:

			search();

			break;

		case 4:

			update();

			break;

		case 5:

			deleterecord();

			break;

		case 6:

			exit(0);

			break;

		default:

			cout<<"Invalid input"<<endl;

			break;

	}

}

}