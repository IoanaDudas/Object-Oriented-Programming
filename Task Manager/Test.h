#pragma once

#include "Service.h"
#include <assert.h>

void getDurationPriority_validInput_correctDuration()
{
	Service s = Service("input.txt");
	int duration = s.getDurationPriority(1);
	assert(duration == 360);
}

void getDurationPriority_inValidInput_returnsZero()
{
	Service s = Service("input.txt");
	int duration = s.getDurationPriority(10);
	assert(duration == 0);
}

void testAll()
{
	getDurationPriority_validInput_correctDuration();
	getDurationPriority_inValidInput_returnsZero();
}