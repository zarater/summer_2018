#include "plan.h"

//keeps track of all the classes
class room: public schedule
{
	public:
		room();
		~room();
		int modify(int finder);
		int search();
		int remove(int finder);
	protected:
		room *head;
		room *next;
};

class movietheater: public room
{
	public:
		movietheater();
		~movietheater();
		int display();
		int CLL();
	protected:

};
class classroom: public room
{
	public:
	protected:
};
class event: public room
{
	public:
	protected:
};

