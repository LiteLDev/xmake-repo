#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorInfo.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct ActorInfo;
// clang-format on
#endif // @header-generator platform

struct AvailableActorIdentifiersPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ActorInfo>> mIdentifierList;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AvailableActorIdentifiersPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorInfo>> mIdentifierList;
#endif // @header-generator platform
    // NOLINTEND
};
