#include <iostream>

class Employee {
    protected:
    std::string name;
    int age;
    std::string position;
    int rank;

    public:

    Employee() {}

    Employee(std::string name, int age, std::string position, int rank)
        : name(name), age(age), position(position), rank(rank) {}

    Employee(const Employee& employee) {
        name = employee.name;
        age = employee.age;
        position = employee.position;
        rank = employee.rank;
    }

    virtual void print_info() {
        std::cout << name << " (" << position << ", "
            << age << ") ==> " << calculate_pay() <<std::endl;
    }

    virtual int calculate_pay() { return 200 + rank * 50; }
};

class Manager : public Employee {
    int year_of_service;

    public:

    Manager() : Employee() {}

    Manager(std::string name, int age, std::string position, int rank, int year_of_service)
        : Employee(name, age, position, rank), year_of_service(year_of_service) {}

    Manager(const Manager& manager) {
        name = manager.name;
        age = manager.age;
        position = manager.position;
        rank = manager.rank;
        year_of_service = manager.year_of_service;
    }

    void print_info() override {
        std::cout << name << " (" << position << ", " << "YoS : " << year_of_service << ", "
            << age << ") ==> " << calculate_pay() << std::endl;
    }

    int calculate_pay() override { return 200 + rank * 50 + 5 * year_of_service; }
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

    int current_employee_num() { return current_employee; }

    void print_employee_info() {
        int total_pay = 0;
        for (int i = 0; i < current_employee; i++) {
            employee_list[i]->print_info();
            total_pay += employee_list[i]->calculate_pay();
        }

        std::cout << "Total monthly pay : " << total_pay << std::endl;
    }

    ~EmployeeList() {
        for (int i = 0; i < current_employee; i++) {
            delete employee_list[i];
        }

        delete employee_list;
    }
};

int main() {
    EmployeeList emp_list(10);
    emp_list.add_employee(new Manager("Jaesuk", 41, "General Manager", 7, 12));
    emp_list.add_employee(new Manager("Myeongsu", 43, "Deputy Manager", 5, 15));
    emp_list.add_employee(new Manager("Junha", 43, "Senior Manager", 4, 13));
    emp_list.add_employee(new Employee("Hyeongdon", 36, "Manager", 2));
    emp_list.add_employee(new Employee("Hongcheol", 34, "Staff", 1));
    emp_list.add_employee(new Employee("Haha", 34, "Staff", 1));
    emp_list.add_employee(new Employee("Gill", 36, "Intern", -2));

    emp_list.print_employee_info();

    getchar(); getchar();

    return 0;
} //321
