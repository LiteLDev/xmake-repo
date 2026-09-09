#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minizip/zlib_filefunc64_def_s.h"

struct zlib_filefunc64_32_def_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::zlib_filefunc64_def_s>           zfile_func64;
    ::ll::TypedStorage<8, 8, void* (*)(void*, char const*, int)> zopen32_file;
    ::ll::TypedStorage<8, 8, long (*)(void*, void*)>             ztell32_file;
    ::ll::TypedStorage<8, 8, long (*)(void*, void*, ulong, int)> zseek32_file;
    // NOLINTEND
};
