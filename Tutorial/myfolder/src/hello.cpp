#include "../inc/hello.hpp"
#include <chrono>
#include <ctime>  
#include <iostream> 

namespace hello {

void version(){
std::cout<<"Version 03 \n";
}

Hello::Hello()
{
    this->timeMesage = "Data si ora de azi: ";
    version();
}
    
void Hello::start()
{
    std::cout << "Salut!" << std::endl << std::endl;
}

void Hello::run()
{
    std::time_t crttime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::cout << timeMesage << std::ctime(&crttime) << std::endl;        
}


void Hello::stop()
{    
    std::cout << "Pa Pa!" << std::endl;
}


} // namespace hello
