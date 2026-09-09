#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AdventureSettingsOverride {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, std::optional<bool>> mNoPvM;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mNoMvP;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mImmutableWorld;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mShowNameTags;
    ::ll::TypedStorage<1, 2, std::optional<bool>> mAutoJump;
    // NOLINTEND
};
