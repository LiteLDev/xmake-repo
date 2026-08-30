#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/player/ScriptPlayer.h"
#include "mc/server/sim/LookDuration.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class Player;
class SimulatedPlayer;
class Vec2;
class Vec3;
namespace ScriptModuleGameTest { struct ScriptMoveToOptions; }
namespace ScriptModuleGameTest { struct ScriptNavigationResult; }
namespace ScriptModuleGameTest { struct ScriptPlayerSkinData; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptActorData; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
namespace Scripting { struct UnsupportedAPIError; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptSimulatedPlayer : public ::ScriptModuleMinecraft::ScriptPlayer {
public:
    // prevent constructor by default
    ScriptSimulatedPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptSimulatedPlayer();

    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError> remove(::Actor&);

    virtual bool isValid() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSimulatedPlayer(::Player const&, ::Scripting::WeakLifetimeScope const&);

    MCNAPI
    ScriptSimulatedPlayer(::ScriptModuleMinecraft::ScriptActorData const&, ::Scripting::WeakLifetimeScope const&);

    MCNAPI ::Scripting::Result_deprecated<bool> attack(::SimulatedPlayer&);

    MCNAPI ::Scripting::Result_deprecated<bool>
    attackEntity(::SimulatedPlayer&, ::ScriptModuleMinecraft::ScriptActor const&);

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, gametest::GameTestError>
    breakBlock(::SimulatedPlayer&, ::Vec3 const&, ::ScriptModuleMinecraft::ScriptFacing);

    MCNAPI ::Scripting::Result_deprecated<void> chat(::SimulatedPlayer&, std::string const&);

    MCNAPI ::Scripting::Result_deprecated<void> disconnect(::SimulatedPlayer&);

    MCNAPI ::Scripting::Result_deprecated<bool> dropSelectedItem(::SimulatedPlayer&);

    MCNAPI ::Scripting::Result_deprecated<void> fly(::SimulatedPlayer&);

    MCNAPI ::Scripting::Result_deprecated<Vec2> getHeadRotation(::SimulatedPlayer const&) const;

    MCNAPI ::Scripting::Result_deprecated<bool> getSprinting(::SimulatedPlayer const&) const;

    MCNAPI ::Scripting::Result_deprecated<bool>
    giveItem(::SimulatedPlayer&, ::ScriptModuleMinecraft::ScriptItemStack const&, bool);

    MCNAPI ::Scripting::Result_deprecated<bool> glide(::SimulatedPlayer&);

    MCNAPI ::Scripting::Result_deprecated<bool> interact(::SimulatedPlayer&);

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, gametest::GameTestError>
    interactWithBlock(::SimulatedPlayer&, ::Vec3 const&, ::ScriptModuleMinecraft::ScriptFacing);

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::InvalidArgumentError>
    interactWithEntity(::SimulatedPlayer&, ::ScriptModuleMinecraft::ScriptActor const&);

    MCNAPI ::Scripting::Result_deprecated<bool> jump(::SimulatedPlayer&);

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, gametest::GameTestError>
    lookAtBlock(::SimulatedPlayer&, ::Vec3 const&, ::sim::LookDuration);

    MCNAPI ::Scripting::Result_deprecated<void>
    lookAtEntity(::SimulatedPlayer&, ::ScriptModuleMinecraft::ScriptActor const&, ::sim::LookDuration);

    MCNAPI ::Scripting::Result_deprecated<void> lookAtLocation(::SimulatedPlayer&, ::Vec3 const&, ::sim::LookDuration);

    MCNAPI ::Scripting::Result_deprecated<void> move(::SimulatedPlayer&, float, float, float);

    MCNAPI ::Scripting::Result_deprecated<void> moveRelative(::SimulatedPlayer&, float, float, float);

    MCNAPI ::Scripting::Result_deprecated<void>
    moveToBlock(::SimulatedPlayer&, ::Vec3 const&, std::optional<ScriptModuleGameTest::ScriptMoveToOptions>);

    MCNAPI ::Scripting::
        Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, gametest::GameTestError, Scripting::Error>
        moveToLocation(::SimulatedPlayer&, ::Vec3 const&, std::optional<ScriptModuleGameTest::ScriptMoveToOptions>);

