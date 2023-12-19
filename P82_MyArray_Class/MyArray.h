//
// Created by 24104 on 2023/12/14.
//

#ifndef CPP_QT_MYARRAY_H
#define CPP_QT_MYARRAY_H


class MyArray {
private:
    int capacity; //数组容量
    int size; //数组实际的大小
    int *addr; //数组地址首元素
public:
    //声明无参构造函数
    MyArray();

    //有参构造函数
    MyArray(int capacity);

    //析构函数
    ~MyArray();

    //尾插法插入数据
    void pushBack(int data);

    //根据位置得到数据
    int getDataByPos(int pos);

    //属该指定位置的数据
    void setDataByPos(int pos, int data);

    //获取容量
    int getCapacity();

    //获取size
    int getSize();


};


#endif //CPP_QT_MYARRAY_H
