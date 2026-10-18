#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/DisconnectionErrorStrings.h"
#include "mc/client/social/DisconnectionErrorTheme.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct DisconnectionErrorMapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::DisconnectionErrorStrings>         fallbackStrings;
    ::ll::TypedStorage<8, 24, std::vector<DisconnectionErrorTheme>> themes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DisconnectionErrorMapper();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct DisconnectionErrorMapper {};
#endif // @header-generator platform
