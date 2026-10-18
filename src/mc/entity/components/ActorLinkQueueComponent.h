#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/actor/ActorLink.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ActorLink;
// clang-format on
#endif // @header-generator platform

struct ActorLinkQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ActorLink>> mLinks;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorLink>> mLinks;
#endif // @header-generator platform
    // NOLINTEND
};
