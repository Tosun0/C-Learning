#ifndef UTILS_H
#define UTILS_H
#endif

#include <string>
using std::string;

namespace MyExcel {
    class Vector {
        string* data;
        int capacity;
        int length;

        public:
        Vector(int n = 1); //디폴트 인자 / 클래스 내부 함수나 함수 본체 한 곳에서만 선언

        void push_back(string s);

        string operator[](int i);

        void remove(int x);

        int size();

        ~Vector();
    };

    void Vector::push_back(string s) {
        if (capacity <= length) {
            string* temp = new string[capacity * 2];
            for (int i = 0; i < length; i++) {
                temp[i] = data[i];
            }

            delete[] data;
            data = temp;
            capacity *= 2;
        }

        data[length] = s;
        length++;
    }

    string Vector::operator[](int i) { return data[i]; }

    void Vector::remove(int x) {
        for (int i = x + 1; i < length; i++) {
            data[i - 1] = data[i];
        }
        length--;
    }

    int Vector::size() { return length; }

    Vector::~Vector() {
        if (data) {
            delete[] data;
        }
    }

    class Stack {
        struct Node {
            Node* prev;
            string s;

            Node(Node* prev, string s) : prev(prev), s(s) {}
        };

        Node* current;
        Node start;

        public:
        Stack();

        // 최상단에 새로운 원소 추가
        void push(string s);

        // 최상단의 원소를 제거하고 반환
        string pop();

        // 스택이 비어있는 지의 유무 반환
        string peek();

        bool is_empty();

        ~Stack();
    };
};

//378까지 ~ 409남음