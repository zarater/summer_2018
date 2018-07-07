#include "plan.h"




schedule :: schedule(): n(0), day(NULL), e(NULL), m(NULL), l(NULL),
escheduled_event(NULL), mscheduled_event(NULL), lscheduled_event(NULL) 
{}

schedule ::~schedule()
{
	//cout << "n" << n << endl;
	if(day && e && m && l && escheduled_event && mscheduled_event && lscheduled_event)
	{
	delete [] day;
	delete[] e;
	delete[] m;
	delete[] l;
	delete[] escheduled_event;
	delete[] mscheduled_event;
	delete[] lscheduled_event;
	}
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
	file_in.open("schedule.txt");

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
		file_in.get(a_lscheduled_event, 100, '\n'); file_in.ignore();
		file_in.get();
		
	set(a_day, a_e, a_m, a_l, a_escheduled_event, a_mscheduled_event, a_lscheduled_event,x);
	//display();
		++x;

	}
	file_in.close();
return 1;
}

int schedule :: set(char a_day[], char a_e[], char a_m[], char a_l[],  char a_escheduled_event[], char a_mscheduled_event[], char a_lscheduled_event[], int x)
{
		n = x;
			if(day ){delete [] day;}
			day = new char[strlen(a_day)+1];
			strcpy(day , a_day);
			
			if(e ){delete [] e;}
			e = new char[strlen(a_e)+1];
			strcpy(e, a_e);


			if(m ){delete [] m;}
			m= new char[strlen(a_m)];
			strcpy(m, a_m);


			if(l ){delete [] l;}
			l = new char[strlen(a_l)+1];
			strcpy(l , a_l);

			if(escheduled_event){delete [] escheduled_event;}
			escheduled_event = new char[strlen(a_escheduled_event)+1];
			strcpy(escheduled_event , a_escheduled_event);

			if(mscheduled_event){delete [] mscheduled_event;}
			mscheduled_event = new char[strlen(a_mscheduled_event)+1];
			strcpy(mscheduled_event , a_mscheduled_event);

			if(lscheduled_event){delete [] lscheduled_event;}
			lscheduled_event = new char[strlen(a_lscheduled_event)+1];
			strcpy(lscheduled_event , a_lscheduled_event);
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
	cout << "n: " << n << endl;

	return 1;
}
int schedule :: insert()//write into it after receiving CLL and a of LLL
{
	ofstream file;
	file.open("schedule2.txt");
	file << "this is" << ":" << " my text\n\n";
	file.close();


	return 1;
}


bool schedule ::check()
{
	//if(day != NULL){return true;}
	
	ifstream file_in;
	file_in.open("schedule.txt");

	if(!file_in)
	{
		return true;
		
	}
	return false;
}


int schedule :: modify()
{
return 1;
}
int schedule :: search()
{
return 1;
}
int schedule :: remove()
{
return 1;
}


int schedule:: container(char containera[], char containerb[], char containerc[], char containerd[])
{
	if(day){delete day;}
	day = new char [strlen(containera)];
	strcpy(day, containera);
	//TODO check if the CLL or a of LLL exist with same start/end times.
	//if not make a new LL of the time and ADD() to the LL.

	return 1;
}
int schedule :: container(schedule &source)
{

	if(day){delete day;}
	day = new char [strlen(containera)];
	strcpy(day, containera);
	//TODO check if the CLL or a of LLL exist with same start/end times.
	//if not make a new LL of the time and ADD() to the LL.

	return 1;
}

int schedule :: global_init()
{
	return n;
}
