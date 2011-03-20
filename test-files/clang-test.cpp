#include <stdio.h>

int main(int argc, char** argv)
{
    char* fileName; // not initialized!
    if (2 == argc)
    {
        fileName = argv[1];
    }
    // using fileName
    FILE* f = fopen(fileName, "r");
    fclose(f);
}
