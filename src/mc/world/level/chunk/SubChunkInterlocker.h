#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/SpinLockImpl.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/SubChunkPos.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class SpinLockImpl;
class SubChunkPos;
// clang-format on
#endif // @header-generator platform

class SubChunkInterlocker {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>           mSpinLock;
    ::ll::TypedStorage<8, 24, std::vector<SubChunkPos>> mLocked3x3x3SubChunks;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>               mSpinLock;
    ::ll::TypedStorage<8, 24, ::std::vector<::SubChunkPos>> mLocked3x3x3SubChunks;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool tryLock3x3x3(::SubChunkPos const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool tryLock3x3x3(::SubChunkPos const& center);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool tryLock3x3xN(::SubChunkPos const&, int);
#else // @header-generator platform
    MCAPI bool tryLock3x3xN(::SubChunkPos const& bottom, int top);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void unlock3x3x3(::SubChunkPos const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void unlock3x3x3(::SubChunkPos const& center);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void unlock3x3xN(::SubChunkPos const&, int);
#else // @header-generator platform
    MCAPI void unlock3x3xN(::SubChunkPos const& bottom, int top);
#endif // @header-generator platform
    // NOLINTEND
};
