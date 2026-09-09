#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class AsyncVerdictPromise;
class NetworkIdentifier;
struct PlayerAuthenticationInfo;
// clang-format on

class IAsyncJoinRegistrar {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual std::unique_ptr<ulong, std::function<void (ulong*)>> registerAsyncJoinCallback(::brstd::move_only_function<void (const NetworkIdentifier&, const PlayerAuthenticationInfo&, SubClientId, std::shared_ptr<AsyncVerdictPromise>)>) = 0;

    virtual ~IAsyncJoinRegistrar() = default;

    virtual bool isPaused() = 0;
    // clang-format on
    // NOLINTEND
};
