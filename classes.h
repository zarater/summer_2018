#include "plan.h"

//keeps track of all the classes
//
class room: public schedule
{
	public:
		room();
		~room();
	protected:
};

class movietheater: public room
{
	public:
		movietheater();
		~movietheater();
		int display();
		int CLL();
	protected:
		char * m_day;
		movietheater *head;
		movietheater *next;

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

