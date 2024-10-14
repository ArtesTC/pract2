/ mysyslog.c
#include "mysyslog.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void mysyslog(const char *msg, int level, int driver, int format, const char *path) {
    // Генерация метки времени
    time_t t = time(NULL);
    struct tm *tm_info = localtime(&t);
    char timestamp[26];
    strftime(timestamp, 26, "%Y-%m-%d %H:%M:%S", tm_info);

    FILE [id355850004|*log_file] = fopen(path, "a");
    if (!log_file) {
        perror("Error opening log file");
        return;
    }

    // Выводим сообщение в текстовом или JSON формате
    if (format == FORMAT_TEXT) {
        fprintf(log_file, "%s [%d] %s\n", timestamp, level, msg);
    } else if (format == FORMAT_JSON) {
        fprintf(log_file, "{\"timestamp\": \"%s\", \"level\": %d, \"message\": \"%s\"}\n", timestamp, level, msg);
    }

    fclose(log_file);
}
