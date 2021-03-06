/*
 * my_glog.h
 *  Created on: Jun 12, 2015 11:07:40 PM
 *      Author: fzh
 *       Email: fzhedu@gmail.com
 *   Copyright: Copyright (c) @ ECNU.DaSE
 * Description:
 */

#ifndef SQL_PARSER_SRC_COMMON_LOGGING_H_
#define SQL_PARSER_SRC_COMMON_LOGGING_H_
#include <glog/logging.h>
#include <glog/raw_logging.h>
#include <gflags/gflags.h>
void GlogSignalHandle(const char* data, int size);
class Logging {
 public:
    Logging(char* program);
    ~Logging();
};

#endif /* SQL_PARSER_SRC_COMMON_LOGGING_H_ */
