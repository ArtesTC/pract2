#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include "../libmysyslog.h"

int main(int argc, char *argv[]) {
    int level = INFO; // уровень по умолчанию
    int driver = DRIVER_TEXT; // драйвер по умолчанию
    const char *path = "log.txt"; // путь по умолчанию
    char *msg = NULL;

    int opt;
    while ((opt = getopt(argc, argv, "m:l:d:p:")) != -1) {
        switch (opt) {
            case 'm':
                msg = optarg;
                break;
            case 'l':
                level = atoi(optarg);
                break;
            case 'd':
                driver = atoi(optarg);
                break;
            case 'p':
                path = optarg;
                break;
            default:
                fprintf(stderr, "Usage: %s -m message -l level -d driver -p path\n", argv[0]);
                exit(EXIT_FAILURE);
        }
    }

    if (msg) {
        mysyslog(msg, level, driver, TEXT, path);
    } else {
        fprintf(stderr, "Message is required\n");
        exit(EXIT_FAILURE);
    }

    return 0;
}
