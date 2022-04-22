#include <stdio.h>
char shop_name[] = "Excals shop";
// functions to create bill
void BillHeader(char name[50], char date[10]){
	char name[50];
	char date[10];
	printf("\n\n");
	printf("\t	%s", shop_name);
	printf("\n-----------------------------------------------");
	printf("\nDate: %s", date);
	printf("\nInvoice to: %s \n", name);
	printf("-----------------------------------------------\n");
	printf("Iteams:\t\t");
	printf("Qty\t\t");
	printf("Total\t\t");
	printf("Total\t\t");
	printf("\n-----------------------------------------------");
	printf("\n\n");
}

void BillBody(char item[30], int qty, float price){
	printf("%s\t\t",item);
	printf("%d\t\t",qty);
	printf("%.2f\t\t",qty*price);
	printf("\n");
}

void BillFooter(float total){
	printf("\n");
	float dis = 0.15*total;
	float NETtotal=total-dis;
	float cgst= 0.09*NETtotal,grandtotal=NETtotal + 2*cgst;
	printf("-----------------------------------------------\n");
	printf("Sub Total:\t\t\t%.2f",total);
	printf("\n DIscount: @10%%s/t/t/t%.2f");
	
}
int main(){
}
