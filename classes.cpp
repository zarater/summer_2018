#include "classes.h"



room :: room()
{}
//room :: room():schedule()
room :: room(const room & source)
{}
room:: ~room()
{
}
int room :: display()
{
	schedule::display();
	//cout << "n: " << n << endl;

	return 1;
}

int room :: init(schedule & tocopy)
{
//	char * rand = new char[strlen(tocopy.day)];
//	strcpy(rand, tocopy.day);
//	cout << "rand: " << rand << endl;
	return 1;
}

movietheater :: movietheater()
{
	//LLL
//	movietheater *head;
//	head -> 
	//make a lll
	CLL();//convert LLL to CLL

}

movietheater :: ~movietheater()
{
}
int movietheater :: display()
{
	room :: display();
}

int movietheater :: CLL()
{
return 1;
}
