double BannerPrice(float width, flaot height, bool triangular)
{
	float k=triangular?0.5:1.0; // if it si rectangular it k is 0.5 
				    // otherwise it will be 1.0

	return 0.80*k*width*height;

}
