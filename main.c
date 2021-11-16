
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

//Structure Declaration
struct payroll
{
unsigned long long int internal_id;
char first_name[50];
char last_name[50];
char department[100];
unsigned char dob_day;
unsigned char dob_month;
unsigned short dob_year;
double monthly_salary;
};


//Function Declarations
unsigned int DepartmentsNo(struct payroll* employees, unsigned int emp_no);

//Global Variables
struct payroll* employees[5];
unsigned int emp_no = 5;



int main()
{
    strcpy(employees[0]->last_name, "Roi");
    
    
    
    
}

//Returns the number of DISTINCT departments in a struct array.
unsigned int DepartmentsNo(struct payroll* employees, unsigned int emp_no)
{
    bool is_found = false;
    int DepartmentsNo = 0;
    
    if(emp_no <= 0)
        {
            return 0;
        }
    
    for(int i = 1; i < emp_no; i++)
    {
        is_found = false;

 
        for(int j= i - 1; j >= 0; j--)
        {
            if(strcmp(employees[j].department, employees[i].department) == 0)
            {
            is_found = true;
            break;
            }
        }

        //If the department was never found before then increment department_no.
        if(is_found == false)
            {
                DepartmentsNo++;
            }
    }
    
        
    //Return number of DISTINCT departments.
    return DepartmentsNo;
}

