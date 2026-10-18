#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
// clang-format on
#endif // @header-generator platform

struct MolangActorIdArrayPtr {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ActorUniqueID>> mActorIds;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>> mActorIds;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    MolangActorIdArrayPtr();
#else // @header-generator platform
#endif // @header-generator platform
};
