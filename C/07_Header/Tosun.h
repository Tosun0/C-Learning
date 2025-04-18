enum { Normal, Fire, Elec};

struct Tosun {
    char name [20];
    int age;
    int type;
};

struct Tosun CreateTosun(char *name, int age, int type);
void PrintTosun(struct Tosun *player0);