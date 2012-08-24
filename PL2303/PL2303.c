//
//  PL2303.c
//  PL2303
//
//  Created by Mark Carey on 8/24/12.
//  Copyright (c) 2012 Sourceforge.net. All rights reserved.
//

#include <mach/mach_types.h>

kern_return_t PL2303_start(kmod_info_t * ki, void *d);
kern_return_t PL2303_stop(kmod_info_t *ki, void *d);

kern_return_t PL2303_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t PL2303_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
