#ifndef HELLO_CONFIG_HPP
#define HELLO_CONFIG_HPP

#include <iostream>

#ifndef COPYRIGHT_INFO
#define COPYRIGHT_INFO "Copyright 02"
#endif

namespace hello {

///\brief Text to get displayed
const auto str_hello = "Hello world!";
const auto str_timeis = "Current time is: ";
const auto str_goodbye = "Good bye world!";

///\brief Text to get displayed
inline void version()
{
    std::cout << "Application " << "Hello" << std::endl 
              << "Version " << "0.2" << std::endl 
              << COPYRIGHT_INFO << std::endl
              << std::endl;
}

} // namespace hello

#endif // HELLO_CONFIG_HPP
