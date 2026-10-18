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

#if defined(LL_PLAT_A) // @header-generator platform
    using DeathCauseMessageType = ::
        TypeWrapper<std::pair<std::string, std::vector<std::string>>, DeathInfoPacketPayload::TagDeathCauseMessageType>;
#else // @header-generator platform
    using DeathCauseMessageType = ::TypeWrapper<
        ::std::pair<::std::string, ::std::vector<::std::string>>,
        ::DeathInfoPacketPayload::TagDeathCauseMessageType>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        56,
        ::TypeWrapper<
            ::std::pair<::std::string, ::std::vector<::std::string>>,
            ::DeathInfoPacketPayload::TagDeathCauseMessageType>>
        mDeathCauseMessage;
#endif // @header-generator platform
    // NOLINTEND
};
