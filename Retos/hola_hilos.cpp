#include <iostream>
#include <thread>

void hola(){
    std::cout << "Hola mundo!" << std::endl;
}

int main(){
    std::thread hilo(hola);
    hilo.join(); //realizar siempre el join que sirve para esperar la finalizacion del hola en este caso

    return 0;
}