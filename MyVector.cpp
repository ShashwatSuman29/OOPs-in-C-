#include <iostream>
using namespace std;

class Vector
{
public:
    int size;
    int capacity;
    int *arr;

    Vector()
    {
        size = 0;
        capacity = 1;
        arr = new int[1];
    }
    // add fucntion to add element in vector
    void add(int element)
    {
        if (size == capacity)
        {
            capacity *= 2;
            int *arr2 = new int[capacity];
            for (int i = 0; i < size; i++)
            {
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size++] = element;
    }
    // print function to print vector
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    // get function to get element at index
    int get(int index)
    {
        if (size == 0)
        {
            cout << "Vector is empty" << endl;
            return -1;
        }

        if (index >= size || index < 0)
        {
            cout << "Index out of range" << endl;
            return -1;
        }
        return arr[index];
    }
    // remove function to remove last element from vector
    void remove()
    {
        if (size == 0)
        {
            cout << "Vector is empty" << endl;
        }
        size--;
    }
};
int main()
{
    Vector v;
    cout << v.size << " " << v.capacity << endl;
    v.add(10);
    v.print();
    cout << v.size << " " << v.capacity << endl;
    v.add(120);
    v.print();
    cout << v.size << " " << v.capacity << endl;
    v.add(130);
    v.print();
    cout << v.size << " " << v.capacity << endl;

    v.get(10);

    v.remove();
    v.print();
}