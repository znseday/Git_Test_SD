#include <iostream>
#include "MyLib_01.h"
#include "LibDasha.h"

using namespace std;

int main()
{
    Print_Sergey_01();
    Print_Sergey_02();
    PrintDasha_01();
    PrintDasha_02();
    cout << "MySq(5) = " << MySq(5) << endl; // 3 исправил на 4, а потом на 5
    // Комментарий из ветки dev
    cout << "It's from master" << endl;
    // Еще один комментарий из мастера, удаляем файл Temp2

    return 0;
}
