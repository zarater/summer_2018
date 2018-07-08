#include "classes.h"
int ask();
int extract();
int main()
{	
	char containera[] = "somethinga";//for now but make a cin.get with size N
	char containerb[] = "somethingb";//for now but make a cin.get with size N
	char containerc[] = "somethingc";//for now but make a cin.get with size N
	char containerd[] = "somethingd";//for now but make a cin.get with size N
	int finder;
	movietheater movie;
	extract();
	ask();
	if(ask() == 1)//true
	{
		cout <<"what to change?" << endl;
		finder = search();
		movie.modify(finder);
		movie.display();
	}

	else if(ask() == 0)//false
	{
		cout <<"what to delete?" << endl;
		finder = search();
		movie.remove(finder);
		movie.display();
	}//false
	else
		movie.display();


	return 1;
}
int extract()
{
	movietheater movie;
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
		
	movie.set(a_day, a_e, a_m, a_l, a_escheduled_event, a_mscheduled_event, a_lscheduled_event,x);
	movie.CLL();
	movie.display();
		++x;

	}
	file_in.close();
	
return 1;
}
int ask()
{
	int user;
	cout << "do you want to modify(1), delete(2), or display(3)" << endl;
	cin>>user;
	cin.ignore(100, '\n');
	if(user == 1){return user;}
	else if(user == 2){return 2;}
	else 
		return 3;
}
