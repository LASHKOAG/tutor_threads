#include <iostream>
#include <thread>
#include <chrono>
#include <string>

using namespace std;

//урок 4
//Многопоточное программирование
//Лямбда выражения и возврат результата выполнения потока

void DoWork(int &a){
    this_thread::sleep_for(chrono::milliseconds(3000));
        cout << "ID of thread = " << this_thread::get_id() << " =============\tDoWork STARTED\t=================" << endl;
    this_thread::sleep_for(chrono::milliseconds(5000));
    a *= 2;
    this_thread::sleep_for(chrono::milliseconds(3000));
        cout << "ID of thread = " << this_thread::get_id() << " =============\tDoWork STOPPED\t=================" << endl;;
}


int main()
{
    int q = 5;

    thread th(DoWork, std::ref(q));


    for(size_t i = 0; i<10; ++i){
        cout << "ID of thread = " << this_thread::get_id() << "\tmain works\t" << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    th.join();
        cout << "q = " << q << endl;

    return 0;
}

//cout << "START MAIN" << endl;

//cout << this_thread::get_id() << endl;

//this_thread::sleep_for(chrono::milliseconds(1000));

//cout << "END MAIN" << endl;
