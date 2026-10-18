#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/minizip/zlib_filefunc64_def_s.h"
#else // @header-generator platform
#endif // @header-generator platform

struct zlib_filefunc64_32_def_s {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, ::zlib_filefunc64_def_s>           zfile_func64;
    ::ll::TypedStorage<8, 8, void* (*)(void*, char const*, int)> zopen32_file;
    ::ll::TypedStorage<8, 8, long (*)(void*, void*)>             ztell32_file;
    ::ll::TypedStorage<8, 8, long (*)(void*, void*, ulong, int)> zseek32_file;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnkec35ee;
    ::ll::UntypedStorage<8, 8>  mUnkd42415;
    ::ll::UntypedStorage<8, 8>  mUnk3c28ab;
    ::ll::UntypedStorage<8, 8>  mUnk21b2ec;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    zlib_filefunc64_32_def_s& operator=(zlib_filefunc64_32_def_s const&);
    zlib_filefunc64_32_def_s(zlib_filefunc64_32_def_s const&);
    zlib_filefunc64_32_def_s();
#endif // @header-generator platform
};
