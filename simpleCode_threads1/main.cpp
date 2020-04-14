#include <iostream>
#include <thread>
#include <chrono>
#include <string>

using namespace std;

//урок 3
//Многопоточное программирование
//получение результатов работы функции из потока

void DoWork(int a, int b, string msg){
    this_thread::sleep_for(chrono::milliseconds(3000));
        cout << "=============\t" << "DoWork STARTED\t=================" << endl;
    this_thread::sleep_for(chrono::milliseconds(5000));
        cout << "a+b = " << a+b << endl;
        cout << "msg = " << msg << endl;
    this_thread::sleep_for(chrono::milliseconds(3000));
        cout << "=============\t" << "DoWork STOPPED\t=================" << endl;
}


int main()
{
    thread th(DoWork,2,3, "hello ARM");

    //th.detach();
    //th.join();
    //DoWork(2,3);


    for(size_t i = 0; true; ++i){
        cout << "ID of thread = " << this_thread::get_id() << "\tmain works\t" << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    th.join();

    return 0;
}

//cout << "START MAIN" << endl;

//cout << this_thread::get_id() << endl;

//this_thread::sleep_for(chrono::milliseconds(1000));

//cout << "END MAIN" << endl;
