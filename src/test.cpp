#include <iostream>
#include <vector>
#include <string>

#include "Util.h"

void testRecurseSubdirs();
void testGetAllSubdirs();
void testGetSubdirs();
void testGetDirFiles();

int main(int argc, char **argv)
{
    testRecurseSubdirs();
    testGetAllSubdirs();
    testGetSubdirs();
    testGetDirFiles();
    
    return 0;
}

void testRecurseSubdirs()
{
    std::vector<std::string> dirs;
    
    recurseSubdirs(getWorkDir(), dirs);
    std::cout << "recurseSubdirs:\n";
    
    for(string dir: dirs)
        std::cout << "    " << dir << "\n";
    
    std::cout << "===\n";
}

void testGetAllSubdirs()
{
    auto dirs = getAllSubdirs(getWorkDir());
    
    std::cout << "getAllSubdirs:\n";
    
    for(string dir: dirs)
        std::cout << "    " << dir << "\n";
    
    std::cout << "===\n";
}

void testGetSubdirs()
{
    auto dirs = getSubdirs(getWorkDir());
    
    std::cout << "getSubdirs:\n";
    
    for(string dir: dirs)
        std::cout << "    " << dir << "\n";
    
    std::cout << "===\n";
}

void testGetDirFiles()
{
    auto files = getDirFiles(getWorkDir() + std::string("/src/"), std::string("cpp"));
    
    std::cout << "getDirFiles:\n";
    
    for(string file: files)
        std::cout << "    " << file << "\n";
    
    std::cout << "===\n";
}
