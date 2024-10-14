// json_driver.c
#include <stdio.h>
#include "mysyslog.h"

void json_log(const char *msg, int level, const char *path) {
    mysyslog(msg, level, 0, FORMAT_JSON, path);
}
