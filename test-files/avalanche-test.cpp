#include <stdio.h>

int main(int argc, char** argv)
{
    char input[4];
    FILE*  fd1 = fopen(argv[1], "r");
    fread(input, 1, 4, fd1);
    if (!strncmp(input,"bad!",4)) abort();
    fclose(fd1);
}
