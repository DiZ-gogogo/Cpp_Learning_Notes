#include<iostream>

using namespace std;

class Printer {

private:
    //��������
    static Printer *PrinterSingleton;

private:
    //�޲ι���
    Printer() {
        count = 0;
        cout << "�޲ι���" << endl;
    };

    //��������
    Printer(const Printer &ob) {
        cout << "��������" << endl;
    };

    ~Printer() {
        cout << "��������" << endl;
    };

public:
    //��ȡΨһʵ������
    static Printer *getSingletonPrinter(void) {
        return PrinterSingleton;
    }

    //���ù��ܺ���
    void PrintText(char *text) {
        count++;
        cout << "��ӡ" << text << endl;
    }

    //ͳ������
    int count;
};

//���ڶ��壬ָ�����new��������ĳ�Ա��������������::
Printer *Printer::PrinterSingleton = new Printer;

int main() {

//    Printer Pobj;

    //��ӡ����1
    Printer *p1 = Printer::getSingletonPrinter();
    p1->PrintText("p1��ְ����");
    p1->PrintText("p1��챨��");
    p1->PrintText("p1��־����");

    //��ӡ����2
    Printer *p2 = Printer::getSingletonPrinter();
    p2->PrintText("p2��ְ����");
    p2->PrintText("p2��챨��");
    p2->PrintText("p2��־����");


    cout << p2->count << endl;

    return 0;
}