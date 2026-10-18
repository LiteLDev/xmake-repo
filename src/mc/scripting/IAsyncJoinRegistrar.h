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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual std::unique_ptr<ulong, std::function<void (ulong*)>> registerAsyncJoinCallback(::brstd::move_only_function<void (const NetworkIdentifier&, const PlayerAuthenticationInfo&, SubClientId, std::shared_ptr<AsyncVerdictPromise>)>) = 0;

    virtual ~IAsyncJoinRegistrar() = default;
#else // @header-generator platform
    virtual ::std::unique_ptr<uint64, ::std::function<void(uint64*)>> registerAsyncJoinCallback(
        ::brstd::move_only_function<void(
            ::NetworkIdentifier const&,
            ::PlayerAuthenticationInfo const&,
            ::SubClientId,
            ::std::shared_ptr<::AsyncVerdictPromise>
        )> joinCallback
    ) = 0;
#endif // @header-generator platform

    virtual bool isPaused() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform

    virtual ~IAsyncJoinRegistrar() = default;
#endif // @header-generator platform
    // NOLINTEND
};
