#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <syslog.h>
#include "../libmysyslog.h"

void signal_handler(int signum) {
    syslog(LOG_INFO, "Daemon shutting down.");
    exit(0);
}

int main() {
    signal(SIGTERM, signal_handler);
    openlog("mysyslog-daemon", LOG_PID|LOG_CONS, LOG_USER);
    
    while (1) {
        syslog(LOG_INFO, "Daemon is running.");
        sleep(10); // логировать каждые 10 секунд
    }

    closelog();
    return 0;
}
