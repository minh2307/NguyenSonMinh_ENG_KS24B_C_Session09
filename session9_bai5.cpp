#include<stdio.h>
int main(){
	int max=100,a,choice,b,sum=0,index,value;
int arr[max];
do{
 printf("\nMenu\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				b =true;
				printf("moi ban nhap vao mang : ");
				scanf("%d",&a);
				
				for(int i=0;i<a;i++){
					printf("Nhap so thu tu thu %d : ",i+1);
						scanf("%d",&arr[i]);
					
				}
				break;
			case 2:
					if(b==true){
				
				for(int i =0;i<a;i++){
					printf("%d ",arr[i]);
				}
			}
				break;
			case 3:
					if(b==true){
				
				for(int i =0;i<a;i++){
					if(arr[i]%2==0){
					
					printf("%d ",arr[i]);
					sum+=arr[i];
				}
				}printf(" tong cac so chan bang %d",sum);
				
			}
				break;
			case 4:
				if(b==true){
					int max = arr[0];
					int min = arr[0];
				for(int i=0;i<a;i++){
					if(arr[i]>max){
						max=arr[i];
					} 
					if(arr[i]<min){
						min=arr[i];
					}
				}
				printf("so lon nhat la %d\n",max);
		
			
				printf("so nho nhat la %d\n",min);
			}	break;
			case 5:
			if(b==true){
				for(int i =0;i<a;i++){
					int count=0;
					for(int j =1;j<=arr[i];j++){
						if(arr[i]%j==0){
							count++;
						}	
				
					}
			if(count ==2){
					printf("%d \n",arr[i]);
					sum+=arr[i];
				}
				}	printf("tong so nguyen la %d ",sum);
				
			}
				break;
			case 6:if(b==true){
				int check;
				int count2=0;
				printf("nhap vao so muon kiem tra : ");
				scanf("%d",&check);
				for(int i =0;i<a;i++){
				if(arr[i]==check){
					count2++;
				}
				}
				printf("so %d co %d so trong mang ",check,count2);
			}
				break;
			case 7:
					if(b==true){
			printf("nhap gia tri can them : ");
			scanf("%d",&value);
			printf("nhap vi tri can them : ");
			scanf("%d",&index);
				for(int i =a;i>=index;i--){
					arr[i]=arr[i-1];
					
				}
				
					arr[index-1]=value;
					a++;
				for(int i =0;i<a;i++){
					printf("%d ",arr[i]);
				}
			}
				break;			
		}


}
	while(choice!=8);


return 0;

}

