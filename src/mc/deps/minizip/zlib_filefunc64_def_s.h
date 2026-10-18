#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct zlib_filefunc64_def_s {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, void* (*)(void*, void const*, int)>              zopen64_file;
    ::ll::TypedStorage<8, 8, ulong (*)(void*, void*, void*, ulong)>           zread_file;
    ::ll::TypedStorage<8, 8, ulong (*)(void*, void*, void const*, ulong)>     zwrite_file;
    ::ll::TypedStorage<8, 8, unsigned long long (*)(void*, void*)>            ztell64_file;
    ::ll::TypedStorage<8, 8, long (*)(void*, void*, unsigned long long, int)> zseek64_file;
    ::ll::TypedStorage<8, 8, int (*)(void*, void*)>                           zclose_file;
    ::ll::TypedStorage<8, 8, int (*)(void*, void*)>                           zerror_file;
    ::ll::TypedStorage<8, 8, void*>                                           opaque;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkfa2fae;
    ::ll::UntypedStorage<8, 8> mUnkff69cf;
    ::ll::UntypedStorage<8, 8> mUnk6fc71c;
    ::ll::UntypedStorage<8, 8> mUnkbd5c15;
    ::ll::UntypedStorage<8, 8> mUnk78b5b6;
    ::ll::UntypedStorage<8, 8> mUnk372861;
    ::ll::UntypedStorage<8, 8> mUnke511fd;
    ::ll::UntypedStorage<8, 8> mUnk2cdbee;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    zlib_filefunc64_def_s& operator=(zlib_filefunc64_def_s const&);
    zlib_filefunc64_def_s(zlib_filefunc64_def_s const&);
    zlib_filefunc64_def_s();
#endif // @header-generator platform
};
