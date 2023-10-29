#ifndef HELLO_HPP
#define HELLO_HPP

namespace hello {

class Hello 
{
public:
    Hello();
    
    ~Hello() = default;
    
public:
    void start();
    
    void run();
    
    void stop();
};

} // namespace hello

#endif // HELLO_HPP
