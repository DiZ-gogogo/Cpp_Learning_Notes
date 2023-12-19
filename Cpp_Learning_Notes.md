## Cpp 学习录像，图文教程
C++ 学习路线：1 2 3 4

1《C++自学精简实践教程 目录(必读)》
https://zhuanlan.zhihu.com/p/657345052
一般有基础的最快两天刷完。0基础的一到两周。里面有22个代码填空形式的作业。每个作业做几十行，最后一个作业两百行。

2《C++数据结构与算法实现（目录）》
https://zhuanlan.zhihu.com/p/657349014
每个作业自带测试用例和内存泄露检测，几百行代码。但是要填写的代码量一般只需要几行到十几行。

3 《Qt入门实战教程》https://zhuanlan.zhihu.com/p/662800552
前期立足入门，后期实战小项目，入门主要以Qt官方案例为主，由简单到复杂，带你刷。

4 刷题leetcode 100题以上。

## Cpp 类与对象
要求：设计立方体类(Cube)，求出立方体的面积(2ab +2ac +2bc)和体积(a* b*c)，
分别用全局函数和成员函数判断两个立方体是否相等。
```c++
/*

设计立方体类(Cube)，求出立方体的面积(2ab +2ac +2bc)和体积(a* b*c)，
分别用全局函数和成员函数判断两个立方体是否相等。

*/

#include<iostream>
#include<cstring>
using namespace std;


//设计一个Cube类
class CubeTeacher
{
private:

    int l;  //不要给成员初始化
    int w;
    int h;
public:
    void setL(int len){
       l=len;
    }
    void setW(int wid){
        w=wid;
    }
    void setH(int hei){
        h=hei;
    }
 

   
    int getL(){
        return l;
    }
    int getW(){
        return w;
    }
    int getH(){
        
         return h;
    }

    int caculateArea(){
        return 2*l*w+2*l*h+2*w*h;
    }
    

    int caculateVolume(){
        return w*h*l;
    }

};


int main(){

    CubeTeacher cub;

    cub.setH(10);
    cub.setW(10);
    cub.setL(10);
    
    CubeTeacher cub1;
    cub1.setH(10);
    cub1.setW(10);
    cub1.setL(10);
    
    cout<<"cub area is "<< cub.caculateArea()<<endl;
    cout<<"cub volume is "<< cub.caculateVolume()<<endl;
    return 0;
}

```
运行结果：

![1702367380268](D:\Code\CPlusPlus\CPP_QT\Cpp_Learning_Notes.assets\1702367380268.png)


## Cpp 单例模式

设计步骤：

![1702367130709](D:\Code\CPlusPlus\CPP_QT\Cpp_Learning_Notes.assets\1702367130709.png)


```c++
//打印机举例
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
    std::cout << "hello word" << std::endl;
    return 0;
}
```
运行结果：

![1702367011566](D:\Code\CPlusPlus\CPP_QT\Cpp_Learning_Notes.assets\1702367011566.png)

