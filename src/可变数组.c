#include <stdio.h>
#include "array.h"

// typedef struct 
// {
//     int *array;  //int���͵�ָ��
//     int size;
// } Array;

Array array_creat(int init_size){
    Array a;
    a.size = init_size;
    //(int*) ��һ������ת������ malloc ���ص�ͨ��ָ�루void*��ת��Ϊ int* ���͵�ָ��,��Ϊ a.array �������� int*��������Ҫ�� malloc ���ص�ָ��ת��Ϊ int* ���ͣ��Ա���ȷ��ֵ�� a.array��
    a.array = (int*)malloc(sizeof(int) * a.size);  //sizeof(int) * a.size �������Ҫ������ڴ�ռ��С����ȷ���㹻�洢 a.size �� int ���͵�Ԫ�ء�
    return a;
}

void  array_free(Array *a){ 
    //�ͷŴ���ı����� *array
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