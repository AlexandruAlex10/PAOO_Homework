#ifndef HELLO_HPP
#define HELLO_HPP

#include <string>
namespace hello {

class Hello 
{
public:
    Hello();
    
    ~Hello() = default;
    std::string timeMesage;
    
public:
    void start();
    
    void run();
    
    void stop();
};

} // namespace hello

#endif // HELLO_HPP
