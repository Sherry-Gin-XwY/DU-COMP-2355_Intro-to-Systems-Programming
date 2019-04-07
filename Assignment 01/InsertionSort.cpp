#include <iostream>
#include <string>
#include <array>

using namespace std;
template <class T>

int getArrSize(T& arrw)
{
    return sizeof(arrw) / sizeof(arrw[0]);
}

int main() {

    int numbers[3];
    std::array<int, 3> myints;

    //Please note that arrays in C++ are not Objects
    std::cout << "Please input " << sizeof numbers/sizeof(int) << " numbers\n";
    std::cout << "Please input " << myints.size() << " numbers\n";
    std::cout << "Please input " << getArrSize(numbers) << " numbers\n";

    //Populate array from user
    for(int i = 0; i < sizeof(numbers)/sizeof(int); i++)
    {
        std::cin >> numbers[i];
    }
    //print array before sort
    std::cout << ("Number before sort: ");

    for (int i = 0; i < getArrSize(numbers); i++)
    {
        std::cout << " " << numbers[i];
    }
    std::cout << "\n";

    for (int i = 0; i < myints.size(); i++)
    {
        int temp = numbers[i];
        int j = i-1;
        while (j >= 0 && numbers[j] > temp)
        {
            numbers[j+1] = numbers[j];
            j--;
        }
        numbers[j+1] = temp;
    }
    
    std::cout << "\n";

    std::cout << "Number after sort: ";

    for (int i = 0; i < getArrSize(numbers); i++)
    {
        std::cout << " " << numbers[i];
    }

    std::cout << "\n";

    system("PAUSE");
    return 0;
}