// 
//  main.c
//  Calorie Diary
//
//  Created by Eunju Cha
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cal_exercise.h"
#include "cal_diets.h"
#include "cal_healthdata.h"

#define EXERCISEFILEPATH "exercises.txt"
#define DIETFILEPATH "diets.txt"
#define HEALTHFILEPATH "health_data.txt"

static int choice;

int main() {
	// To initialize the health data object
    HealthData health_data = {0};
    
    // Tocode: to read the list of the exercises and diets
    loadExercises(EXERCISEFILEPATH);
    //if(exercise_list_size ==0) 
    //	printf("No exercises loaded..\n");
    loadDiets(DIETFILEPATH);
    //if(diet_list_size == 0)
    //	printf("No diet loaded...\n");
    
    // ToCode: to run the "Healthcare Management Systems" until all calories are used up or the user wants to exit the system
    do {
    	
		
			printf("\n=======================================================================\n");
        	printf("[Healthcare Management Systems] \n");
        	printf("1. Exercise \n");
        	printf("2. Diet \n");
        	printf("3. Show logged information \n");
        	printf("4. Exit \n");
        	printf("Select the desired number: ");
        	scanf("%d", &choice);
        	printf("=======================================================================\n");
        
        
		// ToCode: to run the sysmtem based on the user's choice
        switch (choice) {
            case 1:
            	inputExercise(&health_data);     //Input exercise
                break;
                
            case 2:
            	inputDiet(&health_data); 		// input food
                break;
                
            case 3:
            	printHealthData(&health_data);  //print healthdata
                break;
                
            case 4:
            	
    			printf("Exit the system.\n");    //end system
    			printf("=======================================================================\n");
                break;
                
            default:
                printf("[Error] Invalid option. \n");
                printf("Please try again! \n");
        }


	
    } while (choice != 4);  //4-> End system
	
	
    return 0;
}

