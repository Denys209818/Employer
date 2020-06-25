#pragma once
#include "libs.h"
#include "Employer.h"

class President : public Employer
{
public:
	void Print() override;
};
