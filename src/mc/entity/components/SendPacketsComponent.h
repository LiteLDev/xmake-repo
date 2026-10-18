#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/SendPacketInfo.h"
#include "mc/entity/components/SendPacketToOwnerInfo.h"

struct SendPacketsComponent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::variant<SendPacketInfo, SendPacketToOwnerInfo>>> mPacketsToSend;
    // NOLINTEND
#else // @header-generator platform
    // SendPacketsComponent inner types define
    using Variant = ::std::variant<::SendPacketInfo, ::SendPacketToOwnerInfo>;
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    SendPacketsComponent& operator=(SendPacketsComponent const&);
#else // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<::SendPacketInfo, ::SendPacketToOwnerInfo>>> mPacketsToSend;
    // NOLINTEND
#endif // @header-generator platform
};
