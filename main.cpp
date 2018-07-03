#include "classes.h"

int main()
{	
	char containera[] = "somethinga";//for now but make a cin.get with size N
	char containerb[] = "somethingb";//for now but make a cin.get with size N
	char containerc[] = "somethingc";//for now but make a cin.get with size N
	char containerd[] = "somethingd";//for now but make a cin.get with size N
	schedule file;

	file.extract();//extracts from txt
	//done with extracting___char* can be empty
	file.display();
	file.container(containera, containerb, containerc, containerd);
	file.insert();//will reuse empty and fill them with containers
	file.display();
	return 1;
}
