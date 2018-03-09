// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/UnoCore/1.6.0/Source/Uno/Array.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public sealed class Array :9
// {
uType* Array_typeof();
void Array__Copy_fn(uType* __type, uArray* sourceArray, int32_t* sourceIndex, uArray* destinationArray, int32_t* destinationIndex, int32_t* length);
void Array__Copy1_fn(uType* __type, uArray* sourceArray, uArray* destinationArray, int32_t* length);
void Array__QuickSort_fn(uType* __type, uArray* data, uDelegate* comparison, int32_t* left, int32_t* right);
void Array__ShellSort_fn(uType* __type, uArray* data, uDelegate* comparison, int32_t* left, int32_t* right);
void Array__Sort_fn(uType* __type, uArray* elements, int32_t* index, int32_t* length, uDelegate* comparison);
void Array__Sort1_fn(uType* __type, uArray* elements, uDelegate* comparison);
void Array__Swap_fn(uType* __type, uArray* data, int32_t* a, int32_t* b);

struct Array
{
    static void Copy(uType* __type, uArray* sourceArray, int32_t sourceIndex, uArray* destinationArray, int32_t destinationIndex, int32_t length);
    static void Copy1(uType* __type, uArray* sourceArray, uArray* destinationArray, int32_t length);
    static void QuickSort(uType* __type, uArray* data, uDelegate* comparison, int32_t left, int32_t right);
    static void ShellSort(uType* __type, uArray* data, uDelegate* comparison, int32_t left, int32_t right);
    static void Sort(uType* __type, uArray* elements, int32_t index, int32_t length, uDelegate* comparison);
    static void Sort1(uType* __type, uArray* elements, uDelegate* comparison);
    static void Swap(uType* __type, uArray* data, int32_t a, int32_t b);
};
// }

}} // ::g::Uno
