#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    
    int personsCount, hackersTime, serfsTime, cruiseTime, returnTime, pierCapacity;
    char *stringValue;

    if (argc != 7){
        fprintf(stderr, "Wrong number of parameters\n");
        return -1;
    }
    else {
        personsCount = strtol(argv[1], &stringValue, 10);
        if (stringValue[0] != '\0') {
            fprintf(stderr, "Type only numbers\n");
            return 1;
        }
        hackersTime = strtol(argv[2], &stringValue, 10);
        if (stringValue[0] != '\0') {
            fprintf(stderr, "Type only numbers\n");
            return 1;
        }
        serfsTime = strtol(argv[3], &stringValue, 10);
        if (stringValue[0] != '\0') {
                fprintf(stderr, "Type only numbers\n");
                return 1;
        }
        cruiseTime = strtol(argv[4], &stringValue, 10);
        if (stringValue[0] != '\0') {
            fprintf(stderr, "Type only numbers\n");
            return 1;
        }
        returnTime = strtol(argv[5], &stringValue, 10);
        if (stringValue[0] != '\0') {
            fprintf(stderr, "Type only numbers\n");
            return 1;
        }
        pierCapacity = strtol(argv[6], &stringValue, 10);
        if (stringValue[0] != '\0') {
            fprintf(stderr, "Type only numbers\n");
            return 1;
        }
  }







    return 0;
}