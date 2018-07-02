#include "plan.h"




schedule :: schedule(): n(0), day(NULL), e(NULL), m(NULL), l(NULL),
escheduled_event(NULL), mscheduled_event(NULL), lscheduled_event(NULL) 
{}

schedule ::~schedule()
{
	delete [] day;
	delete[] e;
	delete[] m;
	delete[] l;
	delete[] escheduled_event;
	delete[] mscheduled_event;
	delete[] lscheduled_event;
}

int schedule :: extract()
{
	char a_day[100];
	char a_e[100];
	char a_m[100];
	char a_l[100];
	char a_escheduled_event[100];
	char a_mscheduled_event[100];
	char a_lscheduled_event[100];

	int x = 0;

	ifstream file_in;
	file_in.open("schedule2.txt");

	if(!file_in)
	{
		cout << "error" <<endl;
		
	}
	while(!file_in.eof())
	{
		file_in.get(a_day, 100, '{'); file_in.ignore();
		file_in.get(a_e, 100, ':'); file_in.ignore();

		file_in.get(a_escheduled_event, 100, ':'); file_in.ignore();

		file_in.get(a_m, 100, ':'); file_in.ignore();
		file_in.get(a_mscheduled_event, 100, ':'); file_in.ignore();

		file_in.get(a_l, 100, ':'); file_in.ignore();
		file_in.get(a_lscheduled_event, 100, ':'); file_in.ignore();
		
	set(a_day, a_e, a_m, a_l, a_escheduled_event, a_mscheduled_event, a_lscheduled_event,x);	
	int len = strlen(a_day);
	for(int i = 0; i<len; ++i)
	{
		//a_day[i] = '\n';
		//a_e[i] = '\n';
		//a_m[i] = '\n';
		//a_l[i] = '\n';
		//a_escheduled_event[i];
	}
	
		++x;
	}
	file_in.close();
return 1;
}

int schedule :: set(char a_day[], char a_e[], char a_m[], char a_l[],  char a_escheduled_event[], char a_mscheduled_event[], char a_lscheduled_event[], int x)
{
		n = x;
		//cout << "n" << n << endl;
			day = new char[strlen(a_day)+1];
			strcpy(day , a_day);


			e = new char[strlen(a_e)+1];
			strcpy(e, a_e);


			m= new char[strlen(a_m)];
			strcpy(m, a_m);


			l = new char[strlen(a_l)+1];
			strcpy(day , a_l);

			escheduled_event = new char[strlen(a_escheduled_event)+1];
			strcpy(escheduled_event , a_escheduled_event);

			mscheduled_event = new char[strlen(a_mscheduled_event)+1];
			strcpy(mscheduled_event , a_mscheduled_event);

			lscheduled_event = new char[strlen(a_lscheduled_event)+1];
			strcpy(lscheduled_event , a_lscheduled_event);
		//	cout << "list" << display() << endl;
		//TODO try setting to delete	
/*
cout << "here" <<endl;
			*/
//		}
	return 1;
}
int schedule:: display()
{
	cout <<  "day" << day << endl;
	cout << "e" << e <<endl; //event_movie_lecture 
	cout << "m" << m <<endl; //event_movie_lecture 
	cout << "l" << l <<endl; //event_movie_lecture 
	cout << "esched" << escheduled_event << endl;
	cout << "msched" << mscheduled_event << endl;
	cout << "lsched" << lscheduled_event << endl;

	char test[100];
	char *ctest; 	
	cin.get(test, 100, '\n');
	cin.ignore(100, '\n');
	ctest = new char[strlen(test)];
	strcpy(ctest, test);
	delete [] ctest;

	cout << "ctest" << ctest << endl;

	cin.get(test, 100, '\n');
	cin.ignore(100, '\n');
	ctest = new char[strlen(test)];
	strcpy(ctest, test);
	//delete [] ctest;

	cout << "ctest" << ctest << endl;
	return 1;
}

