#include <hello/hello.hpp>
#include <hello/hello_config.hpp>
#include <chrono>
#include <ctime>  

namespace hello {

Hello::Hello()
{
    version();
}
    
void Hello::start()
{
    std::cout << str_hello << std::endl << std::endl;
}

void Hello::run()
{
    std::time_t crttime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::cout << str_timeis << std::ctime(&crttime) << std::endl;        
}


void Hello::stop()
{    
    std::cout << str_goodbye << std::endl;
}


} // namespace hello
