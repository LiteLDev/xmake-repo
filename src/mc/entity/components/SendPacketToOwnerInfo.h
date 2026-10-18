#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Packet;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct SendPacketToOwnerInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<Packet>> mPacketData;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk19693c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SendPacketToOwnerInfo& operator=(SendPacketToOwnerInfo const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SendPacketToOwnerInfo(SendPacketToOwnerInfo const&);
#endif // @header-generator platform
    SendPacketToOwnerInfo();
};
