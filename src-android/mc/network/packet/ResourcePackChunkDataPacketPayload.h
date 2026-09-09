#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ResourcePackChunkDataPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>        mResourceName;
    ::ll::TypedStorage<4, 4, int>                 mChunkID;
    ::ll::TypedStorage<8, 8, ulong>               mByteOffset;
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePackChunkDataPacketPayload(std::string const&, int, ulong, std::vector<uchar>);

    MCNAPI ~ResourcePackChunkDataPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ulong, std::vector<uchar>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
