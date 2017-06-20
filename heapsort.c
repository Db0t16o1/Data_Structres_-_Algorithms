//This is max heap implementation 
#include<stdio.h>
#include<math.h>
//included math.h for the ceil function

int labour_max_heap(int*x, int element_count,int index){
int local_max = index;
int temp,right_index = 2*(1+index);int left_index = right_index-1;
if((x[right_index] > x[index]) && (right_index <= element_count))
	local_max = right_index;	
if ((x[left_index] > x[local_max] ) && (left_index <= element_count))
	local_max = left_index;
if(local_max != index)
{
	temp = x[local_max];
	x[local_max] = x[index];
	x[index] = temp;
	labour_max_heap (x,element_count,local_max); 
}return 0;
} 




int senior_engineer_of_max_heap (int *x,double element_count){

int temp = ceil(element_count/2-1);
for (int index=temp;index>=0;index--)
	labour_max_heap(x,element_count,index);
return 0;
}

int exhibitor(int* x,int marker){
int temp;printf("Decresing order :");int length = marker; 
while(marker >= 0){
printf("%d\t",x[0]);
temp = x[marker];
x[marker] = x[0];
x[0] = temp;
marker--;
labour_max_heap(x,marker,0);
}printf("\n Increasing order:")
	for(int i=0;i<=length;i++)
		printf("%d\t",x[i]);
return 0;
}

int main(){
int arr[] = {23,54,23,1,78,97,21,12,46,876,-9012};
senior_engineer_of_max_heap(arr,10);
exhibitor(arr,10);
return 0;} 


