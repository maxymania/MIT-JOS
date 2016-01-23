#ifndef JOS_KERN_SECURITY_SECURITY_H
#define JOS_KERN_SECURITY_SECURITY_H
#include <inc/env.h>

/*
 * Tests, wether a Env (src) is allowed to send anthor Env (dst) a message.
 */
int jos_security_ipc_maySend(struct Env* src,struct Env* dst);



#endif

