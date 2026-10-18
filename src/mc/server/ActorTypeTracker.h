#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class ActorTypeTracker {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_set<HashedString>> mSeenTypes;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnke8d771;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ActorTypeTracker& operator=(ActorTypeTracker const&);
    ActorTypeTracker(ActorTypeTracker const&);
    ActorTypeTracker();
#endif // @header-generator platform
};
