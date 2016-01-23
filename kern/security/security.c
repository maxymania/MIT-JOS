#include <kern/security/security.h>


int jos_security_ipc_maySend(struct Env* src,struct Env* dst){
	switch(src->env_type){
	case ENV_TYPE_FS:
	case ENV_TYPE_NS:
		return 1;
	default:break;
	}
	switch(dst->env_type){
	case ENV_TYPE_FS:
	case ENV_TYPE_NS:
		return 1;
	default:break;
	}
	return 0;
}


