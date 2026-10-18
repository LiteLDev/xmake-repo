#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/components/ClientSynchedActorEvent.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ClientSynchedActorEvent;
// clang-format on
#endif // @header-generator platform

struct ClientFireActorEventComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ClientSynchedActorEvent>> mSynchedEvents;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ClientSynchedActorEvent>> mSynchedEvents;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ClientFireActorEventComponent& operator=(ClientFireActorEventComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
