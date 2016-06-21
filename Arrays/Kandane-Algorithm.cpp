#include<iostream.h>
#include<conio.h>

void largest_sum_subarray(int *elements,int length) {
	int max_so_far =elements[0];
	int current_max = elements[0];
	cout<<"\n";
	for(int i=1;i<length; i++) {
		
		
		if(elements[i]>elements[i-1]+elements[i]) {
			current_max =elements[i] ;
		}
		else{
			current_max = elements[i-1]+elements[i];
		}
		if(current_max > max_so_far) {
			max_so_far = current_max;
		}
			
	};
	
	cout<<"Max Sum of Contagious sub array is:"<<max_so_far<<"\n";
}
int main() {
	

	int elements[] ={-2, -3, 4, -1, -2, 1, 5, -3};
	largest_sum_subarray(elements,8);
	return 0;
}