// text_driver.c
#include <stdio.h>
#include "mysyslog.h"

void text_log(const char *msg, int level, const char *path) {
    mysyslog(msg, level, 0, FORMAT_TEXT, path);
}
