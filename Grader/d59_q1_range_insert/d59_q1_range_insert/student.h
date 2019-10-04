#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
    CP::vector<T> v;
    for (auto itr = begin(); itr != end(); itr++) {
        if (itr == position && first != end()) {
            while (first != last) {
                v.push_back(*first);
                first++;
            }
        }
        v.push_back(*itr);
        if (itr+1 == end() && position == end()) {
            while (first != last) {
                v.push_back(*first);
                first++;
            }
        }
        
    }
    clear();
    for (auto& i: v) {
        push_back(i);
    }
}

#endif
