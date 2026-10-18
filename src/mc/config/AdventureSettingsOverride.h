#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AdventureSettingsOverride {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 2, std::optional<bool>> mNoPvM;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mNoMvP;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mImmutableWorld;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mShowNameTags;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mAutoJump;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 2> mUnka03f48;
    ::ll::UntypedStorage<1, 2> mUnkc1d5b6;
    ::ll::UntypedStorage<1, 2> mUnkfcaa16;
    ::ll::UntypedStorage<1, 2> mUnk1939e7;
    ::ll::UntypedStorage<1, 2> mUnk2c638f;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AdventureSettingsOverride& operator=(AdventureSettingsOverride const&);
    AdventureSettingsOverride(AdventureSettingsOverride const&);
    AdventureSettingsOverride();
#endif // @header-generator platform
};
