#include <stdio.h>


int main(){

	int a[8]={1,2, 3,4,5,6,7}, index, valueItem;

	for (int i = 0; i < 8; i++){

		printf("%d", a[i]);

	}
		printf("nhap vao vi tri muon sua:");
		scanf("%d", &index);
		printf("nhap gia tri muon sua: ");
		scanf("%d", &valueItem);

		a[index] = valueItem;

	for (int i = 0; i < 8; i++){
		printf("%d", a[i]);}
}
