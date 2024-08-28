#include <stdio.h>
#include <string.h>
#define NAME_LENGTH 50
struct emp {
    char first_name[NAME_LENGTH];
    char last_name[NAME_LENGTH];
    double monthly_salary;
};
void emp_init(struct emp* e, const char* first_name, const char* last_name, double salary) {
    strncpy(e->first_name, first_name, NAME_LENGTH);
    strncpy(e->last_name, last_name, NAME_LENGTH);
    e->monthly_salary = salary;
}
void set_salary(struct emp* e, double salary) {
    if (salary > 0) {
        e->monthly_salary = salary;
    }
}
void emp_display(struct emp* e) {
    printf("Employee: %s %s\n", e->first_name, e->last_name);
    printf("Monthly Salary: $%.2f\n", e->monthly_salary);
    printf("Yearly Salary: $%.2f\n", e->monthly_salary * 12);
}
void give_raise(struct emp* e, double percentage) {
    if (percentage > 0) {
        e->monthly_salary += e->monthly_salary * (percentage / 100.0);
    }
}

int main() {
    struct emp emp1, emp2;
    emp_init(&emp1, "John", "Doe", 3000.0);
    emp_init(&emp2, "Jane", "Smith", 3500.0);
    printf("Before raise:\n");
    emp_display(&emp1);
    emp_display(&emp2);
    give_raise(&emp1, 10);
    give_raise(&emp2, 10);
    printf("\nAfter 10%% raise:\n");
    emp_display(&emp1);
    emp_display(&emp2);
    return 0;
}
