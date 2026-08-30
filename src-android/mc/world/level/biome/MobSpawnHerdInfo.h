#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobSpawnHerdInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>         mMinCount;
    ::ll::TypedStorage<4, 4, uint>         mMaxCount;
    ::ll::TypedStorage<4, 4, uint>         mHerdEventSkipCount;
    ::ll::TypedStorage<4, 4, uint>         mInitialEventCount;
    ::ll::TypedStorage<8, 24, std::string> mInitialEvent;
    ::ll::TypedStorage<8, 24, std::string> mHerdEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    MobSpawnHerdInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MobSpawnHerdInfo(uint, uint, std::string const&, uint, std::string const&, uint);

    MCNAPI ~MobSpawnHerdInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint, uint, std::string const&, uint, std::string const&, uint);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
