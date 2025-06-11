#include <iostream>
#include <string>
using namespace std;

class Table;
class Cell {
    Table* table;
    std::string data;
    int x, y;
    
    public:
    Cell(const std::string& data) : data(data){};
};

class Table {
    Cell*** data_base;
    
    public:
    virtual std::string print_table() = 0;
    void reg_cell(Cell* c, int row, int col);
    std::string get_cell_std::string(int row, int col);

    ~Table();
};

ostream& operator<<(ostream& o, Table& t) {
    o << t.print_table();
}