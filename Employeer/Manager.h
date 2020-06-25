#pragma once
#include "libs.h"
#include "Employer.h"
class Manager : public Employer
{
public:
	void Print() override;
};
