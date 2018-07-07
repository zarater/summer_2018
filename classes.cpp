#include "classes.h"



room :: room()
{
}

room:: ~room()
{
}


movietheater :: movietheater(): head(NULL), m_day(NULL)
{
	//LLL
	//movietheater *head;
	//head -> 
	//make a lll
	//CLL();//convert LLL to CLL

}
movietheater :: ~movietheater()
{
}

int movietheater :: CLL()
{
	movietheater *temp = new movietheater;
	extract();
	temp -> m_day = new char [strlen(day)];
	strcpy(temp -> m_day, day);
	if(!head)
	{
		head = temp;
		head -> next = NULL;
	}
	while(head != NULL)
	{
	temp -> next = NULL;
	head -> next = temp;
	head = temp;
	head = head -> next;
	}

return 1;
}

int movietheater :: display()
{
	if(!head){return 1;}
	while(head)
	{
		cout << "head: " << head -> day << endl;
		head = head -> next;
	}
	return 1;
}
