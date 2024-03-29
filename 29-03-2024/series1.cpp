#include "namespace.h"

namespace Series

{
	


	// what we're saying is we're writing code for 
	
	linearSequence :: LinearSequence(double first, double second)
	{
	
		current = first;
		step = second - first;
	}

	double LinearSequence :: Next()
	{
	
		double result = current;
		current += step;
		return result;
	
	}

	PowerSequence :: PowerSequence(double second)
	{
	
		current = 1;
		factor = second;
	
	}

	double PowerSequence :: Next()
	{
	
		double result = current;
		current *= factor;
		return result
	
	}
}
