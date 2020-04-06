#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

//урок 1
//Многопоточное программирование
//потоки
//thread

void DoWork(){
    for(size_t i = 0; i < 10; ++i){
        cout << "ID of thread = " << this_thread::get_id() << "\tDoWork " << i << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
}


int main()
{
    thread th(DoWork);

    th.detach();

    for(size_t i = 0; i < 10; ++i){
        cout << "ID of thread = " << this_thread::get_id() << "\tmain " << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }


    return 0;
}

//cout << "START MAIN" << endl;

//cout << this_thread::get_id() << endl;

//this_thread::sleep_for(chrono::milliseconds(1000));

//cout << "END MAIN" << endl;
