/*
to-do:
-restriction with grade added
-user being able to end program
-make this less ugly
 * */
#include <stdio.h>
#include "init.h"
int main(){
    
    int choice;

    //these are for the 1st choice
    char student;
    int gradeVal;
    int place;
	
    printf("Welcome to grades. Here you can set perform basic operations on the grades of 3 students, each having 3 distinct grade values.\n\n");
    loopStart:
        printf("Choose a command. Enter 1 to add a grade, 2 to see the grades of all students, 3 to see the average of a student, or 4 to end this program.\n");
        scanf("%d", &choice);
	printf("\n");
        if (choice == 1){
            printf("Enter 1 for student A, 2 for student B, or 3 for student C.\n");
	    scanf("%d", &student);
	    printf("\n");
	    printf("Now enter a value for the grade, from 0-100 inclusive.\n");
	    scanf("%d", &gradeVal);
	    printf("\n");
	    if (gradeVal >= 0 && gradeVal <= 100){
		goto restOfOpt1;
	        restOfOpt1:
		    printf("Lastly enter 1, 2, or 3 to set which position the grade has in the array.\n");
	            scanf("%d", &place);
	            printf("\n");
                    switch (student){
	                case 1: A[place-1] = gradeVal;  printf("Student A: {%d, %d, %d}", A[0], A[1], A[2]);
    	                break;
                        case 2: B[place-1] = gradeVal; printf("Student B: {%d, %d, %d}", B[0], B[1], B[2]);
	                break;
	                case 3: C[place-1] = gradeVal; printf("Student C: {%d, %d, %d}", C[0], C[1], C[2]);
	                break;
	    	    }
	    	    printf("\n\n");
	            goto loopStart;
	    }
	    else{
	        while (gradeVal < 0 && gradeVal > 100){
		    printf("Has to be from 0-100 inclusive");
		    scanf("%d", &gradeVal);
	        }
		goto restOfOpt1;
	    }
        }
        else if (choice == 2){
            printf("Student A: {%d, %d, %d}\n", A[0], A[1], A[2]);
	    printf("Student B: {%d, %d, %d}\n", B[0], B[1], B[2]);
	    printf("Student C: {%d, %d, %d}\n\n", C[0], C[1], C[2]);
            goto loopStart;
    	}
    	else if (choice == 3){
            printf("Enter 1 for student A, 2 for student B, or 3 for student C.\n");
	    scanf("%d", &student);
	    printf("\n");
	    switch (student){
	    	case 1: printf("Student A average: %f", (double) ((A[0] + A[1] + A[2]) / 3));
		break;
		case 2: printf("Student B average: %f", (double) ((B[0] + B[1] + B[2]) / 3));
		break;
		case 3: printf("Student C average: %f", (double) ((C[0] + C[1] + C[2]) / 3));
		break;
	    }
	    printf("\n\n");
	    goto loopStart;
        }
	else{
            printf("This session has ended. Have a good day!");
	}

}
