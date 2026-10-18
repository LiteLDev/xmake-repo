#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct AppEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24> mEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    AppEventBase& operator=(AppEventBase const&);
    AppEventBase();
};
#else // @header-generator platform
struct AppEventBase {};
#endif // @header-generator platform
