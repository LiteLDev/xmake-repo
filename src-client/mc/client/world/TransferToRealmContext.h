#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/IMinecraftEventing.h"

struct TransferToRealmContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mRealmId;
    ::ll::UntypedStorage<4, 4>             mConnectionFlow;
    // NOLINTEND

public:
    // prevent constructor by default
    TransferToRealmContext& operator=(TransferToRealmContext const&);
    TransferToRealmContext();
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
