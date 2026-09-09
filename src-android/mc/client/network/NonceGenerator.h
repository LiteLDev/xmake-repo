#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social { struct Nonce; }
namespace Social { struct OnlineId; }
// clang-format on

namespace Social {

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

} // namespace Social
