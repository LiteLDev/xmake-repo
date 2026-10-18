#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Packet;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct SendPacketInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<Packet>> mPacketData;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnke10c6f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SendPacketInfo& operator=(SendPacketInfo const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SendPacketInfo(SendPacketInfo const&);
#endif // @header-generator platform
    SendPacketInfo();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~SendPacketInfo();
#else // @header-generator platform
    MCAPI ~SendPacketInfo();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
