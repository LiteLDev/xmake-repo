#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Level;
// clang-format on

struct LevelStartLeaveGameEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelStartLeaveGameEvent& operator=(LevelStartLeaveGameEvent const&);
    LevelStartLeaveGameEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LevelStartLeaveGameEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Level>> mLevel;
#endif // @header-generator platform
    // NOLINTEND
};
