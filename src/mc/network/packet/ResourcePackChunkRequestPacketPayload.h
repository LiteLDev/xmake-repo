#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ResourcePackChunkRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mResourceName;
    ::ll::TypedStorage<4, 4, int>          mChunk;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mResourceName;
    ::ll::TypedStorage<4, 4, int>            mChunk;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ResourcePackChunkRequestPacketPayload();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResourcePackChunkRequestPacketPayload(std::string const&, int);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ResourcePackChunkRequestPacketPayload(::std::string const& name, int chunk);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, int);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD void* $ctor(::std::string const& name, int chunk);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
