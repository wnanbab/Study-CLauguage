#include <stdio.h>
#include "array.h"

// typedef struct 
// {
//     int *array;  //int类型的指针
//     int size;
// } Array;

Array array_creat(int init_size){
    Array a;
    a.size = init_size;
    //(int*) 是一种类型转换，将 malloc 返回的通用指针（void*）转换为 int* 类型的指针,因为 a.array 的类型是 int*，所以需要将 malloc 返回的指针转换为 int* 类型，以便正确赋值给 a.array。
    a.array = (int*)malloc(sizeof(int) * a.size);  //sizeof(int) * a.size 计算出需要分配的内存空间大小，以确保足够存储 a.size 个 int 类型的元素。
    return a;
}

void  array_free(Array *a){ 
    //释放创造的遍历量 *array
    free(a->array);
    a->array = NULL;
    a->size = 0;

}
int array_size(const Array *a);
int* array_at(Array *a ,int index);
void array_inflate(Array *a, int more_size)

int main(){
    Array a = array_creat(100);
    array_free(&a);
    return 0;
}