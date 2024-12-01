#include <stdio.h>

int main(){
     int a[100], currentLength, addindex;
           printf("so phan tu trong mang: ");
           scanf("%d",&currentLength);
     for(int i=0; i < currentLength; i++){
          printf("nhap phan tu thu %d",i);
          scanf("%d",&a[i]);
      }
     int valueItem;
           printf("vi tri muon them vao: ");
           scanf("%d",&addindex);
           printf("gia tri muon them vao: ");
           scanf("%d",&valueItem);
      if(0 > addindex || addindex > currentLength){
          printf("gia tri khong hop le");
          return 0;
  }
      if(addindex = currentLength){
          a[addindex]=valueItem;
  }
      if(addindex < currentLength){
          for(int i=currentLength; i > addindex; i--){
          		a[i] = a[i-1];
	}

	 			a[addindex]=valueItem;
	 			currentLength++;
	
  }
  for(int i =0;i<currentLength;i++){
		printf("%d ",a[i]);
		  }
}
