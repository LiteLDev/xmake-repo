#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class INetworkGameConnector;
class ResourcePackManager;
struct StoreDataDrivenScreenParams;
namespace Social { class IUserManager; }
// clang-format on

class IMinecraftScreenModel {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMinecraftScreenModel() = default;

    virtual ::SubClientId getSubClientId() const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const getUserManager() const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> getUserManager() = 0;

    virtual void navigateToStoreDataDrivenScreen(::StoreDataDrivenScreenParams const&, bool) = 0;

    virtual bool tryNavigateToProfileScreen() = 0;

    virtual bool tryNavigateToSafeZoneScreenOnFirstSignin() = 0;

    virtual bool leaveScreen(std::string, bool) = 0;

    virtual bool isInGame() const = 0;

    virtual void requestLeaveGame(bool, bool) = 0;

    virtual bool isLeaveGameDone() const = 0;

    virtual bool isUserReady() const = 0;

    virtual void destroyGame() = 0;

    virtual ::ResourcePackManager& getResourcePackManager() const = 0;

    virtual void popScreensBackTo(::ui::SceneType const) = 0;

    virtual ::INetworkGameConnector& getNetworkGameConnector() = 0;
    // NOLINTEND
};
