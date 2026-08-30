#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ServerInstanceEventCoordinator;
// clang-format on

struct ServerInstanceArguments {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mIsDedicatedServer;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Bedrock::NonOwnerPointer<ServerInstanceEventCoordinator>> const&> mCoordinator;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ServerInstanceArguments& operator=(ServerInstanceArguments const&);
    ServerInstanceArguments(ServerInstanceArguments const&);
    ServerInstanceArguments();
};
