#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
  //write something here
    idx = (idx + mSize) % mSize;
  // you need to return something
    return mData[(mFront+idx) % mCap];
}

#endif
