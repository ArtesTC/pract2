// client.c
#include <stdio.h>
#include <getopt.h>
#include "mysyslog.h"

int main(int argc, char *argv[]) {
    int level = 0;
    int format = FORMAT_TEXT;
    char *message = NULL;
    char *path = "log.txt";

    int opt;
    while ((opt = getopt(argc, argv, "m:l:f:p:")) != -1) {
        switch (opt) {
            case 'm':
                message = optarg;
                break;
            case 'l':
                level = atoi(optarg);
                break;
            case 'f':
                format = atoi(optarg);
                break;
            case 'p':
                path = optarg;
                break;
            default:
                fprintf(stderr, "Usage: %s -m message -l level -f format -p path\n", argv[0]);
                exit(EXIT_FAILURE);
        }
    }

    if (message) {
        mysyslog(message, level, 0, format, path);
    } else {
        fprintf(stderr, "No message provided\n");
    }

    return 0;
}
