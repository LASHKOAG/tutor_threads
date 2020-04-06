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
    for(size_t i = 0; i < 10; ++i){
        cout << "ID of thread = " << this_thread::get_id() << "\tmain" << endl;
        this_thread::sleep_for(chrono::milliseconds(3000));
    }


    return 0;
}

//cout << "START MAIN" << endl;

//cout << this_thread::get_id() << endl;

//this_thread::sleep_for(chrono::milliseconds(1000));

//cout << "END MAIN" << endl;
