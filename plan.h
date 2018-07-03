#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>

using namespace std;
const int N = 100;

class schedule
{
	public:
		schedule();
		~schedule();
		int extract();//extracts from a file txt
		int set(char a_day[],char a_e[], char a_m[], char a_l[], char a_escheduled_event[], char a_mscheduled_event[], char a_lscheduled_event[],  int x);

		int display();
		bool check();
		int insert();
		int modify();
		int search();
		int remove();

	protected:
		int n;
		schedule *next;

		char *day;
		char *e;
		char *m;
		char *l;//scheduled events receiver
		char *escheduled_event;
		char *mscheduled_event;
		char *lscheduled_event;

};
