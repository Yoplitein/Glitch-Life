#include <iostream>
#include <vector>
#include <string>

#include "Util.h"

int main(int argc, char **argv)
{
    std::vector<std::string> dirs;
    
    recurseSubdirs(".", dirs);
    std::cout << "dirs:\n";
    
    for(string dir: dirs)
        std::cout << "    " << dir << "\n";
    
    std::cout << "===\n";
    
    return 0;
}
