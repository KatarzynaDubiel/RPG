#include <iostream>
#include <string>
#include <unistd.h>


int main(){

//dane gracza
    std::string name="Anonim";
    int age=0;

    std::string napis1 ="Witaj w grze!";

    for (int i = 0; i < napis1.length(); i++)
    {
        usleep(40000);
        std::cout << napis1[i];
        fflush(stdout);
    }


    return 0;
}