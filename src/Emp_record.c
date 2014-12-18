#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct employee
{ int id;
  char name[10];
  float sal;
} EMP; 

void init_emp_rec(EMP out_rec[]);
void print_emp_rec(EMP out_rec[]);

void emp_recordMain(int argc, const char** argv, EMP out_rec[])
{
	EMP emp_rec[4];
	
	int i,j;
	
	i=0;
	j=1;
  
    //printf("Inside emp_recordMain\n");
    
    //printf("Val is %d\n", atoi(argv[i+1]));
   
    if (argc < 2)
    {
    	for (i=0; i<4; i++)
    	{
    		scanf("%d", &emp_rec[i].id);
    		scanf("%s", emp_rec[i].name);
    		scanf("%f", &emp_rec[i].sal);
    	}
    
    }
    else
    {
    	while (argv[j] != NULL && i < 4)
		{
	
			emp_rec[i].id = atoi(argv[j]);
			j++;
			strcpy(emp_rec[i].name, argv[j]);
			j++;
			emp_rec[i].sal = atof(argv[j]);
			j++;
		
//			printf("Emp id is %d\n", emp_rec[i].id);
			i++;
		}
    }

	j=0;
	
	for (i=0; i<4; i++)
	{
		if (emp_rec[i].sal >= 10000)
		{
			out_rec[j] = emp_rec[i];
			j++;
		}
	}

/*
	if(argc == 3) {
		printf("Hello %s %s", argv[1], argv[2]); 
	} else {
		char first[50], second[100];
		
		printf("Enter first name: ");
		scanf("%s", first);
		
		printf("Enter second name: ");
		char ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        fgets(second, 80, stdin);

        int i = strlen(second)-1;
        if( second[i] == '\n')
        second[i] = '\0';
		
		printf("Hello %s %s", first, second);
	}
*/
}

void init_emp_rec(EMP out_rec[])
{
	int i;
	
    memset(out_rec, 0, sizeof(EMP)*4);
    
 /*
    printf("After init id is %d \n", out_rec[0].id);
    printf("After init name is %s\n", out_rec[0].name);
    printf("After init sal is %f\n", out_rec[0].sal);
 */ 
	
}
void print_emp_rec(EMP out_rec[])
{
	int i;
	
	static int j;
	
	for (i=0; i<4; i++)
	{
		if (out_rec[i].id == 0)
			return;
		if (j == 0)
		{
		//	printf("The employees with Salary greater than 10000 are:\n");
			j++;
		}
		printf ("%d %s %f", out_rec[i].id, out_rec[i].name,out_rec[i].sal);
		//printf ("%d %s %f\n", out_rec[i].id, out_rec[i].name, out_rec[i].sal);
	}
}



#ifndef __CXX_TEST_MAIN__

int main(int argc, const char** argv){
   	EMP out_rec[4];
	
	init_emp_rec(out_rec);
	
	emp_recordMain(argc, argv, out_rec);
	
	print_emp_rec(out_rec);
   
   
   // emp_recordMain(argc, argv);
   // return 0;
}

#endif