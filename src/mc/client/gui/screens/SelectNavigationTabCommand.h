#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SelectNavigationTabCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            navigationTabIndex;
    ::ll::TypedStorage<8, 32, ::std::string> navigationTabName;
    ::ll::TypedStorage<1, 1, bool>           success;
    ::ll::TypedStorage<1, 1, bool>           maintainOldFocus;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SelectNavigationTabCommand();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct SelectNavigationTabCommand {};
#endif // @header-generator platform
#endif // @header-generator platform
