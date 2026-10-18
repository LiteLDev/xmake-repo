#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class MinecraftCommands;
class PersonaClient;
class TrialManager;
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class User; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class MinecraftCommands;
class PersonaClient;
class TrialManager;
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class User; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
class WorldSettingsRules {
public:
    // WorldSettingsRules inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class GeneralMultiplayerWarningState : int {
        None                                        = 0,
        CheckInternetConnection                     = 1,
        DisconnectedThirdPartyWithSubscription      = 2,
        DisconnectedThirdParty                      = 3,
        LocalMultiplayerPrivilegesBlockedThirdParty = 4,
        MultiplayerPrivilegesBlockedThirdParty      = 5,
        MultiplayerPrivilegesBlocked                = 6,
        MultiplayerPrivilegesBlockedOnConsole       = 7,
        CrossPlatformDisabled                       = 8,
        NonMultiplayerSkinEquipped                  = 9,
        Max                                         = 10,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                              mTrialManager;
    ::ll::UntypedStorage<8, 24>                              mUserManager;
    ::ll::UntypedStorage<8, 24>                              mMultiplayerServiceManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::User>> mUser;
    ::ll::TypedStorage<8, 8, ::MinecraftCommands&>           mCommands;
    ::ll::TypedStorage<8, 8, ::PersonaClient&>               mPersonaClient;
    ::ll::TypedStorage<1, 1, bool>                           mIsEditorModeEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSettingsRules& operator=(WorldSettingsRules const&);
    WorldSettingsRules(WorldSettingsRules const&);
    WorldSettingsRules();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldSettingsRules(
        ::MinecraftCommands&,
        ::PersonaClient&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<TrialManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>> const&,
        std::shared_ptr<Social::User>,
        bool
    );

    MCNAPI bool _isCrossPlatformPlayEnabled() const;

    MCNAPI bool _isPlatformServiceMultiplayerConnected() const;

    MCNAPI ::CommandPermissionLevel getCommandPermissionLevel(::PlayerPermissionLevel) const;

    MCNAPI ::WorldSettingsRules::GeneralMultiplayerWarningState getGeneralMultiplayerWarningState() const;

    MCNAPI bool isEditorModeEnabled() const;

    MCNAPI bool isMultiplayerSupported() const;

    MCNAPI bool isPlatformBroadcastFriendsOfFriendsOptionSupported() const;

    MCNAPI bool isPlatformBroadcastInviteOptionSupported() const;

    MCNAPI bool isPlatformBroadcastOptionModifiable() const;

    MCNAPI bool isPlatformBroadcastingSupported() const;

    MCNAPI bool isUsingSwitchAdHocMode() const;

    MCNAPI bool shouldShowMultiplayerWarningMessages() const;

    MCNAPI ~WorldSettingsRules();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::MinecraftCommands&,
        ::PersonaClient&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<TrialManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>> const&,
        std::shared_ptr<Social::User>,
        bool
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class GeneralMultiplayerWarningState : int {
        None                                        = 0,
        CheckInternetConnection                     = 1,
        DisconnectedThirdPartyWithSubscription      = 2,
        DisconnectedThirdParty                      = 3,
        LocalMultiplayerPrivilegesBlockedThirdParty = 4,
        MultiplayerPrivilegesBlockedThirdParty      = 5,
        MultiplayerPrivilegesBlocked                = 6,
        MultiplayerPrivilegesBlockedOnConsole       = 7,
        CrossPlatformDisabled                       = 8,
        NonMultiplayerSkinEquipped                  = 9,
        Max                                         = 10,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::TrialManager>>         mTrialManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>> mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>>
                                                                 mMultiplayerServiceManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::User>> mUser;
    ::ll::TypedStorage<8, 8, ::MinecraftCommands&>               mCommands;
    ::ll::TypedStorage<8, 8, ::PersonaClient&>                   mPersonaClient;
    ::ll::TypedStorage<1, 1, bool>                               mIsEditorModeEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSettingsRules& operator=(WorldSettingsRules const&);
    WorldSettingsRules(WorldSettingsRules const&);
    WorldSettingsRules();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _isCrossPlatformPlayEnabled() const;

    MCAPI bool _isPlatformServiceMultiplayerConnected() const;

    MCAPI bool isMultiplayerSupported() const;

    MCAPI bool isPlatformBroadcastFriendsOfFriendsOptionSupported() const;

    MCAPI ~WorldSettingsRules();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    enum class GeneralMultiplayerWarningState : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
