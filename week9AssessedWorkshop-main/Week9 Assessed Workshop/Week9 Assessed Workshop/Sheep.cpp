#include "Sheep.h"

Sheep::~Sheep() 
{

}

void Sheep::speak(void) {
	cout << "Sheep says: \t\tbaa!" << endl;
}

Sheep& Sheep::Create()
{
	return *(new Sheep());
}

Sheep::Sheep()
{
}
