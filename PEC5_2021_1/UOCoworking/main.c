/*
* File: main.c
* Author: Eugenio Moya
* Course: 20211
* Descripción: PEC5 2021 1
*/

/* System header files */
#include <stdio.h>
#include <string.h>

/* User defined types */
typedef enum {STARTUPS, FREELANCERS, RURAL, SPECIALIZED, GENERALIST} tCoworkingType;

/* Global constants */
#define CATEGORY1 1   				//Category 1 id
#define CATEGORY2 2   				//Category 2 id
#define CATEGORY3 3   				//Category 3 id
#define MAX_CHAR_LEN 16				//Max. char len
#define SAME 0						//If the comparison is the same

/* User defined Struct */
typedef struct {
    char name[MAX_CHAR_LEN];
    char city[MAX_CHAR_LEN];
    int category;
    tCoworkingType centerType;
    float price;
    float distanceFromCityCenter;
} tCoworkingCenter;

/* Main function */
int main(int argc, char **argv){

/* Variable definition */
	char city[MAX_CHAR_LEN];
	float maxPrice;
	tCoworkingCenter bestCenter;
	
	/* Exercise 2.1 */
	tCoworkingCenter center1;
	tCoworkingCenter center2;
	tCoworkingCenter center3;

	

	/* Exercise 2.2 */	
	/* Data input Center 1 */
    printf("ENTER DATA FOR CENTER 1\n");
	printf("NAME? (A STRING) >>\n");
    scanf("%s",center1.name);
    printf("CITY? (A STRING) >>\n");
    scanf("%s",center1.city);
    printf("CATEGORY? (1-CATEGORY1, 2-CATEGORY2, 3-CATEGORY3) >>\n");
    scanf("%d",&center1.category);
    printf("CENTER TYPE? (1-STARTUPS, 2-FREELANCERS, 3-RURAL, 4-SPECIALIZED, 5-GENERALIST) >>\n");
    scanf("%u",&center1.centerType);
    printf("PRICE EUR? (A REAL) >>\n");
    scanf("%f",&center1.price);
    printf("DISTANCE TO CITY CENTER [KM]? (A REAL) >>\n");
    scanf("%f",&center1.distanceFromCityCenter);

	/* Data input Center 2 */
	printf("ENTER DATA FOR CENTER 2\n");
    printf("NAME? (A STRING) >>\n");
    scanf("%s",center2.name);
    printf("CITY? (A STRING) >>\n");
    scanf("%s",center2.city);
    printf("CATEGORY? (1-CATEGORY1, 2-CATEGORY2, 3-CATEGORY3) >>\n");
    scanf("%d",&center2.category);
    printf("CENTER TYPE? (1-STARTUPS, 2-FREELANCERS, 3-RURAL, 4-SPECIALIZED, 5-GENERALIST) >>\n");
    scanf("%u",&center2.centerType);
    printf("PRICE EUR? (A REAL) >>\n");
    scanf("%f",&center2.price);
    printf("DISTANCE TO CITY CENTER [KM]? (A REAL) >>\n");
    scanf("%f",&center2.distanceFromCityCenter);
	
	/* Data input Center 3 */
	printf("ENTER DATA FOR CENTER 3\n");
    printf("NAME? (A STRING) >>\n");
    scanf("%s",center3.name);
    printf("CITY? (A STRING) >>\n");
    scanf("%s",center3.city);
    printf("CATEGORY? (1-CATEGORY1, 2-CATEGORY2, 3-CATEGORY3) >>\n");
    scanf("%d",&center3.category);
    printf("CENTER TYPE? (1-STARTUPS, 2-FREELANCERS, 3-RURAL, 4-SPECIALIZED, 5-GENERALIST) >>\n");
    scanf("%u",&center3.centerType);
    printf("PRICE EUR? (A REAL) >>\n");
    scanf("%f",&center3.price);
    printf("DISTANCE TO CITY CENTER [KM]? (A REAL) >>\n");
    scanf("%f",&center3.distanceFromCityCenter);
	
	/* Data input */
    printf("MAX PRICE EUR? (A REAL) >>\n");
    scanf("%f",&maxPrice);

    printf("CITY? (A STRING) >>\n");
    scanf("%s",city);

	/* Exercise 2.3 */
    /* Data processing */
    if ((strcmp(center1.city, city) == SAME)&&(center1.price <= maxPrice) && ((center1.price <= center2.price)&&(center1.price <= center3.price))) {
        
		strcpy(bestCenter.name, center1.name);
		strcpy(bestCenter.city, center1.city);
		bestCenter.category = center1.category;
		bestCenter.centerType = center1.centerType;
		bestCenter.price = center1.price;
				
	} else {
		if ((strcmp(center2.city, city) == SAME) && (center2.price <= maxPrice) && ((center2.price < center1.price) || (center2.price < center3.price))) {
		
		strcpy(bestCenter.name, center2.name);
		strcpy(bestCenter.city, center2.city);
		bestCenter.category = center2.category;
		bestCenter.centerType = center2.centerType;
		bestCenter.price = center2.price;
			
		}else{
			if ((strcmp(center3.city, city) == SAME) && (center3.price <= maxPrice) && ((center3.price < center1.price) || (center3.price < center2.price))) {
			
			strcpy(bestCenter.name, center3.name);
			strcpy(bestCenter.city, center3.city);
			bestCenter.category = center3.category;
			bestCenter.centerType = center3.centerType;
			bestCenter.price = center3.price;
			}
        }
    }
	    /* Data output */
		/* Exercise 2.4 */
	printf ("RESULTS\n");
	if((strcmp(bestCenter.name, center1.name) == SAME)||(strcmp(bestCenter.name, center2.name) == SAME)||(strcmp(bestCenter.name, center3.name) == SAME)) {
		printf ("THE BEST CENTER IS:\n");
		printf ("NAME: %s\n", bestCenter.name);
		printf ("CITY: %s\n", bestCenter.city);
		printf ("CATEGORY (1-CATEGORY1, 2-CATEGORY2, 3-CATEGORY3): %d\n", bestCenter.category);
		printf ("CENTER TYPE (1-STARTUPS, 2-FREELANCERS, 3-RURAL, 4-SPECIALIZED, 5-GENERALIST): %u\n", bestCenter.centerType);
		printf ("PRICE EUR: %.2f\n", bestCenter.price);
		}else{
			printf("THERE IS NO CENTER WITH THE DESIRED CONDITIONS\n");
	}
	
	return 0;
}
