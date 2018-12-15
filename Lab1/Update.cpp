#include "Update.h"
#include "Program.h"

void Exam::Update::apply ( Exam::Program * p )
{
	if (param)
		p->setResourceUsageParams ( *param );
}