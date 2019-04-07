#include <iostream>

int main() {
    
    //1.
    std::cout << "The size of bool is : " << sizeof(bool) << " bytes \n";
    
    std::cout << "The size of char is : " << sizeof(char) << " bytes \n";

    std::cout << "The size of short is : " << sizeof(short) << " bytes \n";

    std::cout << "The size of int is : " << sizeof(int) << " bytes \n";

    std::cout << "The size of long is " << sizeof(long) << " bytes \n";

    std:: cout << "The size of long long is " << sizeof(long long) << " bytes \n";

    std::cout << "The size of float is " << sizeof(float) << " bytes \n";

    std::cout << "The size of double is " << sizeof(double) << " bytes \n";

    std::cout << "The size of long double is " << sizeof(long double) << " bytes \n";

    ////////////////////////////////////////////////////////////////////////////////

    std::cout << "The size of int8_t is " << sizeof(int8_t) << " bytes \n";

    std::cout << "The size of int16_t is " << sizeof(int16_t) << " bytes \n";

    std::cout << "The size of int32_t is " << sizeof(int32_t) << " bytes \n";

    std::cout << "The size of int64_t is " << sizeof(int64_t) << " bytes \n";

    std::cout << "\n";

    ////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////

    //2.

    int number = 32768;

    int8_t x8x = number;
    std::cout << "x8x = " << std::dec << x8x << "\n";
    std::cout << "x8x = " << std::hex << x8x << "\n";

    int16_t x16x = number;
    std::cout << "x16 = " << std::dec << x16x << "\n";
    std::cout << "x16 = " << std::hex << x16x << "\n";

    int32_t x32x = number;
    std::cout << "x32x = " << std::dec << x32x << "\n";
    std::cout << "x32x = " << std::hex << x32x << "\n";

    int64_t x64x = number;
    std::cout << "x64x = " << std::dec << x64x << "\n";
    std::cout << "x64x = " << std::hex << x64x << "\n";


    std::cout << std::dec;

    std::cout << "\n";

    ////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////

    //3. 

    int8_t x = 200;
    int8_t y = 200;

    int8_t z = 0;

    //z = x + y;

    std::cout << "Overflow : " << " ! \n";

    std::cout << "\n";

    ////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////

    //4. 

    uint32_t uMaxx = 0xFFFFFFFF;
    uint32_t uMinx = 0x0;
    std::cout << "The Maximum is " << uMaxx << "\n";
    std::cout << "The Minimum is " << uMinx << "\n";

    uint64_t uMaxy = 0xFFFFFFFFFFFFFFFF;
    uint64_t uMiny = 0x0; 
    std::cout << "The Maximim is " << uMaxy << "\n";
    std::cout << "The Minimum is " << uMiny << "\n";

    std::cout << "\n";

    ////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////

    //5.
    
    int32_t iMaxx = 0x7FFFFFFF;
    int32_t iMinx = 0x80000000;

    std::cout << "The Maximum is " << iMaxx << "\n";
    std::cout << "The Mimimum is " << iMinx << "\n";

    int64_t iMaxy = 0x7FFFFFFFFFFFFFFF;
    int64_t iMiny = 0x8000000000000000;

    std::cout << "The Maximum is " << iMaxy << "\n";
    std::cout << "The Mimimum is " << iMiny << "\n";

    std::cout << "\n";

    ////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////

    //6.
    /* 
    由于使用了未初始化的变量，这是不安全的；
    因为内存地址是不断地被不同的程序重复使用的，一个个程序使用了这个地址会在这个地址上存储数据，
    当程序结束时，数据不会立即清除，只是程序放弃这个地址。
    你定义一个变量，计算机分配地址，正好分配到这个地址上，但是你没有初始化变量，
    也就是没有刷新这个地址上的已有数据，当你直接使用这个变量时，
    取到的值就是之前程序储存在这个地址上的值。
     */

    /* 
    int integal;
    std::cout << "The uninitialized of integral is " << integal << "\n";

    float floatnumber;
    std::cout << "The uninitialized of float number is " << floatnumber << "\n";
    */

    system("PAUSE");

    return 0;
}