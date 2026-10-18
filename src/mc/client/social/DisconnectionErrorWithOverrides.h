#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/DisconnectionErrorStringOverrides.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct DisconnectionErrorWithOverrides {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Connection::DisconnectFailReason>                 failReason;
    ::ll::TypedStorage<8, 144, std::optional<DisconnectionErrorStringOverrides>> overrideStrings;
    // NOLINTEND
};
#else // @header-generator platform
struct DisconnectionErrorWithOverrides {};
#endif // @header-generator platform
