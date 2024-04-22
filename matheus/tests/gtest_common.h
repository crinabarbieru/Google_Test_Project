#ifndef _GTEST_COMMON_H_
#define _GTEST_COMMON_H_

#include <gtest/gtest.h>

using ::testing::InSequence;
using ::testing::_;
using ::testing::Return;
using ::testing::SetArgPointee;
using ::testing::DoAll;

#define INITIALISE_0(x)     memset((void*)&x, 0x00, sizeof(x));

#endif
