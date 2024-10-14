#include <stdio.h>
#include <time.h>
#include "../libmysyslog.h"

// Функция для логирования в формате JSON
void log_to_json(const char* msg, int level, const char* path) {
    mysyslog(msg, level, DRIVER_JSON, JSON, path);
}
