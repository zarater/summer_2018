#include "classes.h"

bool ask();
int main()
{
	bool answer = ask();

	schedule file;
	file.extract();
	//if in stream is full check attempt to write. if the time overlaps the event, end the program
	if(answer == false)//answer adds if false
	{
	if(file.check() == true)//checks if there is a written file return true if there is
	{

	file.modify();// will take arguments to modify-- will check time contradiction
	}

	else 
		file.insert();
	}


	//delete
	else if(answer == true)
	{
		cout << "what event to change?" <<endl;
		file.display();//displays what to change
		file.search();// searches and if found remove.
		//file.remove();// removes the searched item inside search
	}
	return 1;
}

bool ask()
{
	int i = 0;
	char answer[N];

	cout << "would you like to to add or delete an event, lecture, or movie? type add or delete" <<endl;
	cin.get(answer,N, '\n');
	cin.ignore(N, '\n');
	int len = strlen(answer);
	for(i ; i < len ; ++i)
	{
		answer[i] = toupper(answer[i]);

	}

	if(strcmp(answer, "DELETE")==0 || strcmp(answer, "D" )==0)
	{
		return true;
	}
	return false;
}
