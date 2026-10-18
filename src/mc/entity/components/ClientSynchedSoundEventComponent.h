#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/components/ClientSynchedSoundEvent.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ClientSynchedSoundEvent;
// clang-format on
#endif // @header-generator platform

struct ClientSynchedSoundEventComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ClientSynchedSoundEvent>> mSynchedEvents;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ClientSynchedSoundEvent>> mSynchedEvents;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ClientSynchedSoundEventComponent& operator=(ClientSynchedSoundEventComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
