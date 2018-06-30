#include "plan.h"




schedule :: schedule(): n(0), position(NULL), day(NULL), time(0)
{}
schedule ::~schedule()
{
	delete [] day;
}

int schedule :: extract()
{
	char bday[100];
	char beml[100];
	char bitems[100];
	//int speed;
	int x = 0;

	ifstream file_in;
	file_in.open("schedule2.txt");

	if(!file_in)
	{
		cout << "error" <<endl;
		
	}
	while(!file_in.eof())
	{
		file_in.get(bday, 100, '{'); file_in.ignore();
		file_in.get(beml, 100, ';'); file_in.ignore();
		file_in.get(bitems, 100, '\n'); file_in.ignore();

		//file_in >> speed; file_in.ignore();//if input is a number
		set(bday, beml, bitems, x);
		++x;
	}
	file_in.close();
return 1;
}


int schedule :: set(char a_day[], char a_eml[], char a_items[], int x)
{
	n = x;
	cout << "n" << n << endl;
	if( n == 6)
	{
	cout << "iteration line 49" << endl;
	day = new char[strlen(a_day)+1];
	strcpy(day , a_day);
	}

	return 1;
}
int schedule:: display()
{
	//cout << "n" << n << "position" << position << "day" << day << "time" << time<< endl;
	cout <<  "day" << day << endl;//<< "eml" << event_movie_lecture <<endl;
	return 1;
}

