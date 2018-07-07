#include "plan.h"

//keeps track of all the classes
//
class room: public schedule
{
	
	public:
		room();
		room(const room &);
		~room();
		int display();
		int init(schedule & tocopy);
	protected:
//	schedule list;
};

class movietheater: public room
{
	public:
		movietheater();
		~movietheater();
		int display();
	protected:
		int CLL();
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

