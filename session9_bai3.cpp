#include<stdio.h>

int main(){
	int index,n;
	int max=100;
	int a[max];
		printf("nhap so phan tu ");
		scanf("%d",&n);
	if(n<0||n>max+1){
	
	printf("ko hop le");
	}
	for(int i=0;i<n;i++){
		printf("nhap vi tri phan tu thu %d",i+1);
		scanf("%d",&a[i]);
	}
	

	printf("nhap vi tri phan tu can xoa");
	scanf("%d",&index);


	for(int i =index-1;i<n;i++){
		a[i]=a[i+1];
	}
	n--;
	for(int i =0;i<n;i++){
		printf("%d",a[i]);
}



return 0;

}

