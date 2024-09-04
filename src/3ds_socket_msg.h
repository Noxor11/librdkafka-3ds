#pragma once
#include <stdio.h>

#ifdef __3DS__
struct iovec {
    void *iov_base;
    size_t iov_len;
} typedef iovec;

struct msghdr {
    iovec *msg_iov;
    int msg_iovlen;
} typedef msghdr;

#endif