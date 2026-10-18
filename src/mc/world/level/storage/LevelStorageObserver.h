#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelStorageObserver {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mOnSaveCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelStorageObserver();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onSave(std::string const&);
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>> mOnSaveCallback;
#endif // @header-generator platform
    // NOLINTEND
};
