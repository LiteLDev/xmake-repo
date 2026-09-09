#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/options/GraphicsMode.h"
#include "mc/scripting/modules/minecraft/ScriptPlayerSplitScreenSlot.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActor.h"
#include "mc/scripting/modules/minecraft/camera/ScriptCamera.h"
#include "mc/scripting/modules/minecraft/device/ScriptClientSystemInfo.h"
#include "mc/scripting/modules/minecraft/screendisplay/ScriptScreenDisplay.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/camera/controlscheme/Scheme.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
class Scoreboard;
class ServerSoundHandle;
class Vec3;
class WeakEntityRef;
struct ScoreboardId;
namespace ScriptModuleMinecraft { class ScriptFogSettings; }
namespace ScriptModuleMinecraft { class ScriptInputInfo; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptLocatorBar; }
namespace ScriptModuleMinecraft { class ScriptMolangVariableMap; }
namespace ScriptModuleMinecraft { class ScriptPlayerAimAssist; }
namespace ScriptModuleMinecraft { class ScriptPlayerInputPermissions; }
namespace ScriptModuleMinecraft { class ScriptSoundDefinition; }
namespace ScriptModuleMinecraft { class ScriptSoundInstance; }
namespace ScriptModuleMinecraft { struct ScriptActorData; }
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptMusicOptions; }
namespace ScriptModuleMinecraft { struct ScriptPlayerSoundOptions; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptSoundOptions; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
namespace Scripting { struct PropertyOutOfBoundsError; }
namespace Scripting { struct UnsupportedAPIError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPlayer : public ::ScriptModuleMinecraft::ScriptActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mAimAssist;
    ::ll::UntypedStorage<8, 32> mInputPermissions;
    ::ll::UntypedStorage<8, 40> mScreenDisplay;
    ::ll::UntypedStorage<8, 40> mCamera;
    ::ll::UntypedStorage<8, 40> mClientSystemInfo;
    ::ll::UntypedStorage<8, 32> mInputInfo;
    ::ll::UntypedStorage<8, 32> mLocatorBar;
    ::ll::UntypedStorage<8, 32> mFogSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptPlayer();

    virtual void setLoading(::Actor const&);

    virtual void setUnloaded(::Actor&);

    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError> lookAt(::Actor&, ::Vec3 const&);

    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError> remove(::Actor&);

    virtual bool isValid() const;

    virtual ::ScoreboardId const& _getScoreboardId(::Scoreboard const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPlayer(::Player const&, ::Scripting::WeakLifetimeScope const&);

    MCNAPI ScriptPlayer(::ScriptModuleMinecraft::ScriptActorData const&, ::Scripting::WeakLifetimeScope const&);

    MCNAPI ::Scripting::Result_deprecated<void>
    _playOrQueueMusic(::Player&, std::string const&, std::optional<ScriptModuleMinecraft::ScriptMusicOptions>, bool);

    MCNAPI ::Scripting::Result_deprecated<void> _playSoundInternal(
        std::string const,
        std::optional<ScriptModuleMinecraft::ScriptPlayerSoundOptions>,
        std::optional<ServerSoundHandle>
    );

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
    );

    MCNAPI ::Scripting::Result_deprecated<void>
    queueMusic(std::string const&, std::optional<ScriptModuleMinecraft::ScriptMusicOptions>);

    MCNAPI ::Scripting::
        Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, ScriptModuleMinecraft::ScriptRawMessageError>
        sendMessage(
            ::Scripting::ContextConfig const&,
            std::variant<
                std::string,
                ScriptModuleMinecraft::ScriptRawMessageInterface,
                std::vector<std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
        ) const;

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError>
    setChatMessagePrefix(std::optional<std::string> const&);

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError>
    setChatNamePrefix(std::optional<std::string> const&);

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError>
    setChatNameSuffix(std::optional<std::string> const&);

    MCNAPI ::Player* tryGetPlayer() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>
    getHandle(::Player const&, ::Scripting::WeakLifetimeScope const&);

    MCNAPI static std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>>
    getHandle(::WeakEntityRef, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player const&, ::Scripting::WeakLifetimeScope const&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActorData const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setLoading(::Actor const&);

    MCNAPI void $setUnloaded(::Actor&);

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError>
    $lookAt(::Actor&, ::Vec3 const&);

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError>
    $remove(::Actor&);

    MCNAPI bool $isValid() const;

    MCNAPI ::ScoreboardId const& $_getScoreboardId(::Scoreboard const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
