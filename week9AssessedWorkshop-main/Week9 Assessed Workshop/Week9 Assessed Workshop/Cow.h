#pragma once
#include "Animal.h"

class Cow : public Animal
{
public:
	virtual void speak(void);
	Cow();
	virtual ~Cow();
};
