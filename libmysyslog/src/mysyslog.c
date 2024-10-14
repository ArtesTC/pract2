#include "mysyslog.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int mysyslog(const char* msg, int level, int driver, int format, const char* path) {
    FILE* log_file = fopen(path, "a");
    if (!log_file) {
        return -1;
    }

    time_t now = time(NULL);
    char* timestamp = ctime(&now);
    timestamp[strlen(timestamp) - 1] = '\0';  // remove newline

    const char* level_str;
    switch (level) {
        case LOG_DEBUG: level_str = "DEBUG"; break;
        case LOG_INFO: level_str = "INFO"; break;
        case LOG_WARN: level_str = "WARN"; break;
        case LOG_ERROR: level_str = "ERROR"; break;
        case LOG_CRITICAL: level_str = "CRITICAL"; break;
        default: level_str = "UNKNOWN"; break;
    }

    if (driver == DRIVER_TEXT) {
        fprintf(log_file, "%s %s %s %s\n", timestamp, level_str, "example-process", msg);
    } else if (driver == DRIVER_JSON) {
        fprintf(log_file, "{\"timestamp\": \"%s\", \"log_level\": \"%s\", \"process\": \"%s\", \"message\": \"%s\"}\n", 
                timestamp, level_str, "example-process", msg);
    }

    fclose(log_file);
    return 0;
}
