#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 员工结构体
typedef struct {
    char* name;
    double (*get_salary)(void*, double, double);
    char type; // 'E' 表示普通员工, 'S' 表示销售员
} Employee;

// 销售员结构体，包含员工基本信息和额外的奖金
typedef struct {
    Employee base;
    double bonus;
} Salesperson;

// 获取员工姓名
char* get_name(Employee* emp) {
    return emp->name;
}

// 普通员工计算薪水的函数
double employee_get_salary(void* emp_ptr, double hours, double pay_rate) {
    return hours * pay_rate;
}

// 销售员计算薪水的函数
double salesperson_get_salary(void* sp_ptr, double hours, double pay_rate, double bonus) {
    Salesperson* sp = (Salesperson*)sp_ptr;
    return hours * pay_rate + bonus;
}

// 创建普通员工
Employee* create_employee(const char* name) {
    Employee* emp = (Employee*)malloc(sizeof(Employee));
    if (!emp) {
        fprintf(stderr, "内存分配失败\n");
        exit(EXIT_FAILURE);
    }
    
    emp->name = strdup(name);
    if (!emp->name) {
        fprintf(stderr, "内存分配失败\n");
        free(emp);
        exit(EXIT_FAILURE);
    }
    
    emp->get_salary = employee_get_salary;
    emp->type = 'E';
    
    return emp;
}

// 创建销售员
Salesperson* create_salesperson(const char* name) {
    Salesperson* sp = (Salesperson*)malloc(sizeof(Salesperson));
    if (!sp) {
        fprintf(stderr, "内存分配失败\n");
        exit(EXIT_FAILURE);
    }
    
    Employee* emp = &sp->base;
    emp->name = strdup(name);
    if (!emp->name) {
        fprintf(stderr, "内存分配失败\n");
        free(sp);
        exit(EXIT_FAILURE);
    }
    
    emp->get_salary = (double (*)(void*, double, double))salesperson_get_salary;
    emp->type = 'S';
    sp->bonus = 0.0; // 默认奖金为0
    
    return sp;
}

// 释放员工内存
void free_employee(Employee* emp) {
    if (emp) {
        free(emp->name);
        free(emp);
    }
}

// 释放销售员内存
void free_salesperson(Salesperson* sp) {
    if (sp) {
        free(sp->base.name);
        free(sp);
    }
}

int main() {
    Employee* e1 = create_employee("小丸子");
    Salesperson* e2 = create_salesperson("小红豆");
    
    printf("员工 %s 本月的薪水为 %.2f\n", get_name(e1), e1->get_salary(e1, 120, 150));
    
    // 对于销售员，我们需要传入奖金参数
    // 注意：这里使用了函数指针的强制类型转换以适应不同的参数列表
    printf("员工 %s 本月薪水为 %.2f\n", 
           get_name(&e2->base), 
           ((double (*)(void*, double, double, double))e2->base.get_salary)(e2, 120, 150, 3000));
    
    free_employee(e1);
    free_salesperson(e2);
    
    return 0;
}