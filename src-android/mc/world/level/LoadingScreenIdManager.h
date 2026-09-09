#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct LoadingScreenId;
// clang-format on

class LoadingScreenIdManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mLastLoadingScreenId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LoadingScreenIdManager();

    MCNAPI ::LoadingScreenId getNextLoadingScreenId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
