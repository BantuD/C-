
long Compute(int lower,int upper,short step)
{
	long result = 0;

	if(upper < lower)
		throw upper;

	for(int value=lower; value<=upper;value+=step)
	{
		result += value*value;
	}

	return result;
}


//convert it into .o file 
