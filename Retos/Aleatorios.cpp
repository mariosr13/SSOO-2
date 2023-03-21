#include <iostream>
#include <thread>
#include <cstdlib>

class Aleatorio{

public:
    void operator () () const {
        int aleatorio;

        srand(time(NULL));
        for (int i = 0; i < 10; i++){
            aleatorio = rand();
            std::cout << "El hilo: " << std::this_thread::get_id() << " genera el numero: " << rand() << std::endl;;
        }
    }
};

int main(){
    Aleatorio a1;
    Aleatorio a2;

    std::thread hilo1(a1);
    std::thread hilo2(a2);

    hilo1.join();
    hilo2.join();

    return 0;
}

