#include <iostream>
#include <chrono>
#include <ctime>  

#ifndef COPYRIGHT_INFO
#define COPYRIGHT_INFO "Copyright 01"
#endif

namespace hello {
    
///\brief Text to get displayed
const auto str_hello = "Hello world!";
const auto str_timeis = "Current time is: ";
const auto str_goodbye = "Good bye world!";

inline void version() 
{
    std::cout << "Application " << "Hello" << std::endl 
              << "Version " << "0.1" << std::endl 
              << COPYRIGHT_INFO << std::endl
              << std::endl;
}

} // namespace hello

int main()
{
    using namespace hello;
    
    version();
    
    std::cout << str_hello << std::endl << std::endl;
    
    std::time_t crttime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::cout << str_timeis << std::ctime(&crttime) << std::endl;
    
    std::cout << str_goodbye << std::endl;

    return 0;
}

