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


