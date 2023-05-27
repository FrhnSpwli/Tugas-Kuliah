/*File Program : Discount.c*/

#include <stdio.h>
	int main(void)
	{
	double total_pembelian, discount = 0;

	printf("Masukkan nilai total pembelian dalam rupiah : ");
	scanf("%lf", &total_pembelian);
	if(total_pembelian >= 100000)
		discount = 0.05*total_pembelian;
	printf("Besarnya discount = Rp. %.2lf\n", discount);

	}