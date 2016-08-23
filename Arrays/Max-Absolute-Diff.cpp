/* Max absolute diff 
 http://www.geeksforgeeks.org/maximum-absolute-difference-between-sum-of-two-contiguous-sub-arrays/
*/

#include <iostream.h>
#include <conio.h>

void max_min_left_to_right(int *elements,int length) {
	int max_so_far =elements[0];
	int current_max = elements[0];
	
	int min_so_far = elements[0];
	int current_min = elements[0];
	
	cout<<"\n";
	for(int i=1;i<length; i++) {
		
		if(elements[i]>current_max+elements[i]) {
			current_max =elements[i] ;
			current_min = elements[i-1]+elements[i];
		}
		else{
			current_max = current_max+elements[i];
			current_min =elements[i];
		}
		
		if(current_max > max_so_far) {
			max_so_far = current_max;
		}	
		if(current_min < min_so_far) {
			min_so_far = current_min;
		}
			
	};
	
	cout<<"Current Minimum : "<<min_so_far<<"\n";
	cout<<"Current Maximum : "<<max_so_far<<"\n";
}

void max_min_right_to_left(int *elements,int length) {
	int max_so_far =elements[length-1];
	int current_max = elements[length-1];
	
	int min_so_far = elements[length-1];
	int current_min = elements[length-1];
	
	cout<<"\n";
	for(int i=length-2;i>0; i--) {
		
		if(elements[i]>elements[i+1]+elements[i]) {
			current_max =elements[i] ;
			current_min = elements[i+1]+elements[i];
		}
		else{
			current_max = elements[i+1]+elements[i];
			current_min =elements[i];
		}
		
		if(current_max > max_so_far) {
			max_so_far = current_max;
		}	
		if(current_min < min_so_far) {
			min_so_far = current_min;
		}
			
	};
	
	cout<<"Current Minimum : "<<min_so_far<<"\n";
	cout<<"Current Maximum : "<<max_so_far<<"\n";
}

void max_sum_subarray(int *elements,int length) {
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
	
	cout<<"Current Maximum : "<<max_so_far<<"\n";
}
 


int main() {
	
	int test_array[] ={1,-2,-3,-4,-6,9,10,-4};
	max_min_left_to_right(test_array,8);
	max_min_right_to_left(test_array,8);
	return 1;
}