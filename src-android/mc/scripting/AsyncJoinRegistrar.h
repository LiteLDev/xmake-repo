#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/scripting/IAsyncJoinRegistrar.h"

// auto generated forward declare list
// clang-format off
class AsyncVerdictPromise;
class Minecraft;
class NetworkIdentifier;
struct PlayerAuthenticationInfo;
// clang-format on

class AsyncJoinRegistrar : public ::IAsyncJoinRegistrar {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mMinecraft;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncJoinRegistrar();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~AsyncJoinRegistrar();

    virtual std::unique_ptr<ulong, std::function<void (ulong*)>> registerAsyncJoinCallback(::brstd::move_only_function<void (const NetworkIdentifier&, const PlayerAuthenticationInfo&, SubClientId, std::shared_ptr<AsyncVerdictPromise>)>);

    virtual bool isPaused();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AsyncJoinRegistrar(::Minecraft&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Minecraft&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<ulong, std::function<void(ulong*)>> $registerAsyncJoinCallback(
        ::brstd::move_only_function<void(
            const NetworkIdentifier&,
            const PlayerAuthenticationInfo&,
            SubClientId,
            std::shared_ptr<AsyncVerdictPromise>
        )>
    );

    MCNAPI bool $isPaused();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
