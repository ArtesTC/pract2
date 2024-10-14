#include <stdio.h>
#include <time.h>
#include "../libmysyslog.h"

// Функция для логирования в текстовом формате
void log_to_text(const char* msg, int level, const char* path) {
    mysyslog(msg, level, DRIVER_TEXT, TEXT, path);
}
