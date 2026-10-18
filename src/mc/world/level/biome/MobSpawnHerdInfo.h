#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobSpawnHerdInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>         mMinCount;
    ::ll::TypedStorage<4, 4, uint>         mMaxCount;
    ::ll::TypedStorage<4, 4, uint>         mHerdEventSkipCount;
    ::ll::TypedStorage<4, 4, uint>         mInitialEventCount;
    ::ll::TypedStorage<8, 24, std::string> mInitialEvent;
    ::ll::TypedStorage<8, 24, std::string> mHerdEvent;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>           mMinCount;
    ::ll::TypedStorage<4, 4, uint>           mMaxCount;
    ::ll::TypedStorage<4, 4, uint>           mHerdEventSkipCount;
    ::ll::TypedStorage<4, 4, uint>           mInitialEventCount;
    ::ll::TypedStorage<8, 32, ::std::string> mInitialEvent;
    ::ll::TypedStorage<8, 32, ::std::string> mHerdEvent;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MobSpawnHerdInfo& operator=(MobSpawnHerdInfo const&);
#endif // @header-generator platform
    MobSpawnHerdInfo();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MobSpawnHerdInfo(uint, uint, std::string const&, uint, std::string const&, uint);
#else // @header-generator platform
    MCAPI MobSpawnHerdInfo(::MobSpawnHerdInfo const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~MobSpawnHerdInfo();
#else // @header-generator platform
    MCAPI MobSpawnHerdInfo(
        uint                 min,
        uint                 max,
        ::std::string const& initialEvent,
        uint                 initialEventCount,
        ::std::string const& herdEvent,
        uint                 herdEventSkipCount
    );

    MCAPI ~MobSpawnHerdInfo();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(uint, uint, std::string const&, uint, std::string const&, uint);
#else // @header-generator platform
    MCFOLD void* $ctor(::MobSpawnHerdInfo const&);

    MCAPI void* $ctor(
        uint                 min,
        uint                 max,
        ::std::string const& initialEvent,
        uint                 initialEventCount,
        ::std::string const& herdEvent,
        uint                 herdEventSkipCount
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
