#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ResourcePackChunkRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mResourceName;
    ::ll::TypedStorage<4, 4, int>          mChunk;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePackChunkRequestPacketPayload(std::string const&, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND
};
