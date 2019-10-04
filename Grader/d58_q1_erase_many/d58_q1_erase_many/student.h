#include "vector.h"

#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
    CP::vector<T> v(*this);
    clear();
    int z = 0;
    for (int i = 0; i < v.size(); i++) {
        if (i < pos.size() && i == pos[z]) {
            z++;
        }
        else push_back(v[i]);
    }
}

#endif
