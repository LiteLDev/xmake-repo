#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Social { struct Nonce; }
namespace Social { struct OnlineId; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class NonceGenerator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mSessionSecret;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NonceGenerator();

    MCNAPI ::Social::Nonce generateForPlayer(::Social::OnlineId const&) const;

    MCNAPI void newSession();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
class NonceGenerator {};
#endif // @header-generator platform

} // namespace Social
