#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

//урок 1
//Многопоточное программирование
//потоки
//thread


int main()
{
    cout << "START MAIN" << endl;

    cout << this_thread::get_id() << endl;

    this_thread::sleep_for(chrono::milliseconds(1000));

    cout << "END MAIN" << endl;

    return 0;
}
