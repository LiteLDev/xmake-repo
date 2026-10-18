#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FileChunkInfo.h"

struct FileChunk {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<uchar>> data;
    ::ll::TypedStorage<8, 24, ::FileChunkInfo>    info;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<uchar>> data;
    ::ll::TypedStorage<8, 24, ::FileChunkInfo>      info;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    FileChunk& operator=(FileChunk const&);
    FileChunk(FileChunk const&);
    FileChunk();
#else // @header-generator platform
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~FileChunk();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
#endif // @header-generator platform
};
