#include "classes.h"



room :: room()
{
}

room:: ~room()
{
}

int room :: modify(int finder)
{
	int y;
	if(!head){return 0;}
	room * lookahead = new room;
	while(head)
	{
		if(finder == y+1)
		{
			room * temp = new room;
			temp -> day = new char [strlen(day)];
			strcpy(temp -> day, day);
			temp -> e = new char [strlen(e)];
			strcpy(temp -> e, e);
			temp -> m = new char [strlen(m)];
			strcpy(temp -> m, m);
			temp -> l = new char [strlen(l)];
			strcpy(temp -> l, l);
			temp -> escheduled_event = new char [strlen(escheduled_event)];
			strcpy(temp -> escheduled_event, escheduled_event);
			temp -> mscheduled_event = new char [strlen(mscheduled_event)];
			strcpy(temp -> mscheduled_event, mscheduled_event);
			temp -> lscheduled_event = new char [strlen(lscheduled_event)];
			strcpy(temp -> lscheduled_event, lscheduled_event);

			lookahead -> next = temp;
			temp -> next = head -> next;
			delete head;
			head = lookahead;
		}
		++y;
		head = head -> next;
		lookahead = head -> next -> next;
	}
			
return 1;
}

int room :: search()
{
	//char a_search[N];
	//cin.get(a_search,N, '\n');
	//cin.ignore(100, '\n');
	room *current = head;
	int i;
	char a_search[] = "F";
	char x_day[strlen(day)];
	strcpy(x_day, day);
	int len = strlen(a_search);
	if(!head){return 1;}
	while(head)
	{
		for(int g =0; g < len ; ++g)
		{
		toupper(a_search[g]);
		toupper(day[g]);
		}
		if(strcmp(a_search, x_day)==0)
		{
			return i;//true
		}
		head = head -> next;
		++i;
	}
	
return 0;//false
}

int room :: remove(int finder)
{
	int y;
	if(!head){return 0;}
	room * lookahead = new room;
	while(head)
	{
		if(finder == y+1)
		{
			lookahead -> next = head ->next;
			delete head ;
			head = lookahead;
		}
		++y;
		head = head -> next;
		lookahead = head -> next -> next;
	}
	
return 1;
}

movietheater :: movietheater()
{
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
	temp -> day = new char [strlen(day)];
	strcpy(temp -> day, day);
	temp -> e = new char [strlen(e)];
	strcpy(temp -> e, e);
	temp -> m = new char [strlen(m)];
	strcpy(temp -> m, m);
	temp -> l = new char [strlen(l)];
	strcpy(temp -> l, l);
	temp -> escheduled_event = new char [strlen(escheduled_event)];
	strcpy(temp -> escheduled_event, escheduled_event);
	temp -> mscheduled_event = new char [strlen(mscheduled_event)];
	strcpy(temp -> mscheduled_event, mscheduled_event);
	temp -> lscheduled_event = new char [strlen(lscheduled_event)];
	strcpy(temp -> lscheduled_event, lscheduled_event);
	if(!head)
	{
		head = temp;
		head -> next = NULL;
		return 1;
	}
	temp -> next = NULL;
	head -> next = temp;
	head = temp;
	head = head -> next;
/*
*/
return 1;
}

int movietheater :: display()
{
cout << "day "<< day << endl;
	if(!head){return 1;}
	while(head)
	{
		cout << "head: " << head -> day << endl;
		cout << "head: " << head -> e << endl;
		cout << "head: " << head -> m << endl;
		cout << "head: " << head -> l << endl;
		cout << "head: " << head -> escheduled_event << endl;
		cout << "head: " << head -> mscheduled_event << endl;
		cout << "head: " << head -> lscheduled_event << endl;
		head = head -> next;
	}
	return 1;
/*
*/
}
