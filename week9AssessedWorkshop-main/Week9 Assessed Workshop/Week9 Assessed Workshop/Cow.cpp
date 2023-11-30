#include "Cow.h"


Cow::~Cow() 
{

}

void Cow::speak(void) {
	cout << "Cow says: \t\tmoo!" << endl;
}

Cow& Cow::Create()
{
	return *(new Cow());
}

Cow::Cow()
{
}
