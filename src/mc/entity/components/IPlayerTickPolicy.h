#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IPlayerTickPolicy {
public:
    // IPlayerTickPolicy inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class TickAction : uchar {
#else // @header-generator platform
    enum class TickAction : schar {
#endif // @header-generator platform
        ProcessTick    = 0,
        StopProcessing = 1,
        SkipTick       = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IPlayerTickPolicy();
#else // @header-generator platform
    virtual ~IPlayerTickPolicy() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getMaxTickCount(ulong, bool) const = 0;
#else // @header-generator platform
    virtual uint64 getMaxTickCount(uint64, bool) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IPlayerTickPolicy::TickAction shouldTickPlayer(ulong, ulong) const = 0;
#else // @header-generator platform
    virtual ::IPlayerTickPolicy::TickAction shouldTickPlayer(uint64, uint64) const = 0;
#endif // @header-generator platform

    virtual bool isStrictMovement() const = 0;

    virtual bool isStrictDismount() const = 0;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
