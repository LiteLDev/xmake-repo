#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct zlib_filefunc_def_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void* (*)(void*, char const*, int)>          zopen_file;
    ::ll::TypedStorage<8, 8, ulong (*)(void*, void*, void*, ulong)>       zread_file;
    ::ll::TypedStorage<8, 8, ulong (*)(void*, void*, void const*, ulong)> zwrite_file;
    ::ll::TypedStorage<8, 8, long (*)(void*, void*)>                      ztell_file;
    ::ll::TypedStorage<8, 8, long (*)(void*, void*, ulong, int)>          zseek_file;
    ::ll::TypedStorage<8, 8, int (*)(void*, void*)>                       zclose_file;
    ::ll::TypedStorage<8, 8, int (*)(void*, void*)>                       zerror_file;
    ::ll::TypedStorage<8, 8, void*>                                       opaque;
    // NOLINTEND
};
