#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/world/level/storage/Experiments.h"

struct PackLoadInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>   mPackId;
    ::ll::TypedStorage<8, 56, ::Experiments> mExperiments;
    ::ll::TypedStorage<1, 1, bool>           mIsTrustedPack;
    ::ll::TypedStorage<1, 1, bool>           mIsBaseGamePack;
    // NOLINTEND

public:
    // prevent constructor by default
    PackLoadInfo& operator=(PackLoadInfo const&);
    PackLoadInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackLoadInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
