// daemon.c
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include "mysyslog.h"

void signal_handler(int sig) {
    if (sig == SIGTERM) {
        mysyslog("Daemon stopped", 4, 0, FORMAT_TEXT, "daemon.log");
        exit(0);
    }
}

int main() {
    signal(SIGTERM, signal_handler);

    while (1) {
        mysyslog("Daemon running", 1, 0, FORMAT_TEXT, "daemon.log");
        sleep(10);
    }

    return 0;
}
