//
// Created by Nikolai Escondo on 1/22/26.
//

#ifndef LC_NC_VECTOR_H
#define LC_NC_VECTOR_H


class vector
{
private:
    int* arr;
    int size;
    int capacity;
public:
    vector(int capacity);
    ~vector();
    int get(int i);
    void set(int i, int n);
    void push_back(int n);
    int pop_back();
    void resize();
    int getSize();
    int getCapacity();
};


#endif //LC_NC_VECTOR_H