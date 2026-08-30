#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/cerealize/core/TypeWrapper.h"

struct DeathInfoPacketPayload {
public:
    // DeathInfoPacketPayload inner types declare
    // clang-format off
    struct TagDeathCauseMessageType;
    // clang-format on

    // DeathInfoPacketPayload inner types define
    struct TagDeathCauseMessageType {};

    using DeathCauseMessageType = ::
        TypeWrapper<std::pair<std::string, std::vector<std::string>>, DeathInfoPacketPayload::TagDeathCauseMessageType>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mDeathCauseMessage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DeathInfoPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
