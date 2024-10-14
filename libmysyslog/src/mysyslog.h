#ifndef MYSYSLOG_H
#define MYSYSLOG_H

#define LOG_DEBUG    0
#define LOG_INFO     1
#define LOG_WARN     2
#define LOG_ERROR    3
#define LOG_CRITICAL 4

#define DRIVER_TEXT  0
#define DRIVER_JSON  1

int mysyslog(const char* msg, int level, int driver, int format, const char* path);

#endif // MYSYSLOG_H
