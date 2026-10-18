#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
// clang-format on

class LevelEventHandlerRegistrar {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerLevel&> mServerLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelEventHandlerRegistrar& operator=(LevelEventHandlerRegistrar const&);
    LevelEventHandlerRegistrar(LevelEventHandlerRegistrar const&);
    LevelEventHandlerRegistrar();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LevelEventHandlerRegistrar();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
