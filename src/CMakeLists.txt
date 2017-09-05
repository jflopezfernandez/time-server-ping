CMAKE_MINIMUM_REQUIRED (VERSION 3.7.1)

PROJECT (PING)

SET (SRCS main.c utility-functions.c network.c)

ADD_EXECUTABLE (ping ${SRCS})
