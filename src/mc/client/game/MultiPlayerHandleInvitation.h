#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/game/IMultiPlayerRequest.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class IClientInstance;
class IMinecraftEventing;
class IMinecraftGame;
class IMultiPlayerServices;
class ToastMessage;
namespace Social { class MultiplayerGameInfo; }
namespace Social { class MultiplayerServiceManager; }
// clang-format on

class MultiPlayerHandleInvitation : public ::IMultiPlayerRequest {
#else // @header-generator platform
class MultiPlayerHandleInvitation {
#endif // @header-generator platform
public:
    // MultiPlayerHandleInvitation inner types declare
    // clang-format off
    class IGameOperations;
    // clang-format on

    // MultiPlayerHandleInvitation inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    class IGameOperations {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~IGameOperations();

        virtual bool isInGame() const = 0;

        virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> getPrimaryClientInstance() const = 0;

        virtual ::IMinecraftEventing& getEventing() const = 0;

        virtual void pushToast(::ToastMessage&&) = 0;

        virtual std::shared_ptr<AbstractScene> createCommonDialogInfoScreen(std::string const&, std::string const&) = 0;

        virtual void requestLeaveGame(bool) = 0;

        virtual void joinMultiplayerGame(::Social::MultiplayerGameInfo const&) = 0;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::brstd::move_only_function<MultiPlayerHandleInvitation::IGameOperations&(IMinecraftGame&)>
        fromMinecraftGame();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using GameOperationsFactory =
        ::brstd::move_only_function<MultiPlayerHandleInvitation::IGameOperations&(IMinecraftGame&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Social::MultiplayerServiceManager&> mMultiplayerServiceManager;
    ::ll::UntypedStorage<8, 64>                                    mGameOperationsFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiPlayerHandleInvitation& operator=(MultiPlayerHandleInvitation const&);
    MultiPlayerHandleInvitation(MultiPlayerHandleInvitation const&);
    MultiPlayerHandleInvitation();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultiPlayerHandleInvitation();

    virtual ::IMultiPlayerRequest::Result update(::IMinecraftGame&, ::IMultiPlayerServices&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MultiPlayerHandleInvitation(
        ::Social::MultiplayerServiceManager&,
        ::brstd::move_only_function<MultiPlayerHandleInvitation::IGameOperations&(IMinecraftGame&)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Social::MultiplayerServiceManager&,
        ::brstd::move_only_function<MultiPlayerHandleInvitation::IGameOperations&(IMinecraftGame&)>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::IMultiPlayerRequest::Result $update(::IMinecraftGame&, ::IMultiPlayerServices&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    class IGameOperations {};
#endif // @header-generator platform
};
