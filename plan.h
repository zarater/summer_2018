#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>

using namespace std;

class schedule
{
	public:
		schedule();
		~schedule();
		int extract();//extracts from a file txt
		int set(char a_day[],char a_eml[], char a_items[], int x);
		int display();

	protected:
		int n;
		char *position;
		char *day;
		char *event_movie_lecture;//scheduled events receiver
		char *scheduled_event;
		int time;

};
