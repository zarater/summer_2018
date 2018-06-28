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
		int set(char a_day[], int a_time, int x);
		int display();

	protected:
		int n;
		char *position;
		char *day;
		int time;

};
