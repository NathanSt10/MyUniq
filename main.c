/*******************************************************************
* Description: 
* This C program implements UNIX command such as uniq with limited features named as myuniq.  

Usage:
* Compile it using a C compiler and run the executable from the command line with appropriate arguments.
*    - To run the program: ./myuniq [-c] <input_file> <output_file>
*    - optional arguments are specified in [ ]
*******************************************************************/

#include "utils.h" 

int main(int argc, char *argv[]) {
    if (argc < 3) {
        fprintf(stderr, "Usage: %s [-c] <input_file> <output_file>\n", argv[0]);
        return 1;
    }

    uniq(argc, argv);

    return 0;
}
