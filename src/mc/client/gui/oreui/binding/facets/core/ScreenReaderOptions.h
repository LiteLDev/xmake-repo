#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct ScreenReaderOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         canBeInterrupted;
    ::ll::TypedStorage<8, 24, std::string> interruptibleId;
    ::ll::TypedStorage<1, 1, bool>         isRequired;
    ::ll::TypedStorage<1, 1, bool>         shouldPlayInBackground;
    ::ll::TypedStorage<1, 1, bool>         shouldPlayWhenPlatformTTSEnabled;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[25]> NAME();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ScreenReaderOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>           canBeInterrupted;
    ::ll::TypedStorage<8, 32, ::std::string> interruptibleId;
    ::ll::TypedStorage<1, 1, bool>           isRequired;
    ::ll::TypedStorage<1, 1, bool>           shouldPlayInBackground;
    ::ll::TypedStorage<1, 1, bool>           shouldPlayWhenPlatformTTSEnabled;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[25]> NAME();
    // NOLINTEND
};
#else // @header-generator platform
struct ScreenReaderOptions {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
