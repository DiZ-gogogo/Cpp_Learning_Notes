//
// Created by 24104 on 2023/12/14.
//
#include <iostream>
#include "MyArray.h"

using namespace std;

//无参构造函数
MyArray::MyArray() {
    //定义实现无参构造函数
    //假设数组容量为100
    this->capacity = 100;
    //初始化数组大小默认为0
    this->size = 0;
    //根据容量个数组申请空间，int[]
    this->addr = new int[this->capacity];
}

//有参构造寒素
MyArray::MyArray(int capacity) {
    //传参设置capacity
    this->capacity = capacity;
    //初始化数组大小默认为0
    this->size = 0;
    //根据容量个数组申请空间，int[]
    this->addr = new int[this->capacity];
}

MyArray::~MyArray() {
    //析构函数
    if (this->addr != NULL) {
        //清空数据
        delete[] this->addr;
        this->addr = NULL;
    }
}


void MyArray::pushBack(int data) {

    //尾插法
    //先判断数组是否满了
    if (this->size >= this->capacity) {
        return;
    }
    //尾插法插入数据
    this->addr[this->size] = data;
    this->size++;


}

int MyArray::getDataByPos(int pos) {
    //判断位置是否有效
    //pos 0-100
    if (pos >= this->size) {
        cout << "pos is out of range !" << endl;
        return -1;
    }
    //返回数据
    return this->addr[pos];

}


void MyArray::setDataByPos(int pos, int data) {
    //判断位置是否有效
    //pos 0-100
    if (pos >= this->size || pos < 0) {
        cout << "pos is out of range !" << endl;
        return;
    }
    //返回数据
    this->addr[pos] = data;
    return;
}

int MyArray::getCapacity() {
    return this->capacity;
}


int MyArray::getSize() {
    return this->size;
}