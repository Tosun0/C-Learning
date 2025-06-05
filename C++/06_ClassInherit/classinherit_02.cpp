#include <iostream>
#include <string>

class Employee {
    std::string name;
    std::string position;
    int age;
    int rank;
    bool over_DM;
    int year_of_service;

    public:
    Employee(std::string name, int age, std::string position, int rank, bool is_DM, int year_of_service)
        : name(name), age(age), position(position), rank(rank), over_DM(over_DM), year_of_service(year_of_service) {}

    Employee(const Employee& employee) {
        name = employee.name;
        age = employee.age;
        position = employee.position;
        rank = employee.rank;
        over_DM = employee.over_DM;
        year_of_service = employee.year_of_service;
    }

    int calculate_pay() {
        if(over_DM = true) {
            return 200 + rank * 50 + year_of_service * 5;
        }

        else return 200 + rank * 50;
    }

    void print_info() {
        std::cout << name << " (" << position << ", " << age << ") ==> " << calculate_pay() << std::endl;
    }
};

class EmployeeList {

    int alloc_employee;
    int current_employee;
    Employee** employee_list;

    public:
    EmployeeList(int alloc_employee) : alloc_employee(alloc_employee) {
        employee_list = new Employee*[alloc_employee];
        current_employee = 0;
    }

    void add_employee(Employee* employee) {
        employee_list[current_employee] = employee;
        current_employee++;
    }

    void current_employee_num() {
        std::cout << "The current number of employee is " << current_employee << "." << std::endl;
    }

    void print_employee_info() {
        int total_pay = 0;
        for(int i = 0; i < current_employee; i++) {
            employee_list[i]->print_info();
            total_pay += employee_list[i]->calculate_pay();
        }
        std::cout << "Total monthly pay is " << total_pay << std::endl;
    }

    ~EmployeeList() {
        for(int i = 0; i < current_employee; i++) {
        delete employee_list[i];
        }
    }
};

int main() {
    EmployeeList emp_list(10);
    EmployeeList* pemp_list = &emp_list;
    
    bool overDM = true;
    bool underDM = false;

    emp_list.add_employee(new Employee("Jaesuk", 41, "General Manager", 7, overDM, 10));
    emp_list.add_employee(new Employee("Myeongsu", 43, "Deputy Manager", 5, overDM, 10));
    emp_list.add_employee(new Employee("Junha", 43, "Senior Manager", 4, underDM, 10));
    emp_list.add_employee(new Employee("Hyeongdon", 36, "Manager", 2, underDM, 5));
    emp_list.add_employee(new Employee("Hongcheol", 34, "Staff", 1, underDM, 2));
    emp_list.add_employee(new Employee("Haha", 34, "Staff", 1, underDM, 2));
    emp_list.add_employee(new Employee("Gill", 36, "Intern", -2, underDM, 1));

    pemp_list->print_employee_info();

    getchar(); getchar();
}

//283