#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <ctype.h>

int main(int argc, char* argv[]){
	printf("Welcome to Right Triangles\n");
	printf("This software was built by and maintained by Systems Programmer Sarah Glover.\n");
	
	/****************getting nano*****************/
	time_t current_linux_time;
 	current_linux_time = time(NULL);
 	printf("The time now is %lu .0 ns AE.\n",current_linux_time); 
	
	/***********************getting the month string********************/
	struct tm * broken = localtime(&current_linux_time);
 if(broken == NULL)
     printf("A call to function gmtime failed.\n");
	
	switch(broken->tm_mon) { //printing the month name
	case 0: printf("Today is January");
	break;
	case 1: printf("Today is Feburary");
	break;
	case 2: printf("Today is march");
	break; 
	case 3: printf("Today is april");
	break; 
	case 4: printf("Today is may");
	break;
	case 5: printf("Today is june");
	break;
	case 6: printf("Today is july");
	break;
	case 7: printf("Today is august");
	break;
	case 8: printf("Today is september");
	break; 
	case 9: printf("Today is october");
	break;
	case 10: printf("Today is november");
	break; 
	case 11: printf("Today is December");
	break; 
	default: printf("Today is an unknown");
	break;
}//end of switch

	printf(" %02d,", broken->tm_mday); //printing #day
	printf(" %4d at ", broken->tm_year+1900); //printing the year

	if(broken->tm_hour>=12){ //printing the time
		printf("%02d: %02d pm\n", broken->tm_hour-12, broken->tm_min);
	}else{
		printf("%02d: %02d am\n", broken->tm_hour, broken->tm_min);
	}
	
	printf("This program will manage all of your right triangles.\n");
	printf("Please enter the lengths of the two sides of the triangle.\n");
	printf("Enter the first number.\n"); 

/******************** INSERTTING VALUES TESTING ***************/ // NEED TO RECHECK!!
	double num1; 
	scanf("%lf",&num1);
	if(num1 != (double)num1) {
    printf("try again\n");
	}else{
	printf("good job, enter another number. \n");
	}//else of else 

	double num2; 
	scanf("%lf",&num2);
	if(num2 != (double)num2) {
    printf("try again\n");
	}else{
	printf("thank you for your numbers. \n");
	}//end of else 

/*************finding and printing  area****************/

	double total_area; 
	total_area = (num1*num2)/2.0;
	printf("The area for this triangle is %lf", total_area);
	printf(" square units.\n");

/*************finding and printing  perimeter****************/
	//double total_p; 
	//total_p=   // add all the sides! but there are only 2 sides given...?



/* THE TO DO LIST?
	// find the perimeter 
	printf("The perimeter of the same triangle is ____ linear units. \n"); //display perimeter
	printf("have a nice day.");
	printf("An integer 0 will be sent to the operating systme as a signal of successful execution. bye. \n"); 

*/
	return 0; 
}//end of main