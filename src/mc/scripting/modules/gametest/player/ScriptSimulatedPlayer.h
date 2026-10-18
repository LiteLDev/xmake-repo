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
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptActorData; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
namespace Scripting { struct UnsupportedAPIError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace gametest { class BaseGameTestHelper; }
#else // @header-generator platform
#endif // @header-generator platform
namespace gametest { struct GameTestError; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptSimulatedPlayer : public ::ScriptModuleMinecraft::ScriptPlayer {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ScriptSimulatedPlayer();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptSimulatedPlayer();
#else // @header-generator platform
    virtual ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
        remove(::Actor& self) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError> remove(::Actor&);

    virtual bool isValid() const;
    // clang-format on
#else // @header-generator platform
    virtual bool isValid() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptSimulatedPlayer(::Player const&, ::Scripting::WeakLifetimeScope const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> attack(::SimulatedPlayer& self);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    ScriptSimulatedPlayer(::ScriptModuleMinecraft::ScriptActorData const&, ::Scripting::WeakLifetimeScope const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool>
    attackEntity(::SimulatedPlayer& self, ::ScriptModuleMinecraft::ScriptActor const& scriptActor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> attack(::SimulatedPlayer&);
#else // @header-generator platform
    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError>
    breakBlock(::SimulatedPlayer& self, ::Vec3 const& pos, ::ScriptModuleMinecraft::ScriptFacing face);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool>
    attackEntity(::SimulatedPlayer&, ::ScriptModuleMinecraft::ScriptActor const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> chat(::SimulatedPlayer& self, ::std::string const& message);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, gametest::GameTestError>
    breakBlock(::SimulatedPlayer&, ::Vec3 const&, ::ScriptModuleMinecraft::ScriptFacing);
#else // @header-generator platform
    MCFOLD ::Scripting::Result_deprecated<void> disconnect(::SimulatedPlayer& self);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> chat(::SimulatedPlayer&, std::string const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> dropSelectedItem(::SimulatedPlayer& self);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> disconnect(::SimulatedPlayer&);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> fly(::SimulatedPlayer& self);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> dropSelectedItem(::SimulatedPlayer&);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::Vec2> getHeadRotation(::SimulatedPlayer const& self) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> fly(::SimulatedPlayer&);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> getSprinting(::SimulatedPlayer const& self) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<Vec2> getHeadRotation(::SimulatedPlayer const&) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool>
    giveItem(::SimulatedPlayer& self, ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack, bool selectSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> getSprinting(::SimulatedPlayer const&) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> glide(::SimulatedPlayer& self);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool>
    giveItem(::SimulatedPlayer&, ::ScriptModuleMinecraft::ScriptItemStack const&, bool);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> interact(::SimulatedPlayer& self);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> glide(::SimulatedPlayer&);
#else // @header-generator platform
    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError>
    interactWithBlock(::SimulatedPlayer& self, ::Vec3 const& blockPos, ::ScriptModuleMinecraft::ScriptFacing facing);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<bool> interact(::SimulatedPlayer&);
#else // @header-generator platform
    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::InvalidArgumentError>
    interactWithEntity(::SimulatedPlayer& self, ::ScriptModuleMinecraft::ScriptActor const& scriptActor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, gametest::GameTestError>
    interactWithBlock(::SimulatedPlayer&, ::Vec3 const&, ::ScriptModuleMinecraft::ScriptFacing);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<bool> jump(::SimulatedPlayer& self);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::InvalidArgumentError>
    interactWithEntity(::SimulatedPlayer&, ::ScriptModuleMinecraft::ScriptActor const&);
#else // @header-generator platform
    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError>
    lookAtBlock(::SimulatedPlayer& self, ::Vec3 const& blockPos, ::sim::LookDuration duration);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> lookAtEntity(
        ::SimulatedPlayer&                          self,
        ::ScriptModuleMinecraft::ScriptActor const& scriptActor,
        ::sim::LookDuration                         duration
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidActorError, gametest::GameTestError>
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void>
    lookAtLocation(::SimulatedPlayer& self, ::Vec3 const& pos, ::sim::LookDuration duration);

    MCAPI ::Scripting::Result_deprecated<void>
    move(::SimulatedPlayer& self, float directionX, float directionZ, float speed);

    MCAPI ::Scripting::Result_deprecated<void>
    moveRelative(::SimulatedPlayer& self, float directionX, float directionZ, float speed);

    MCAPI ::Scripting::Result_deprecated<void> moveToBlock(
        ::SimulatedPlayer&                                           self,
        ::Vec3 const&                                                position,
        ::std::optional<::ScriptModuleGameTest::ScriptMoveToOptions> options
    );

    MCAPI ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError, ::Scripting::Error>
        moveToLocation(
            ::SimulatedPlayer&                                           self,
            ::Vec3 const&                                                position,
            ::std::optional<::ScriptModuleGameTest::ScriptMoveToOptions> options
        );

    MCAPI ::Scripting::Result<
        ::ScriptModuleGameTest::ScriptNavigationResult,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::gametest::GameTestError>
    navigateToBlock(::SimulatedPlayer& self, ::Vec3 const& position, float speed);

    MCAPI ::Scripting::Result<
        ::ScriptModuleGameTest::ScriptNavigationResult,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::InvalidArgumentError>
    navigateToEntity(::SimulatedPlayer& self, ::ScriptModuleMinecraft::ScriptActor const& scriptActor, float speed);

    MCAPI ::Scripting::Result<
        ::ScriptModuleGameTest::ScriptNavigationResult,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::gametest::GameTestError>
    navigateToLocation(::SimulatedPlayer& self, ::Vec3 const& position, float speed);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError>
    navigateToLocations(::SimulatedPlayer& self, ::std::vector<::Vec3> const& positions, float speed);

    MCAPI ::Scripting::Result_deprecated<bool> respawn(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<void> rotateBody(::SimulatedPlayer& self, float angleInDegrees);

    MCAPI ::Scripting::Result_deprecated<void> setBodyRotation(::SimulatedPlayer& self, float angleInDegrees);

    MCAPI ::Scripting::Result_deprecated<bool> setItem(
        ::SimulatedPlayer&                              self,
        ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack,
        int                                             slot,
        bool                                            selectSlot
    );

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    setSkin(::SimulatedPlayer& self, ::ScriptModuleGameTest::ScriptPlayerSkinData const& persona);

    MCAPI ::Scripting::Result_deprecated<void> setSprinting(::SimulatedPlayer& self, bool sprinting);

    MCAPI ::Scripting::Result_deprecated<void> startBuild(::SimulatedPlayer& self, int slot);

    MCAPI ::Scripting::Result_deprecated<void> stopBreakingBlock(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<void> stopBuild(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<void> stopFlying(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<void> stopGliding(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<void> stopInteracting(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<void> stopMoving(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<void> stopSwimming(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>>
    stopUsingItem(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<void> swim(::SimulatedPlayer& self);

    MCAPI ::Scripting::Result_deprecated<bool>
    useItem(::SimulatedPlayer& self, ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack);

    MCAPI ::Scripting::Result_deprecated<bool> useItemInSlot(::SimulatedPlayer& self, int slot);

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError>
    useItemInSlotOnBlock(
        ::SimulatedPlayer&                    self,
        int                                   slot,
        ::Vec3 const&                         pos,
        ::ScriptModuleMinecraft::ScriptFacing face,
        ::std::optional<::Vec3>               faceLocation
    );

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::gametest::GameTestError>
#endif // @header-generator platform
    useItemOnBlock(
#if defined(LL_PLAT_A) // @header-generator platform
        ::SimulatedPlayer&,
        ::ScriptModuleMinecraft::ScriptItemStack const&,
        ::Vec3 const&,
        ::ScriptModuleMinecraft::ScriptFacing,
        std::optional<Vec3>
#else // @header-generator platform
        ::SimulatedPlayer&                              self,
        ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack,
        ::Vec3 const&                                   pos,
        ::ScriptModuleMinecraft::ScriptFacing           face,
        ::std::optional<::Vec3>                         faceLocation
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float _getTestRotationAngle(::SimulatedPlayer const&);
#else // @header-generator platform
    MCAPI static ::std::optional<::gametest::GameTestError>
    _toWorld(::SimulatedPlayer& player, ::BlockPos* blockPos, uchar* face, ::Vec3* pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<gametest::GameTestError> _toWorld(::SimulatedPlayer&, ::BlockPos*, uchar*, ::Vec3*);
#else // @header-generator platform
    MCAPI static ::ScriptModuleGameTest::ScriptNavigationResult _worldToLocalNavigationResult(
        ::SimulatedPlayer&                             player,
        ::ScriptModuleGameTest::ScriptNavigationResult navigationResult
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ScriptModuleGameTest::ScriptNavigationResult
    _worldToLocalNavigationResult(::SimulatedPlayer&, ::ScriptModuleGameTest::ScriptNavigationResult);
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleGameTest::ScriptSimulatedPlayer>
    getHandle(::Player const& player, ::Scripting::WeakLifetimeScope const& scope);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, ScriptModuleMinecraft::ScriptInvalidActorError, Scripting::UnsupportedAPIError>
    $remove(::Actor&);
#else // @header-generator platform
    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
    $remove(::Actor& self);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid() const;
#else // @header-generator platform
    MCAPI bool $isValid() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
