#include <hello/hello.hpp>

int main()
{
    hello::Hello hello{};
    
    hello.start();
    
    hello.run();
    
    hello.stop();
    
    return 0;
}
