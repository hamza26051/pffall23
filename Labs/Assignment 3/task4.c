/*
 * Creator: Hamza Sheikh
 *    Date: 8/12/23
 *    Desc: Displays the highest salary employees and total salaries for each department
 */






#include <stdio.h>
#include <string.h>

struct workers {
    char id[10];
    char first_name[10];
    char last_name[10];
    float salary;
    char joining_date[20];
    char department[10];
};

struct title {
    int worker_ref_id;
    char worker_title[15];
    char affected_from[20];
};

struct bonus {
    int worker_ref_id;
    char bonus_date[20];
    int bonus_amount;
};

int main() {
	printf("my name is Hamza Sheikh \n");
    int i;
    float totalsalary_hr = 0;
    float totalsalary_Account = 0;
    float totalsalary_Admin = 0;
    int highcount_hr = -1; 
    int highcount_admin = -1;
    int highcount_account = -1;

    float highsalary_hr = 0;
    float highsalary_Admin = 0;
    float highsalary_Account = 0;

    struct workers Worker[8] = {
        {"001", "Monika", "Arora", 100000, "2014-02-20 09:00:00", "HR"},
        {"002", "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
        {"003", "Vishal", "Singhal", 300000, "2014-02-20 09:00:00", "HR"},
        {"004", "Amitabh", "Singh", 500000, "2014-02-20 09:00:00", "Admin"},
        {"005", "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
        {"006", "Vipul", "Dewan", 200000, "2014-06-11 09:00:00", "Account"},
        {"007", "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Account"},
        {"008", "Geetika", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"},
    };

    for (i = 0; i < 8; i++) {
        if (strcmp(Worker[i].department, "HR") == 0) {
            totalsalary_hr += Worker[i].salary;
            if (Worker[i].salary > highsalary_hr) {
                highsalary_hr = Worker[i].salary;
                highcount_hr = i;
            }
        } else if (strcmp(Worker[i].department, "Admin") == 0) {
            totalsalary_Admin += Worker[i].salary;
            if (Worker[i].salary > highsalary_Admin) {
                highsalary_Admin = Worker[i].salary;
                highcount_admin = i;
            }
        } else if (strcmp(Worker[i].department, "Account") == 0) {
            totalsalary_Account += Worker[i].salary;
            if (Worker[i].salary > highsalary_Account) {
                highsalary_Account = Worker[i].salary;
                highcount_account = i;
            }
        }
    }

    printf("Total Salary of Each Department \n\n");
    printf("HR: %f \n", totalsalary_hr);
    printf("Admin: %f \n", totalsalary_Admin);
    printf("Account: %f \n \n \n", totalsalary_Account);

    printf("Workers having Maximum salary from each department \n\n");
    if (highcount_hr != -1) {
        printf("%s | %s | %s | %f | %s | %s \n", Worker[highcount_hr].id, Worker[highcount_hr].first_name,
               Worker[highcount_hr].last_name, Worker[highcount_hr].salary, Worker[highcount_hr].joining_date,
               Worker[highcount_hr].department);
    }
    if (highcount_admin != -1) {
        printf("%s | %s | %s | %f | %s | %s \n", Worker[highcount_admin].id, Worker[highcount_admin].first_name,
               Worker[highcount_admin].last_name, Worker[highcount_admin].salary, Worker[highcount_admin].joining_date,
               Worker[highcount_admin].department);
    }
    if (highcount_account != -1) {
        printf("%s | %s | %s | %f | %s | %s \n", Worker[highcount_account].id, Worker[highcount_account].first_name,
               Worker[highcount_account].last_name, Worker[highcount_account].salary,
               Worker[highcount_account].joining_date, Worker[highcount_account].department);
    }

    return 0;
}

