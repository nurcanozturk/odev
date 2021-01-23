#include <stdio.h>
#include <stdlib.h>
#include<time.h>

	void bubble_sort_asc(int array[],int size);
	void bubble_sort_dec(int array[],int size);
	void selection_sort_asc(int array[],int size);
	void selection_sort_dec(int array[],int size);
	void insertion_sort_asc(int array[],int size);
	void insertion_sort_dec(int array[],int size);
	void shell_sort_asc(int array[],int size);
	 void shell_sort_dec(int array[],int size); 

 int main()
 {
 	
 	int i,j,k;
 	char select;
 	int select1,select2;
 	int array_size,temp,array[i];
  int size,min;
 	
 	printf("===================== MENU ====================\n");
 	printf("A)Sort the array by selecting a sort algorithm.\n");
 	printf(" B) Compare all sort algorithms. ");
 	scanf("%c",&select);
 	switch(select)
 	{
 		case 'A':
 		{
		 
				printf("Select a sort algorithm\n");
 			printf("1. Bubble Sort\n 2. Selection Sort\n 3. Insertion Sort\n 4. Shell Sort\n ");
 			scanf("%d",&select1);
 		   	 printf("type of sorting");
 				printf("1. In Ascending Order\n 2. In Descending Order ");
 			scanf("%d",&select2);         	
 		   int num[10];
 			 srand(time(NULL));
	 	for(i=0;i<10;i++)
	 	{
	 		num[i]=rand()%100+1;
	 		printf("%3d",num[i]);
	      
	 	 }

 			printf("\n");
 			if(select1 == 1 && select2 == 1){
 				bubble_sort_asc(num,10);
			 }
			 if(select1==1 && select2==2){
			 	bubble_sort_dsc(num,10);
			 }
 			if(select1==2 && select2==1){
 				selection_sort_asc( num,10);
			 }
			 if(select1==2 && select2==2){
			 	selection_sort_dsc(num,10);
			 }
			 if(select1==3 && select2==1){
			 	insertion_sort_asc(num,10);
			 }
			 if(select1==3 && select2==2){
			 	insertion_sort_dsc(num,10);
			 }
			 if(select1==4 && select2==1){
			 	shell_sort_asc(num,10);	
			 }
			 if(select2==4 && select2==2){
			 	shell_sort_dsc(num,10);
			 }break;
			 }
 case 'B':
        	{
			time_t start,end;
        	int num;
        	printf("time of all algorithms\n");
        	int x[50000];
        	time(&start);
        	srand(time(NULL));
        	for(i=0;i<50000;i++)
        	num=rand()%200000+1;
        	 for(i=1;i<size;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(array[j]<array[j+1])
            {
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            } 
       
       }
    } 
    getch();
    time(&end);
    printf("time for bubble sort %lf\n",difftime(end,start));
    time(&start);
        	srand(time(NULL));
        	for(i=0;i<50000;i++)
        	num=rand()%200000+1;
     for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {       
            if(array[j]>array[min])
                min=j;
        }   
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
    getch();
    time(&end);
    printf("time for selection sort %lf\n",difftime(end,start));
    
    time(&start);
        	srand(time(NULL));
        	for(i=0;i<50000;i++)
        	num=rand()%200000+1;
        	for(i=0;i<size;i++)
    {
        for(j=0;j<i+1;j++)
        {
            if(array[j]<array[i])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }       
    }getch();
    time(&end);
    printf("time for insertion sort %lf\n",difftime(end,start));
     time(&start);
        	srand(time(NULL));
        	for(i=0;i<50000;i++)
        	num=rand()%200000+1;
        	 for (k = size; k > 1; ) {
      k = (k < 5) ? 1 : ((k * 5 - 1) / 11);
      for (i = k - 1; ++i < size; ) {
         temp = array[i];
         for (j = i; array[j - k] > temp; ) {
            array[j] = array[j - k];
            if ((j -= k) < k)
               break;
         }
         array[j] = temp;
      }
   }getch();
    time(&end);
    printf("time for shell sort %lf\n",difftime(end,start));
 	}
 
 	
 	return 0;}
 
}
void bubble_sort_asc(int array[],int size)
{
    int i,j,temp,k;
    for(i=1;i<size;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(array[j]<array[j+1])
            {
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            } 
       
       }
    } 

    for(i=0;i<size;i++)
        printf("%2d ",array[i]);
} 			
		
void bubble_sort_dsc(int array[],int size)
{
    int i,j,temp,k;
    for(i=1;i<size;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            } 
       
       }
    } 

    for(i=0;i<size;i++)
        printf("%2d ",array[i]);
} 			

void selection_sort_asc(int array[],int size)
{
    int i,j,temp,min,max,k;
   
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {       
            if(array[j]>array[min])
                min=j;
        }   
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
   
    for(i=0;i<size;i++)
        printf("%2d ",array[i]);   
}	

 void selection_sort_dsc(int array[],int size)
{
    int i,j,temp,min,max,k;
   
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {       
            if(array[j]<array[min])
                min=j;
        }   
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
   
    for(i=0;i<size;i++)
        printf("%2d ",array[i]);   
}				
 			
 void insertion_sort_asc(int array[],int size)
{
   
    int i,j,temp;
   
    for(i=0;i<size;i++)
    {
        for(j=0;j<i+1;j++)
        {
            if(array[j]<array[i])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }       
    }
   
    for(i=0;i<size;i++)
        printf("%2d ",array[i]);   
}				
 
 void insertion_sort_dsc(int array[],int size)
{
   
    int i,j,temp;
   
    for(i=0;i<size;i++)
    {
        for(j=0;j<i+1;j++)
        {
            if(array[j]>array[i])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }       
    }
   
    for(i=0;i<size;i++)
        printf("%2d ",array[i]);   
}		

  void shell_sort_asc(int array[],int size)
{
   int   i, j, k, temp;
   for (k = size; k > 1; ) {
      k = (k < 5) ? 1 : ((k * 5 - 1) / 11);
      for (i = k - 1; ++i < size; ) {
         temp = array[i];
         for (j = i; array[j - k] > temp; ) {
            array[j] = array[j - k];
            if ((j -= k) < k)
               break;
         }
         array[j] = temp;
      }
   }
     int n= size / 2;
   for(i=0;i<n;i++){
   	     temp=array[i];
   	     array[i] = array[size - i-1];
   	     array[size-i-1] = temp;}
   for(i=0;i<size;i++)
        printf("%2d ",array[i]); 
}		
   void shell_sort_dsc(int array[],int size)
{
   int   i, j, k, temp;
   for (k = size; k > 1; ) {
      k = (k < 5) ? 1 : ((k * 5 - 1) / 11);
      for (i = k - 1; ++i < size; ) {
         temp = array[i];
         for (j = i; array[j - k] > temp; ) {
            array[j] = array[j - k];
            if ((j -= k) < k)
               break;
         }
         array[j] = temp;
      }
   }
   for(i=0;i<size;i++)
   printf("%2d ",array[i]); 
}
		
