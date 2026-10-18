#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandName {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<1, 1, bool>         showInAutoComplete;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> name;
    ::ll::TypedStorage<1, 1, bool>           showInAutoComplete;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    CommandName& operator=(CommandName const&);
    CommandName(CommandName const&);
    CommandName();
#else // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCAPI ~CommandName();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};
