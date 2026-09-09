#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/SendPacketInfo.h"
#include "mc/entity/components/SendPacketToOwnerInfo.h"

struct SendPacketsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::variant<SendPacketInfo, SendPacketToOwnerInfo>>> mPacketsToSend;
    // NOLINTEND

public:
    // prevent constructor by default
    SendPacketsComponent& operator=(SendPacketsComponent const&);
};
