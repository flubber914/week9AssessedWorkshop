#pragma once
#include "Cow.h"

class Frisian : public Cow
{
public:
	void speak(void);
	static Frisian& Create();
	Frisian();
	~Frisian();
};
