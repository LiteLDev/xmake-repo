#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct zlib_filefunc64_def_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void* (*)(void*, void const*, int)>              zopen64_file;
    ::ll::TypedStorage<8, 8, ulong (*)(void*, void*, void*, ulong)>           zread_file;
    ::ll::TypedStorage<8, 8, ulong (*)(void*, void*, void const*, ulong)>     zwrite_file;
    ::ll::TypedStorage<8, 8, unsigned long long (*)(void*, void*)>            ztell64_file;
    ::ll::TypedStorage<8, 8, long (*)(void*, void*, unsigned long long, int)> zseek64_file;
    ::ll::TypedStorage<8, 8, int (*)(void*, void*)>                           zclose_file;
    ::ll::TypedStorage<8, 8, int (*)(void*, void*)>                           zerror_file;
    ::ll::TypedStorage<8, 8, void*>                                           opaque;
    // NOLINTEND
};
