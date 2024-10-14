/ mysyslog.h
#ifndef MYSYSLOG_H
#define MYSYSLOG_H

#define FORMAT_TEXT 1
#define FORMAT_JSON 2

void mysyslog(const char *msg, int level, int driver, int format, const char *path);

#endif
