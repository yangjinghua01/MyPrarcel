//
// Created by 杨敬华 on 2022/12/15.
//
#include "DParcel.h"

DParcel::DParcel() {
    this->mData = static_cast<char *>(malloc(1024));

}

DParcel::~DParcel() {
    if (this->mData) {
        free(this->mData);
    }
    if (this->mData) {
        this->mData = NULL;
    }
}
void DParcel:: writeInt(int val){

}
void DParcel::setDataPosition(int mDataPos) {

}
jint DParcel:: readInt(){

}
