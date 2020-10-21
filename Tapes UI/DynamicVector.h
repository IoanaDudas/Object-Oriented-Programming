#pragma once

#include "Tape.h"

typedef Tape TElem;

#define DefaultCapacity 32

template <typename TemplateObject>
class DynamicVector
{
private:
    TemplateObject* elements;
    int size;
    int capacity;
public:
    //default constructor
    DynamicVector(int capacity = DefaultCapacity);

    //copy constructor
    DynamicVector(const DynamicVector& dynamicVector);

    //destructor
    ~DynamicVector();

    //assignment operator for a Dynamic Vector
    DynamicVector& operator=(const DynamicVector& dynamicVector);

    //adds an element to the current Dynamic Vector
    void add(const TemplateObject& element);

    //removes an element from a given position
    void removeAtIndex(int index);

    //getter for size
    int getSize() const;

    //returns the element found at a given index
    TemplateObject getIndex(int index);

    //modifies the element from a given index
    void setAtIndex(int index, const TemplateObject& newElement);

private:
    //resize the current Dynamic Vector
    void resize(double factor = 2);
};

template <typename TemplateObject>
DynamicVector<TemplateObject>::DynamicVector(int capacity)
{
    this->size = 0;
    this->capacity = capacity;
    this->elements = new TemplateObject[this->capacity];
}

template <typename TemplateObject>
DynamicVector<TemplateObject>::DynamicVector(const DynamicVector<TemplateObject>& dynamicVector)
{
    this->size = dynamicVector.size;
    this->capacity = dynamicVector.capacity;
    this->elements = new TemplateObject[this->capacity];
    for (int i = 0; i < this->size; ++i)
        this->elements[i] = dynamicVector.elements[i];
}

template <typename TemplateObject>
DynamicVector<TemplateObject>::~DynamicVector()
{
    delete[] this->elements;
}

template <typename TemplateObject>
DynamicVector<TemplateObject>& DynamicVector<TemplateObject>::operator=(const DynamicVector<TemplateObject>& dynamicVector)
{
    if (this == &dynamicVector)
        return *this;

    this->size = dynamicVector.size;
    this->capacity = dynamicVector.capacity;

    delete[] this->elements;
    this->elements = new TemplateObject[this->capacity];
    for (int i = 0; i < this->size; ++i)
        this->elements[i] = dynamicVector.elements[i];

    return *this;
}

template <typename TemplateObject>
void DynamicVector<TemplateObject>::add(const TemplateObject& element)
{
    if (this->size == this->capacity)
        this->resize();

    this->elements[this->size] = element;
    this->size++;
}

template <typename TemplateObject>
void DynamicVector<TemplateObject>::removeAtIndex(int index)
{
    for (int i = index; i < this->size - 1; ++i)
        this->elements[i] = this->elements[i + 1];

    this->size--;
}

template <typename TemplateObject>
void DynamicVector<TemplateObject>::resize(double factor)
{
    this->capacity = static_cast<int>(this->capacity * factor);

    TemplateObject* auxiliaryDynamicVector = new TemplateObject[this->capacity];
    for (int i = 0; i < this->size; i++)
        auxiliaryDynamicVector[i] = this->elements[i];

    delete[] this->elements;
    this->elements = auxiliaryDynamicVector;
}

template <typename TemplateObject>
int DynamicVector<TemplateObject>::getSize() const
{
    return this->size;
}

template <typename TemplateObject>
TemplateObject DynamicVector<TemplateObject>::getIndex(int index)
{
    return this->elements[index];
}

template <typename TemplateObject>
void DynamicVector<TemplateObject>::setAtIndex(int index, const TemplateObject& newElement)
{
    this->elements[index] = newElement;
}