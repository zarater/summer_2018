#include "plan.h"

//keeps track of all the classes
//
class room
{
	public:
		room();
		~room();
	protected:
	schedule list;
};

class movietheater: public room
{
	public:
		movietheater();
		~movietheater();
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

