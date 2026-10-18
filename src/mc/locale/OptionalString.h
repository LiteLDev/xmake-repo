#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OptionalString {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>         valid;
    ::ll::TypedStorage<8, 24, std::string> string;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>           valid;
    ::ll::TypedStorage<8, 32, ::std::string> string;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    OptionalString& operator=(OptionalString const&);
    OptionalString();
#else // @header-generator platform
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ~OptionalString();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
    // NOLINTEND
#endif // @header-generator platform
};
