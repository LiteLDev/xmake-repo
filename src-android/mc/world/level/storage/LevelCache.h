#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class LevelData;
// clang-format on

class LevelCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 696>   summary;
    ::ll::UntypedStorage<8, 16>    data;
    ::ll::TypedStorage<1, 1, bool> dirtySummary;
    ::ll::TypedStorage<1, 1, bool> isPartiallyCopied;
    ::ll::TypedStorage<1, 1, bool> isLevelDataInvalid;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelCache& operator=(LevelCache const&);
    LevelCache(LevelCache const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LevelCache();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
