#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SelectNavigationTabCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>          navigationTabIndex;
    ::ll::TypedStorage<8, 24, std::string> navigationTabName;
    ::ll::TypedStorage<1, 1, bool>         success;
    ::ll::TypedStorage<1, 1, bool>         maintainOldFocus;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectNavigationTabCommand& operator=(SelectNavigationTabCommand const&);
    SelectNavigationTabCommand();
};
