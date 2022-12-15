//
// Created by 杨敬华 on 2022/12/15.
//

#ifndef MYPRARCEL_DPARCEL_H
#define MYPRARCEL_DPARCEL_H


#include "jni.h"
#include "malloc.h"

class DParcel {
private:
    char *mData = 0; //DParcel 对象共享内存地址
    int mDataPos = 0; //Dparcel 对象共享内存的首地址的指针的位置


    int len = 0;
public:
    DParcel();

    virtual ~DParcel();

    void writeInt(int val);

    void setDataPosition(int mDataPos);

    jint readInt();

    void changePos(int val);

};

#endif //MYPRARCEL_DPARCEL_H
