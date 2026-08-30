#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelStorageObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mOnSaveCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelStorageObserver();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onSave(std::string const&);
    // NOLINTEND
};
