#include "plan.h"




schedule :: schedule(): n(0), position(NULL), day(NULL), time(0)
{}
schedule ::~schedule()
{
	delete [] day;
}

int schedule :: extract()
{
	char word[200];
	int speed;
	int x = 0;

	ifstream file_in;
	file_in.open("schedule.txt");

	if(!file_in)
	{
		cout << "error" <<endl;
		
	}
	while(!file_in.eof())
	{
		file_in.get(word, 200, ':'); file_in.ignore();
		file_in >> speed; file_in.ignore();
		set(word, speed, x);
		++x;
	}
	file_in.close();
return 1;
}


int schedule :: set(char a_day[], int a_time, int x)
{
	n = x;
	if( n == 6)
	{
	day = new char[strlen(a_day)+1];
	strcpy(day , a_day);
	}
	time = a_time;

	return 1;
}
int schedule:: display()
{
	//cout << "n" << n << "position" << position << "day" << day << "time" << time<< endl;
	cout <<  "day" << day << "time" << time <<endl;
	return 1;
}

