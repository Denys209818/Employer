#include "libs.h"
#include "Employer.h"
#include "President.h"
#include "Manager.h"
#include "Worker.h"

void main() 
{
	Employer* e[3];
	
	e[0] = new President();
	e[1] = new Manager();
	e[2] = new Worker();

	for (int i = 0; i < 3; i++) 
	{
		e[i]->Print();
	}
	
}