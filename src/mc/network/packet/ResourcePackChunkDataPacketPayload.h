#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ResourcePackChunkDataPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>        mResourceName;
    ::ll::TypedStorage<4, 4, int>                 mChunkID;
    ::ll::TypedStorage<8, 8, ulong>               mByteOffset;
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>        mResourceName;
    ::ll::TypedStorage<4, 4, int>                   mChunkID;
    ::ll::TypedStorage<8, 8, uint64>                mByteOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<uchar>> mData;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ResourcePackChunkDataPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResourcePackChunkDataPacketPayload(std::string const&, int, ulong, std::vector<uchar>);

    MCNAPI ~ResourcePackChunkDataPacketPayload();
#else // @header-generator platform
    MCAPI ResourcePackChunkDataPacketPayload(
        ::std::string const& name,
        int                  chunkID,
        uint64               byteOffset,
        ::std::vector<uchar> data
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, int, ulong, std::vector<uchar>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& name, int chunkID, uint64 byteOffset, ::std::vector<uchar> data);
#endif // @header-generator platform
    // NOLINTEND
};
