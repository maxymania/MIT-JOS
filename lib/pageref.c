#include <inc/lib.h>

int
pageref(void *v)
{
	uint16_t ref=0;
	sys_pageref_compare((void*)UTOP,v,&ref);
	return ref;
#if 0
	pte_t pte;

	if (!(vpd[PDX(v)] & PTE_P))
		return 0;
	pte = vpt[PGNUM(v)];
	if (!(pte & PTE_P))
		return 0;
	return pages[PGNUM(pte)].pp_ref;
#endif
}


