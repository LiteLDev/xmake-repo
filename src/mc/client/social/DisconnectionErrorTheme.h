#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/DisconnectionErrorStrings.h"
#include "mc/client/social/DisconnectionErrorWithOverrides.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct DisconnectionErrorTheme {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                  themeName;
    ::ll::TypedStorage<8, 104, ::DisconnectionErrorStrings>                 defaultStrings;
    ::ll::TypedStorage<8, 24, std::vector<DisconnectionErrorWithOverrides>> errors;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::DisconnectionErrorTheme& operator=(::DisconnectionErrorTheme&&);

    MCNAPI ~DisconnectionErrorTheme();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct DisconnectionErrorTheme {};
#endif // @header-generator platform
