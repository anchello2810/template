// 18if,kjys.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

template <typename T>
class Stack
{
private:
    int num = 0;
     T* StackA = new T[num];
public:
    void Push(int x)
    {
        T* StackB = new T[num + 1];
        std::cout << "Новый элемент" << x;
        for (int i = 0; i < num; i++)
        {
            T* StackB[i] = T * StackA[i];
        }
        T* StackB[num] = x;
        delete[] T* StackB;
        num++;
        T* StackA = StackB;

    }
    int Pop(T* StackA)
    {
        return T * StackA[num + 1];
    }
    void Print()
    {
        for (int i = 0; i < num; i++)
            std::cout << *(T * StackA + i);
    }
    Stack()
    {
        delete[] T* StackA;

    }
};
int main()
{
}