    MCNAPI ::Scripting::Result<
        ScriptModuleGameTest::ScriptNavigationResult,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        gametest::GameTestError>
    navigateToBlock(::SimulatedPlayer&, ::Vec3 const&, float);

    MCNAPI ::Scripting::Result<
        ScriptModuleGameTest::ScriptNavigationResult,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        Scripting::InvalidArgumentError>
    navigateToEntity(::SimulatedPlayer&, ::ScriptModuleMinecraft::ScriptActor const&, float);

    MCNAPI ::Scripting::Result<
        ScriptModuleGameTest::ScriptNavigationResult,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        gametest::GameTestError>
    navigateToLocation(::SimulatedPlayer&, ::Vec3 const&, float);

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, gametest::GameTestError>
    navigateToLocations(::SimulatedPlayer&, std::vector<Vec3> const&, float);

    MCNAPI ::Scripting::Result_deprecated<bool> respawn(::SimulatedPlayer&);

    MCNAPI ::Scripting::Result_deprecated<void> rotateBody(::SimulatedPlayer&, float);

    MCNAPI ::Scripting::Result_deprecated<void> setBodyRotation(::SimulatedPlayer&, float);

    MCNAPI ::Scripting::Result_deprecated<bool>
    setItem(::SimulatedPlayer&, ::ScriptModuleMinecraft::ScriptItemStack const&, int, bool);

    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError>
    setSkin(::SimulatedPlayer&, ::ScriptModuleGameTest::ScriptPlayerSkinData const&);

    MCNAPI ::Scripting::Result_deprecated<void> setSprinting(::SimulatedPlayer&, bool);

    MCNAPI ::Scripting::Result_deprecated<void> startBuild(::SimulatedPlayer&, int);

    MCNAPI ::Scripting::Result_deprecated<void> stopBreakingBlock(::SimulatedPlayer&);

    MCNAPI ::Scripting::Result_deprecated<void> stopBuild(::SimulatedPlayer&);

    MCNAPI ::Scripting::Result_deprecated<void> stopFlying(::SimulatedPlayer&);

    MCNAPI ::Scripting::Result_deprecated<void> stopGliding(::SimulatedPlayer&);

    MCNAPI ::Scripting::Result_deprecated<void> stopInteracting(::SimulatedPlayer&);

    MCNAPI ::Scripting::Result_deprecated<void> stopMoving(::SimulatedPlayer&);

    MCNAPI ::Scripting::Result_deprecated<void> stopSwimming(::SimulatedPlayer&);

    MCNAPI ::Scripting::Result_deprecated<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>>>
    stopUsingItem(::SimulatedPlayer&);

    MCNAPI ::Scripting::Result_deprecated<void> swim(::SimulatedPlayer&);

    MCNAPI ::SimulatedPlayer* tryGetSimulatedPlayer() const;

    MCNAPI ::Scripting::Result_deprecated<bool>
    useItem(::SimulatedPlayer&, ::ScriptModuleMinecraft::ScriptItemStack const&);

    MCNAPI ::Scripting::Result_deprecated<bool> useItemInSlot(::SimulatedPlayer&, int);

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, gametest::GameTestError>
    useItemInSlotOnBlock(
        ::SimulatedPlayer&,
        int,
        ::Vec3 const&,
        ::ScriptModuleMinecraft::ScriptFacing,
        std::optional<Vec3>
    );

    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, gametest::GameTestError>
    useItemOnBlock(
        ::SimulatedPlayer&,
        ::ScriptModuleMinecraft::ScriptItemStack const&,
        ::Vec3 const&,
        ::ScriptModuleMinecraft::ScriptFacing,
        std::optional<Vec3>
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static float _getTestRotationAngle(::SimulatedPlayer const&);

    MCNAPI static std::optional<gametest::GameTestError> _toWorld(::SimulatedPlayer&, ::BlockPos*, uchar*, ::Vec3*);

    MCNAPI static ::ScriptModuleGameTest::ScriptNavigationResult
    _worldToLocalNavigationResult(::SimulatedPlayer&, ::ScriptModuleGameTest::ScriptNavigationResult);

    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleGameTest::ScriptSimulatedPlayer>
    getHandle(::Player const&, ::Scripting::WeakLifetimeScope const&);
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
    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError>
    $remove(::Actor&);

    MCNAPI bool $isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
