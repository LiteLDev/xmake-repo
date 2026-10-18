#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ServerInstanceEventCoordinator;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct ServerInstanceArguments {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mIsDedicatedServer;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Bedrock::NonOwnerPointer<ServerInstanceEventCoordinator>> const&> mCoordinator;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk649084;
    ::ll::UntypedStorage<8, 8> mUnk356c8d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ServerInstanceArguments& operator=(ServerInstanceArguments const&);
    ServerInstanceArguments(ServerInstanceArguments const&);
    ServerInstanceArguments();
};
