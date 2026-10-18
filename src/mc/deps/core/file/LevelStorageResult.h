#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/LevelStorageState.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Core {

struct LevelStorageResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Core::LevelStorageState> state;
    ::ll::TypedStorage<8, 24, std::string>              telemetryMsg;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk70f08c;
    ::ll::UntypedStorage<8, 32> mUnkaa5b88;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LevelStorageResult& operator=(LevelStorageResult const&);
    LevelStorageResult(LevelStorageResult const&);
    LevelStorageResult();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LevelStorageResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace Core
