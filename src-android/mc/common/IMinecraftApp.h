#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class EDUSystems;
class FileArchiver;
class IGameModuleShared;
class Minecraft;
class OptionRegistry;
namespace Automation { class AutomationClient; }
// clang-format on

class IMinecraftApp {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMinecraftApp() = default;

    virtual ::Bedrock::NonOwnerPointer<const EDUSystems> getEDUSystems() const = 0;

    virtual ::Bedrock::NonOwnerPointer<EDUSystems> getEDUSystems() = 0;

    virtual std::shared_ptr<const OptionRegistry> getPrimaryUserOptions() const = 0;

    virtual std::shared_ptr<OptionRegistry> getPrimaryUserOptions() = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Minecraft>> getPrimaryMinecraft() = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Automation::AutomationClient>> getAutomationClient() const = 0;

    virtual bool isEduMode() const = 0;

    virtual bool isDedicatedServer() const = 0;

    virtual void onNetworkMaxPlayersChanged(uint) = 0;

    virtual ::IGameModuleShared& getGameModuleShared() = 0;

    virtual void requestServerShutdown() = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>> getFileArchiver() const = 0;

    virtual bool requestInGamePause(::SubClientId const&, bool) = 0;
    // NOLINTEND
};
