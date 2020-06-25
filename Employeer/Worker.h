#pragma once
#include "libs.h"
#include "Employer.h"
class Worker : public Employer
{
public:
	void Print() override;
};