#include<iostream>

using namespace std;

class Printer {

private:
    //类内声明
    static Printer *PrinterSingleton;

private:
    //无参构造
    Printer() {
        count = 0;
        cout << "无参构造" << endl;
    };

    //拷贝构造
    Printer(const Printer &ob) {
        cout << "拷贝构造" << endl;
    };

    ~Printer() {
        cout << "析构函数" << endl;
    };

public:
    //获取唯一实例对象
    static Printer *getSingletonPrinter(void) {
        return PrinterSingleton;
    }

    //设置功能函数
    void PrintText(char *text) {
        count++;
        cout << "打印" << text << endl;
    }

    //统计任务
    int count;
};

//类内定义，指针采用new，属于类的成员，采用类名访问::
Printer *Printer::PrinterSingleton = new Printer;

int main() {

//    Printer Pobj;

    //打印任务1
    Printer *p1 = Printer::getSingletonPrinter();
    p1->PrintText("p1入职报告");
    p1->PrintText("p1体检报告");
    p1->PrintText("p1励志报告");

    //打印任务2
    Printer *p2 = Printer::getSingletonPrinter();
    p2->PrintText("p2入职报告");
    p2->PrintText("p2体检报告");
    p2->PrintText("p2励志报告");


    cout << p2->count << endl;

    return 0;
}