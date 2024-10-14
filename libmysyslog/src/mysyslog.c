#include <stdio.h>
#include <time.h>
#include "mysyslog.h"

int mysyslog(const char* msg, int level, int driver, int format, const char* path) {
    FILE* log_file = fopen(path, "a");
    if (!log_file) return -1;

    time_t now = time(NULL);
    char* level_str;
    
    switch (level) {
        case DEBUG: level_str = "DEBUG"; break;
        case INFO: level_str = "INFO"; break;
        case WARN: level_str = "WARN"; break;
        case ERROR: level_str = "ERROR"; break;
        case CRITICAL: level_str = "CRITICAL"; break;
        default: level_str = "UNKNOWN"; break;
    }

    if (format == TEXT) {
        fprintf(log_file, "%ld %s mysyslog %s\n", now, level_str, msg);
    } else if (format == JSON) {
        fprintf(log_file, "{\"timestamp\":%ld,\"log_level\":\"%s\",\"process\":\"mysyslog\",\"message\":\"%s\"}\n", now, level_str, msg);
    }

    fclose(log_file);
    return 0;
}
