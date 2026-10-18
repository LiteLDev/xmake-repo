#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"

struct ResourcePackDataInfoPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mResourceName;
    ::ll::TypedStorage<4, 4, uint>         mChunkSize;
    ::ll::TypedStorage<4, 4, int>          mNbChunks;
    ::ll::TypedStorage<8, 8, ulong>        mFileSize;
    ::ll::TypedStorage<8, 24, std::string> mFileHash;
    ::ll::TypedStorage<1, 1, ::PackType>   mPackType;
    ::ll::TypedStorage<1, 1, bool>         mIsPremium;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mResourceName;
    ::ll::TypedStorage<4, 4, uint>           mChunkSize;
    ::ll::TypedStorage<4, 4, int>            mNbChunks;
    ::ll::TypedStorage<8, 8, uint64>         mFileSize;
    ::ll::TypedStorage<8, 32, ::std::string> mFileHash;
    ::ll::TypedStorage<1, 1, ::PackType>     mPackType;
    ::ll::TypedStorage<1, 1, bool>           mIsPremium;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ResourcePackDataInfoPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    ResourcePackDataInfoPacketPayload(std::string const&, uint, int, ulong, std::string const&, bool, ::PackType);

    MCNAPI ~ResourcePackDataInfoPacketPayload();
#else // @header-generator platform
    MCAPI ResourcePackDataInfoPacketPayload(
        ::std::string const& name,
        uint                 chunkSize,
        int                  nbChunk,
        uint64               fileSize,
        ::std::string const& fileHash,
        bool                 isPremium,
        ::PackType           packType
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, uint, int, ulong, std::string const&, bool, ::PackType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string const& name,
        uint                 chunkSize,
        int                  nbChunk,
        uint64               fileSize,
        ::std::string const& fileHash,
        bool                 isPremium,
        ::PackType           packType
    );
#endif // @header-generator platform
    // NOLINTEND
};
