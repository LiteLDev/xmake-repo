#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mMinecraft;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk13f0d8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AsyncJoinRegistrar& operator=(AsyncJoinRegistrar const&);
    AsyncJoinRegistrar(AsyncJoinRegistrar const&);
#endif // @header-generator platform
    AsyncJoinRegistrar();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~AsyncJoinRegistrar();
#else // @header-generator platform
    virtual ~AsyncJoinRegistrar() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<ulong, std::function<void (ulong*)>> registerAsyncJoinCallback(::brstd::move_only_function<void (const NetworkIdentifier&, const PlayerAuthenticationInfo&, SubClientId, std::shared_ptr<AsyncVerdictPromise>)>);
#else // @header-generator platform
    virtual ::std::unique_ptr<uint64, ::std::function<void(uint64*)>> registerAsyncJoinCallback(
        ::brstd::move_only_function<void(
            ::NetworkIdentifier const&,
            ::PlayerAuthenticationInfo const&,
            ::SubClientId,
            ::std::shared_ptr<::AsyncVerdictPromise>
        )> joinCallback
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPaused();
    // clang-format on
#else // @header-generator platform
    virtual bool isPaused() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit AsyncJoinRegistrar(::Minecraft&);
#else // @header-generator platform
    MCNAPI explicit AsyncJoinRegistrar(::Minecraft& minecraft);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Minecraft&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::Minecraft& minecraft);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<ulong, std::function<void(ulong*)>> $registerAsyncJoinCallback(
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<uint64, ::std::function<void(uint64*)>> $registerAsyncJoinCallback(
#endif // @header-generator platform
        ::brstd::move_only_function<void(
#if defined(LL_PLAT_A) // @header-generator platform
            const NetworkIdentifier&,
            const PlayerAuthenticationInfo&,
            SubClientId,
            std::shared_ptr<AsyncVerdictPromise>
        )>
#else // @header-generator platform
            ::NetworkIdentifier const&,
            ::PlayerAuthenticationInfo const&,
            ::SubClientId,
            ::std::shared_ptr<::AsyncVerdictPromise>
        )> joinCallback
#endif // @header-generator platform
    );

    MCNAPI bool $isPaused();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
