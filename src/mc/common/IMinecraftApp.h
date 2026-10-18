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
#if defined(LL_PLAT_A) // @header-generator platform
class OptionRegistry;
#else // @header-generator platform
#endif // @header-generator platform
namespace Automation { class AutomationClient; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class OptionRegistry;
#endif // @header-generator platform
// clang-format on

class IMinecraftApp {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMinecraftApp() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<const EDUSystems> getEDUSystems() const = 0;
#else // @header-generator platform
#ifdef LL_PLAT_C
    virtual ::Bedrock::NonOwnerPointer<::EDUSystems> getEDUSystems() = 0;

    virtual ::Bedrock::NonOwnerPointer<::EDUSystems const> getEDUSystems() const = 0;

    virtual ::std::shared_ptr<::OptionRegistry> getPrimaryUserOptions() = 0;

    virtual ::std::shared_ptr<::OptionRegistry const> getPrimaryUserOptions() const = 0;

#endif
    virtual ::Bedrock::NotNullNonOwnerPtr<::Minecraft> getPrimaryMinecraft() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::NonOwnerPointer<EDUSystems> getEDUSystems() = 0;

    virtual std::shared_ptr<const OptionRegistry> getPrimaryUserOptions() const = 0;

    virtual std::shared_ptr<OptionRegistry> getPrimaryUserOptions() = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Minecraft>> getPrimaryMinecraft() = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Automation::AutomationClient>> getAutomationClient() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::Automation::AutomationClient> getAutomationClient() const = 0;
#endif // @header-generator platform

    virtual bool isEduMode() const = 0;

    virtual bool isDedicatedServer() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onNetworkMaxPlayersChanged(uint) = 0;
#else // @header-generator platform
    virtual void onNetworkMaxPlayersChanged(uint newMaxPlayerCount) = 0;
#endif // @header-generator platform

    virtual ::IGameModuleShared& getGameModuleShared() = 0;

    virtual void requestServerShutdown() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver>> getFileArchiver() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::FileArchiver> getFileArchiver() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool requestInGamePause(::SubClientId const&, bool) = 0;
#else // @header-generator platform
    virtual bool requestInGamePause(::SubClientId const& subClient, bool status) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
