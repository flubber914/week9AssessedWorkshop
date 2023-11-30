#pragma once
#include "Animal.h"

class Sheep : public Animal
{
public:
	void speak(void);
	static Sheep& Create();
	Sheep();
	~Sheep();
};
