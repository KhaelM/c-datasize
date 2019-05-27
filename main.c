#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("\n=== char ===\n");
    printf("Range: [-128 to 127]\n");
    printf("sizeof(char) = %d bytes\n", sizeof(char));
    printf("sizeof(char*) = %d bytes\n", sizeof(char*));
    printf("sizeof(char**) = %d bytes\n", sizeof(char**));
    
    printf("\n=== unsigned char ===\n");
    printf("Range: [0 to 255]\n");
    printf("sizeof(unsigned char) = %d bytes\n", sizeof(unsigned char));
    printf("sizeof(unsigned char*) = %d bytes\n", sizeof(unsigned char*));
    printf("sizeof(unsigned char**) = %d bytes\n", sizeof(unsigned char**));

    printf("\n=== short ===\n");
    printf("Range: [-128 to 127]\n");
    printf("sizeof(short) = %d bytes\n", sizeof(short));
    printf("sizeof(short*) = %d bytes\n", sizeof(short*));
    printf("sizeof(short**) = %d bytes\n", sizeof(short**));

    printf("\n=== unsigned short ===\n");
    printf("Range: [0 to 255]\n");
    printf("sizeof(unsigned short) = %d bytes\n", sizeof(unsigned short));
    printf("sizeof(unsigned short*) = %d bytes\n", sizeof(unsigned short*));
    printf("sizeof(unsigned short**) = %d bytes\n", sizeof(unsigned short**));

    printf("\n=== int ===\n");
    printf("Range: [-32768 to 32767]\n");
    printf("sizeof(int) = %d bytes\n", sizeof(int));
    printf("sizeof(int*) = %d bytes\n", sizeof(int*));
    printf("sizeof(int**) = %d bytes\n", sizeof(int**));

    printf("\n=== unsigned int ===\n");
    printf("Range: [0 to 65535]\n");
    printf("sizeof(unsigned int) = %d bytes\n", sizeof(unsigned int));
    printf("sizeof(unsigned int*) = %d bytes\n", sizeof(unsigned int*));
    printf("sizeof(unsigned int**) = %d bytes\n", sizeof(unsigned int**));

    printf("\n=== long ===\n");
    printf("Range: [-2,147,483,648 to 2,147,483,647]\n");
    printf("sizeof(long) = %d bytes\n", sizeof(long));
    printf("sizeof(long*) = %d bytes\n", sizeof(long*));
    printf("sizeof(long**) = %d bytes\n", sizeof(long**));

    printf("\n=== unsigned long ===\n");
    printf("Range: [0 to 4,294,967,295]\n");
    printf("sizeof(unsigned long) = %d bytes\n", sizeof(unsigned long));
    printf("sizeof(unsigned long*) = %d bytes\n", sizeof(unsigned long*));
    printf("sizeof(unsigned long**) = %d bytes\n", sizeof(unsigned long**));

    printf("\n=== float ===\n");
    printf("Range: [3.4E-38 to 3.4E+38]\n");
    printf("sizeof(float) = %d bytes\n", sizeof(float));
    printf("sizeof(float*) = %d bytes\n", sizeof(float*));
    printf("sizeof(float**) = %d bytes\n", sizeof(float**));

    printf("\n=== double ===\n");
    printf("Range: [1.7E-308 to 1.7E+308]\n");
    printf("sizeof(double) = %d bytes\n", sizeof(double));
    printf("sizeof(double*) = %d bytes\n", sizeof(double*));
    printf("sizeof(double**) = %d bytes\n", sizeof(double**));

    printf("\n=== long double ===\n");
    printf("Range: [3.4E-4932 to 1.1E+4932]\n");
    printf("sizeof(long double) = %d bytes\n", sizeof(long double));
    printf("sizeof(long double*) = %d bytes\n", sizeof(long double*));
    printf("sizeof(long double**) = %d bytes\n", sizeof(long double**));

    printf("\n=== void ===\n");
    printf("sizeof(void*) = %d bytes\n", sizeof(void*));
    printf("sizeof(void**) = %d bytes\n", sizeof(void**)); 
    
    getchar();

    return 0;
}
