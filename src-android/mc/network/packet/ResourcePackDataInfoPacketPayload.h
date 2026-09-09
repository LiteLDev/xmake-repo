#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"

struct ResourcePackDataInfoPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mResourceName;
    ::ll::TypedStorage<4, 4, uint>         mChunkSize;
    ::ll::TypedStorage<4, 4, int>          mNbChunks;
    ::ll::TypedStorage<8, 8, ulong>        mFileSize;
    ::ll::TypedStorage<8, 24, std::string> mFileHash;
    ::ll::TypedStorage<1, 1, ::PackType>   mPackType;
    ::ll::TypedStorage<1, 1, bool>         mIsPremium;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ResourcePackDataInfoPacketPayload(std::string const&, uint, int, ulong, std::string const&, bool, ::PackType);

    MCNAPI ~ResourcePackDataInfoPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, uint, int, ulong, std::string const&, bool, ::PackType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
