#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/options/GraphicsMode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/ScriptPlayerSplitScreenSlot.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/camera/ScriptCamera.h"
#include "mc/scripting/modules/minecraft/device/ScriptClientSystemInfo.h"
#include "mc/scripting/modules/minecraft/screendisplay/ScriptScreenDisplay.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/GameType.h"
#include "mc/world/level/camera/controlscheme/Scheme.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
class Scoreboard;
class ServerSoundHandle;
class Vec3;
class WeakEntityRef;
struct ScoreboardId;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptClientSystemInfo; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptFogSettings; }
namespace ScriptModuleMinecraft { class ScriptInputInfo; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemStack; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptLocatorBar; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptMolangVariableMap; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPlayerAimAssist; }
namespace ScriptModuleMinecraft { class ScriptPlayerInputPermissions; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptSoundDefinition; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptSoundInstance; }
namespace ScriptModuleMinecraft { struct ScriptActorData; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptCamera; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptMusicOptions; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSoundOptions; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptSoundOptions; }
namespace Scripting { class DependencyLocator; }
#else // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptScreenDisplay; }
#endif // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct InvalidArgumentError; }
namespace Scripting { struct PropertyOutOfBoundsError; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct UnsupportedAPIError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayer : public ::ScriptModuleMinecraft::ScriptActor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32> mAimAssist;
    ::ll::UntypedStorage<8, 32> mInputPermissions;
    ::ll::UntypedStorage<8, 40> mScreenDisplay;
    ::ll::UntypedStorage<8, 40> mCamera;
    ::ll::UntypedStorage<8, 40> mClientSystemInfo;
    ::ll::UntypedStorage<8, 32> mInputInfo;
    ::ll::UntypedStorage<8, 32> mLocatorBar;
    ::ll::UntypedStorage<8, 32> mFogSettings;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerAimAssist>>
        mAimAssist;
    ::ll::
        TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayerInputPermissions>>
            mInputPermissions;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScreenDisplay>>>
        mScreenDisplay;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCamera>>>
        mCamera;
    ::ll::TypedStorage<
        8,
        40,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptClientSystemInfo>>>
        mClientSystemInfo;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptInputInfo>>
        mInputInfo;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLocatorBar>>
        mLocatorBar;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptFogSettings>>
        mFogSettings;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptPlayer& operator=(ScriptPlayer const&);
    ScriptPlayer(ScriptPlayer const&);
#endif // @header-generator platform
    ScriptPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptPlayer();
#else // @header-generator platform
    virtual ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
        lookAt(::Actor& self, ::Vec3 const& targetLocation) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setLoading(::Actor const&);
#else // @header-generator platform
    virtual ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
        remove(::Actor& self) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setUnloaded(::Actor&);
#else // @header-generator platform
    virtual void setUnloaded(::Actor& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError> lookAt(::Actor&, ::Vec3 const&);
#else // @header-generator platform
    virtual void setLoading(::Actor const& actor) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError> remove(::Actor&);
#else // @header-generator platform
    virtual bool isValid() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValid() const;

    virtual ::ScoreboardId const& _getScoreboardId(::Scoreboard const&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::ScoreboardId const& _getScoreboardId(::Scoreboard const& scoreboard) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPlayer(::Player const&, ::Scripting::WeakLifetimeScope const&);
#else // @header-generator platform
    MCAPI ScriptPlayer(::Player const& player, ::Scripting::WeakLifetimeScope const& scope);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPlayer(::ScriptModuleMinecraft::ScriptActorData const&, ::Scripting::WeakLifetimeScope const&);

    MCNAPI ::Scripting::Result_deprecated<void>
    _playOrQueueMusic(::Player&, std::string const&, std::optional<ScriptModuleMinecraft::ScriptMusicOptions>, bool);

    MCNAPI ::Scripting::Result_deprecated<void> _playSoundInternal(
        std::string const,
        std::optional<ScriptModuleMinecraft::ScriptPlayerSoundOptions>,
        std::optional<ServerSoundHandle>
#else // @header-generator platform
    MCAPI ScriptPlayer(
        ::ScriptModuleMinecraft::ScriptActorData const& playerData,
        ::Scripting::WeakLifetimeScope const&           scope
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<std::string, ScriptModuleMinecraft::ScriptInvalidActorError> getChatDisplayName() const;

    MCNAPI ::Scripting::Result<std::optional<std::string>, ScriptModuleMinecraft::ScriptInvalidActorError>
    getChatMessagePrefix() const;

    MCNAPI ::Scripting::Result<std::optional<std::string>, ScriptModuleMinecraft::ScriptInvalidActorError>
    getChatNamePrefix() const;

    MCNAPI ::Scripting::Result<std::optional<std::string>, ScriptModuleMinecraft::ScriptInvalidActorError>
    getChatNameSuffix() const;

    MCNAPI ::Scripting::Result<CommandPermissionLevel, ScriptModuleMinecraft::ScriptInvalidActorError>
    getCommandPermissionLevel() const;

    MCNAPI ::Scripting::Result<GraphicsMode, ScriptModuleMinecraft::ScriptInvalidActorError> getGraphicsMode() const;

    MCNAPI ::Scripting::Result_deprecated<std::string> getName() const;

    MCNAPI ::Scripting::Result<std::string, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::EngineError>
    getPersistentId() const;

    MCNAPI ::Scripting::Result_deprecated<int> getPlayerLevel() const;

    MCNAPI ::Scripting::Result<PlayerPermissionLevel, ScriptModuleMinecraft::ScriptInvalidActorError>
    getPlayerPermissionLevel() const;

    MCNAPI ::Scripting::Result_deprecated<int> getSelectedSlot() const;

    MCNAPI ::Scripting::Result_deprecated<int> getTotalXpNeededForNextLevel() const;

    MCNAPI ::Scripting::Result_deprecated<int> getXpEarnedAtCurrentLevel() const;

    MCNAPI ::Scripting::Result_deprecated<bool> isEmoting() const;

    MCNAPI ::Scripting::Result_deprecated<bool> isFlying() const;

    MCNAPI ::Scripting::Result_deprecated<bool> isGliding() const;

    MCNAPI ::Scripting::Result_deprecated<bool> isJumping() const;

    MCNAPI ::Scripting::Result_deprecated<void>
    playMusic(std::string const&, std::optional<ScriptModuleMinecraft::ScriptMusicOptions>);

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptSoundInstance>,
        Scripting::Error,
        Scripting::EngineError>
    playSound(
        ::Scripting::WeakLifetimeScope const&,
        std::string const&,
        std::optional<ScriptModuleMinecraft::ScriptPlayerSoundOptions>
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> _playOrQueueMusic(
        ::Player&                                                    player,
        ::std::string const&                                         trackID,
        ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions,
        bool                                                         shouldQueue
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void>
    queueMusic(std::string const&, std::optional<ScriptModuleMinecraft::ScriptMusicOptions>);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> _playSoundInternal(
        ::std::string const                                                soundID,
        ::std::optional<::ScriptModuleMinecraft::ScriptPlayerSoundOptions> soundOptions,
        ::std::optional<::ServerSoundHandle>                               serverSoundHandle
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::
        Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, ScriptModuleMinecraft::ScriptRawMessageError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getChatDisplayName() const;

    MCAPI ::Scripting::Result<::std::optional<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getChatMessagePrefix() const;

    MCAPI ::Scripting::Result<::std::optional<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getChatNamePrefix() const;

    MCAPI ::Scripting::Result<::std::optional<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getChatNameSuffix() const;

    MCAPI ::Scripting::Result<::CommandPermissionLevel, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getCommandPermissionLevel() const;

    MCAPI ::Scripting::Result<::GraphicsMode, ::ScriptModuleMinecraft::ScriptInvalidActorError> getGraphicsMode() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getName() const;

    MCAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::EngineError>
    getPersistentId() const;

    MCAPI ::Scripting::Result_deprecated<int> getPlayerLevel() const;

    MCAPI ::Scripting::Result<::PlayerPermissionLevel, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getPlayerPermissionLevel() const;

    MCAPI ::Scripting::Result_deprecated<int> getSelectedSlot() const;

    MCAPI ::Scripting::Result_deprecated<int> getTotalXpNeededForNextLevel() const;

    MCAPI ::Scripting::Result_deprecated<int> getXpEarnedAtCurrentLevel() const;

    MCAPI ::Scripting::Result_deprecated<bool> isEmoting() const;

    MCAPI ::Scripting::Result_deprecated<bool> isFlying() const;

    MCAPI ::Scripting::Result_deprecated<bool> isGliding() const;

    MCAPI ::Scripting::Result_deprecated<bool> isJumping() const;

    MCAPI ::ScriptModuleMinecraft::ScriptPlayer& operator=(::ScriptModuleMinecraft::ScriptPlayer&&);

    MCAPI ::Scripting::Result_deprecated<void>
    playMusic(::std::string const& trackID, ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions);

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSoundInstance>,
        ::Scripting::Error,
        ::Scripting::EngineError>
    playSound(
        ::Scripting::WeakLifetimeScope const&                              scope,
        ::std::string const&                                               soundID,
        ::std::optional<::ScriptModuleMinecraft::ScriptPlayerSoundOptions> soundOptions
    );

    MCAPI ::Scripting::Result_deprecated<void>
    queueMusic(::std::string const& trackID, ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions);

    MCAPI ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::ScriptModuleMinecraft::ScriptRawMessageError>
#endif // @header-generator platform
        sendMessage(
#if defined(LL_PLAT_A) // @header-generator platform
            ::Scripting::ContextConfig const&,
            std::variant<
                std::string,
                ScriptModuleMinecraft::ScriptRawMessageInterface,
                std::vector<std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
#else // @header-generator platform
            ::Scripting::ContextConfig const& contextConfig,
            ::std::variant<
                ::std::string,
                ::ScriptModuleMinecraft::ScriptRawMessageInterface,
                ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
                var
#endif // @header-generator platform
        ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError>
    setChatMessagePrefix(std::optional<std::string> const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    setChatMessagePrefix(::std::optional<::std::string> const& prefix);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError>
    setChatNamePrefix(std::optional<std::string> const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    setChatNamePrefix(::std::optional<::std::string> const& prefix);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError>
    setChatNameSuffix(std::optional<std::string> const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    setChatNameSuffix(::std::optional<::std::string> const& suffix);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Player* tryGetPlayer() const;
#else // @header-generator platform
    MCAPI ::Player* tryGetPlayer() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>
    getHandle(::Player const&, ::Scripting::WeakLifetimeScope const&);
#else // @header-generator platform
    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>
    getHandle(::Player const& player, ::Scripting::WeakLifetimeScope const& scope);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>>
    getHandle(::WeakEntityRef, ::Scripting::WeakLifetimeScope const&);
#else // @header-generator platform
    MCAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>
    getHandle(::WeakEntityRef entityRef, ::Scripting::WeakLifetimeScope const& scope);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Player const&, ::Scripting::WeakLifetimeScope const&);
#else // @header-generator platform
    MCAPI void* $ctor(::Player const& player, ::Scripting::WeakLifetimeScope const& scope);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorData const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void*
    $ctor(::ScriptModuleMinecraft::ScriptActorData const& playerData, ::Scripting::WeakLifetimeScope const& scope);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setLoading(::Actor const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
    $lookAt(::Actor& self, ::Vec3 const& targetLocation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setUnloaded(::Actor&);
#else // @header-generator platform
    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
    $remove(::Actor& self);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError>
    $lookAt(::Actor&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI void $setUnloaded(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError>
    $remove(::Actor&);
#else // @header-generator platform
    MCAPI void $setLoading(::Actor const& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid() const;
#else // @header-generator platform
    MCAPI bool $isValid() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScoreboardId const& $_getScoreboardId(::Scoreboard const&) const;
#else // @header-generator platform
    MCAPI ::ScoreboardId const& $_getScoreboardId(::Scoreboard const& scoreboard) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
