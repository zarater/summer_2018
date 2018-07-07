#include "classes.h"

int main()
{	
	char containera[] = "somethinga";//for now but make a cin.get with size N
	char containerb[] = "somethingb";//for now but make a cin.get with size N
	char containerc[] = "somethingc";//for now but make a cin.get with size N
	char containerd[] = "somethingd";//for now but make a cin.get with size N
	schedule file;
	movietheater a_movie;
	classroom a_class;
	event a_event;
	
	file.day = new char[strlen(containera)];
	strcpy(file.day, containera);
	a_movie.extract();
	file.container(file);
	//a_movie.container(containera, containerb, containerc, containerd);
	a_movie.display();
	//a_room.(file);
	return 1;
}
