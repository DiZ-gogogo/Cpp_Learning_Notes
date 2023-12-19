#include<iostream>

#include<cstring>

using namespace std;

//设计一个Person类
class Person_DiZ {
private:
    int age;
    char name[32];

public:
    void getName() {
        cout << "my name is " << name << endl;
    }

    void setName(const char n[32]) {
        strcpy(this->name, n);
    }

    void getAge() {
        cout << "my age is " << age << endl;
    }

    void setAge(int age) {
        if (age <= 100 && age >= 0) {
            this->age = age;
        } else {
            cout << "your age is unsafe!! , the legal age range is 0-100" << endl;
        }
    }
};


//设计一个Person类
class PersonTeacher {
private:

    char name[32];  //不要给成员初始化
    int age;
public:
    void InitPerson(char *n, int a) {
        strcpy(name, n);
        age = a;
    }

    char *getName() {
        return name;
    }

    void setName(char *n) {
        strcpy(this->name, n);
    }

    int getAge() {
        return age;
    }

    void setAge(int age) {
        if (age <= 100 && age >= 0) {
            this->age = age;
        } else {
            cout << "your age is unsafe!! , the legal age range is 0-100" << endl;
        }
    }
};


int main(void) {


    // Person_DiZ di;
    // di.setAge(20);
    // di.getAge();
    // di.setName("di zhou");
    // di.getName();

    PersonTeacher di;
    di.InitPerson("zhoudi", (int) 18);
    di.setAge(20);
    cout << di.getAge();


    return 0;
}