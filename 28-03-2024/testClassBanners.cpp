#include "banners.h"
#include<cstdio>


double Buy(const Banner& info, int copies)
{
	float discount = Banner::BulkDiscount(copies);
	return (1-discount/100)*copies*info.Price();
}

int main(void)
	
	int count;
	printf("Number of copies: ");
	scanf("%d",&count);

	Banner(30,8);
	printf("Total payment for banner: %.2f\n",Buy(a,count));

	HardBanner b(30,8,0.5));

//	printf("Price for hard banner: %.2f",	


}

