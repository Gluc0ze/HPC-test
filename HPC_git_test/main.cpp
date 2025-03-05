//
//  main.cpp
//  HPC_git_test
//
//  Created by guillaume vermeire on 04/02/2025.
//

#include <iostream>
#include <string>

#include <cstdlib>  // For getenv
#include <unistd.h> // For getcwd on Mac/Linux
#include <limits.h>

using namespace std;

void input(int f)
{
    char cwd[PATH_MAX];  // Buffer to store the path

        if (getcwd(cwd, sizeof(cwd)) != nullptr) {
            std::cout << "Current working directory (Guillaume > Sam): " << cwd << std::endl;
        } else {
            std::cerr << "Error getting current directory!" << std::endl;
        }
    
    string path;
    path = "../input_data/training_test_";
    path.append(to_string(f));
    path.append(".msrcp");
    
    std::FILE* file = std::fopen(path.c_str(), "r");
    if(file == NULL){printf("No file found\n");}
    
    fclose(file);
}

int main(int argc, const char * argv[])
{
    int file = 1;
    input(file);
    
    // insert code here...
    return 0;
}
