#include<stdio.h>

int main (){
	int choice,i,size = 0, arr[100];
	
	while(1){
		printf("\n+---Chuong trinh quan ly danh sach so nguyen---+\n");
		printf("|----------------------MENU--------------------|\n");
		printf("|1. Khoi tao mang ban dau                      |\n");
		printf("|2. Hien thi danh sach phan tu                 |\n");
		printf("|3. Chen them 1 so vao vi tri nhap vao         |\n");
		printf("|4. Xoa theo vi tri                            |\n");
		printf("|5. Cap nhat gia tri theo vi tri               |\n");
		printf("|6. Thoat chuong trinh                         |\n");
		printf("+----------------------------------------------+\n");
		printf("-----------------------###----------------------\n");
		
		printf("->> Moi ban nhap chuc nang : ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printf("\n-----------------------#1#----------------------\n");
				printf("Nhap so phan tu cua mang: ");
	            scanf("%d",&size);
	
                for( i = 0; i < size; i++){
                	
                	printf("\n------------------Phan tu %d-----------------\n",i+1);
                	
	     	        printf("Nhap gia tri phan tu:  ");
	    	        scanf("%d",&arr[i]);
	    	    }
	    	    printf("\n<<---Nhap thanh cong %d phan tu vao mang--->>\n", size);
	     
				break;
			case 2:
				printf("\n-----------------------#2#----------------------\n");
				if(size == 0){
				printf("Mang rong. Vui long nhap du lieu truoc.\n");
			    } else {
				    printf("Cac gia tri trong mang la: ");
				    for( i=0 ; i<size; i++ ){
					    printf(" %d, ",arr[i]);
				}
				printf("\n");
			}
				break;
			case 3:
				printf("\n-----------------------#3#----------------------\n");
				if(size == 0){
               printf("Mang rong. Vui long nhap du lieu truoc.\n");
               break;
            }            
		    	int change,x;
			    printf("Nhap vi tri muon them (0->%d): \n", size);
		    	scanf("%d",&change);
			    if(change < 0 || change > size){
		    		printf("Khong hop le.\n");
			    } else {
				    printf("Nhap gia tri can them: ");
				    scanf("%d",&x);
				    
				for(int i = size ; i > change ; i-- ){
                    arr[i] = arr[i - 1];
                }
                arr[change] = x;
                size++;
				printf("<<----Them thanh cong---->>\n");
			}
				break;
			case 4:
				printf("\n-----------------------#4#----------------------\n");
				if(size == 0){
                printf("Mang rong. Vui long nhap du lieu truoc.\n");
                break;
            }
            
			    int deleteNumber;
			    printf("Nhap vi tri muon xoa (0->%d): ", size - 1);
			    scanf("%d", &deleteNumber);
			    if(deleteNumber<0 || deleteNumber>=size){
				   printf("Khong hop le.\n");
			    }  else{
				   for(int i = deleteNumber ; i < size - 1 ; i++){
				       arr[i] = arr[i + 1];
				} 
				    size--;
			 	    printf("<<----Xoa thanh cong---->>\n");
			}
				break;
			case 5:
				printf("\n-----------------------#5#----------------------\n");
				if(size == 0){
                printf("Mang rong. Vui long nhap du lieu truoc.\n");
                break;
            }
            
		        int update,j;
		        printf("Nhap vi tri muon thay doi (0->%d): ", size - 1);
		        scanf("%d", &update);
	     		if(update<0 || update>=size){
		    		printf("Khong hop le!\n");
                } else {
            	    printf("Nhap gia tri moi: \n");
            	    scanf("%d",&j);
            	    arr[update] = j;	
			} 
			printf("<<----Da thay doi thanh cong---->> \n");
				break;
			case 6:
				printf("<<-----Thoat thanh cong----->>\n");
				return 0;
				break;
				
			default:
			printf("Khong hop le!\n");	
		}
	}
	return 0;
}	
	
