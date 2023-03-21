#include <iostream>
#include <thread>

void hola(){
    std::cout << "Hola mundo!" << std::endl;
}

void hello(){
    std::cout << "Hello world!" << std::endl;
}

void salut(){
    std::cout << "Salut monde!" << std::endl;
}

int main(){
    std::thread hilo_espanol(hola);
    std::thread hilo_ingles(hello);
    std::thread hilo_frances(salut);
    hilo_espanol.join();
    hilo_ingles.join();
    hilo_frances.join();

    return 0;
}