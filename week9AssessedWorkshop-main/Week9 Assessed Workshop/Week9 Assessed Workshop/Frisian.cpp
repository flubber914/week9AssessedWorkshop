#include "Frisian.h"

Frisian::~Frisian() 
{

}

void Frisian::speak(void) {
	cout << "Frisian Cow says: \tmoo (in black and white)!" << endl;
}

Frisian& Frisian::Create()
{
	return *(new Frisian());
}

Frisian::Frisian()
{
}
