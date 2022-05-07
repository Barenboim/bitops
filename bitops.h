#ifndef _BITOPS_H_
#define _BITOPS_H_

#if defined __x86_64__
#	include "x86_64_bitops.h"
#elif defined __i386__
#	include "i386_bitops.h"
#else
#	error "unsupported arch"
#endif

#endif
