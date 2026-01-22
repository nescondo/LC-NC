//
// Created by Nikolai Escondo on 1/22/26.
//

#include "vector.h"

vector::vector(int capacity) : capacity(capacity), size(0)
{
    arr = new int[capacity];
}

vector::~vector()
{
    delete[] arr;
}

int vector::get(int i)
{
    return arr[i];
}

void vector::set(int i, int n)
{
    arr[i] = n;
}

void vector::push_back(int n)
{
    if (size == capacity)
    {
        resize();
    }
    arr[size] = n;
    size++;
}

int vector::pop_back()
{
    if (size > 0)
    {
        size--;
    }
    return arr[size];
}

void vector::resize()
{
    capacity *= 2;
    int* newArr = new int[capacity];
    for (int i = 0; i < size; i++)
    {
        newArr[i] = arr[i];
    }
    delete[] arr;
    arr = newArr;
}

int vector::getSize()
{
    return size;
}

int vector::getCapacity()
{
    return capacity;
}