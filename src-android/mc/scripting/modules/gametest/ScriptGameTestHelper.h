#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/script_core/script_engine/scripting/Closure.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/scripting/modules/minecraft/block/ScriptFluidType.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class Vec3;
namespace ScriptModuleGameTest { class ScriptGameTestConnectivity; }
namespace ScriptModuleGameTest { class ScriptGameTestSequence; }
namespace ScriptModuleGameTest { class ScriptSculkSpreader; }
namespace ScriptModuleGameTest { class ScriptSimulatedPlayer; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
namespace gametest { class BaseGameTestHelper; }
namespace gametest { struct GameTestCompletedError; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptGameTestHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gametest::BaseGameTestHelper&>                                             mTestHelper;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                                             mScope;
    ::ll::UntypedStorage<8, 16>                                                                           mScriptHandle;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ScriptModuleGameTest::ScriptGameTestSequence>>> mSequences;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGameTestHelper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<const BlockType*> _getBlockFromVariant(
        std::variant<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockType>, std::string> const&
    );

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError> assertBlockState(
        ::Vec3 const&,
        ::Scripting::Closure<bool(Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptBlock>)>
    );

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError> assertBlockTypePresent(
        std::variant<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockType>, std::string> const&,
        ::Vec3 const&,
        bool
    );

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    assertCanReachLocation(::ScriptModuleMinecraft::ScriptActor&, ::Vec3 const&, bool);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    assertCondition(bool, std::string const&);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    assertContainerContains(::ScriptModuleMinecraft::ScriptItemStack const&, ::Vec3 const&);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    assertContainerEmpty(::Vec3 const&);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    assertEntityHasArmor(std::string const&, int, std::string const&, int, ::Vec3 const&, bool);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    assertEntityHasComponent(std::string const&, std::string const&, ::Vec3 const&, bool);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    assertEntityInstancePresent(::ScriptModuleMinecraft::ScriptActor const&, ::Vec3 const&, bool);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    assertEntityInstancePresentInArea(::ScriptModuleMinecraft::ScriptActor const&, bool) const;

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    assertEntityPresent(std::string const&, ::Vec3 const&, float, bool);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    assertEntityPresentInArea(std::string const&, bool);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError> assertEntityState(
        ::Vec3 const&,
        std::string const&,
        ::Scripting::Closure<bool(Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptActor>)>
    );

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    assertEntityTouching(std::string const&, ::Vec3 const&, bool);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    assertIsWaterlogged(::Vec3 const&, bool);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError> assertItemEntityCountIs(
        std::variant<std::string, Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType>>,
        ::Vec3 const&,
        float,
        int
    );

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError> assertItemEntityPresent(
        std::variant<std::string, Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemType>>,
        ::Vec3 const&,
        float,
        bool
    );

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    assertRedstonePower(::Vec3 const&, int);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    destroyBlock(::Vec3 const&, bool);

    MCNAPI ::Scripting::Result_deprecated<void> fail(std::string const&);

    MCNAPI ::Scripting::Result_deprecated<void> failIf(::Scripting::Closure<void()>);

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlock>,
        gametest::GameTestError,
        gametest::GameTestCompletedError>
    getBlock(::Vec3 const&);

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptDimension>,
        gametest::GameTestError,
        gametest::GameTestCompletedError>
    getDimension() const;

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestConnectivity>,
        gametest::GameTestError,
        gametest::GameTestCompletedError>
    getFenceConnectivity(::Vec3 const&);

    MCNAPI ::Scripting::Result<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleGameTest::ScriptSculkSpreader>>,
        gametest::GameTestError,
        gametest::GameTestCompletedError>
    getSculkSpreader(::Vec3 const&);

    MCNAPI ::Scripting::Result<ScriptModuleMinecraft::ScriptFacing, gametest::GameTestCompletedError>
    getTestDirection() const;

    MCNAPI ::Scripting::Result<Scripting::Promise<void, Scripting::Error>, gametest::GameTestCompletedError>
    idle(::Scripting::ScriptObjectFactory&, int);

    MCNAPI bool isTestInstanceCleaningUp() const;

    MCNAPI bool isTestInstanceCompleted() const;

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError> killAllEntities();

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    onPlayerJump(::ScriptModuleMinecraft::ScriptActor&, int);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    pressButton(::Vec3 const&);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    print(std::string const&);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    pullLever(::Vec3 const&);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    pulseRedstone(::Vec3 const&, int);

    MCNAPI ::Scripting::Result<Vec3, gametest::GameTestError, gametest::GameTestCompletedError>
    relativeBlockPosition(::Vec3 const&) const;

    MCNAPI ::Scripting::Result<Vec3, gametest::GameTestError, gametest::GameTestCompletedError>
    relativePosition(::Vec3 const&) const;

    MCNAPI ::Scripting::Result<void, gametest::GameTestCompletedError>
    removeSimulatedPlayer(::ScriptModuleGameTest::ScriptSimulatedPlayer const&);

    MCNAPI ::Scripting::
        Result<ScriptModuleMinecraft::ScriptFacing, gametest::GameTestError, gametest::GameTestCompletedError>
            rotateDirection(::ScriptModuleMinecraft::ScriptFacing) const;

    MCNAPI ::Scripting::Result<Vec3, gametest::GameTestError, gametest::GameTestCompletedError>
    rotateVector(::Vec3 const&) const;

    MCNAPI ::Scripting::Result_deprecated<void> runAfterDelay(int, ::Scripting::Closure<void()>);

    MCNAPI ::Scripting::Result_deprecated<void> runAtTickTime(int, ::Scripting::Closure<void()>);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
        runOnFinish(::Scripting::Closure<void()>);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    setBlockPermutation(::ScriptModuleMinecraft::ScriptBlockPermutation const&, ::Vec3 const&);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError> setBlockType(
        std::variant<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockType>, std::string> const&,
        ::Vec3 const&
    );

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    setFluidContainer(::Vec3 const&, ::ScriptModuleMinecraft::ScriptFluidType);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    setTntFuse(::ScriptModuleMinecraft::ScriptActor&, int);

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>,
        gametest::GameTestError,
        gametest::GameTestCompletedError>
    spawn(std::string const&, ::Vec3 const&);

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>,
        gametest::GameTestError,
        gametest::GameTestCompletedError>
    spawnAtLocation(std::string const&, ::Vec3 const&);

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>,
        gametest::GameTestError,
        gametest::GameTestCompletedError>
    spawnItem(::ScriptModuleMinecraft::ScriptItemStack const&, ::Vec3 const&);

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleGameTest::ScriptSimulatedPlayer>,
        gametest::GameTestError,
        gametest::GameTestCompletedError>
    spawnSimulatedPlayer(::Vec3 const&, std::string const&, ::GameType);

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>,
        gametest::GameTestError,
        gametest::GameTestCompletedError>
    spawnWithoutBehaviors(std::string const&, ::Vec3 const&);

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>,
        gametest::GameTestError,
        gametest::GameTestCompletedError>
    spawnWithoutBehaviorsAtLocation(std::string const&, ::Vec3 const&);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    spreadFromFaceTowardDirection(
        ::Vec3 const&,
        ::ScriptModuleMinecraft::ScriptFacing,
        ::ScriptModuleMinecraft::ScriptFacing
    );

    MCNAPI ::Scripting::Result<
        Scripting::WeakTypedObjectHandle<ScriptModuleGameTest::ScriptGameTestSequence>,
        gametest::GameTestCompletedError>
    startSequence();

    MCNAPI ::Scripting::Result_deprecated<void> succeed();

    MCNAPI ::Scripting::Result_deprecated<void> succeedIf(::Scripting::Closure<void()>);

    MCNAPI ::Scripting::Result_deprecated<void> succeedOnTick(int);

    MCNAPI ::Scripting::Result_deprecated<void> succeedOnTickWhen(int, ::Scripting::Closure<void()>);

    MCNAPI ::Scripting::Result_deprecated<void> succeedWhen(::Scripting::Closure<void()>);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError> succeedWhenBlockPresent(
        std::variant<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockType>, std::string> const&,
        ::Vec3 const&,
        bool
    );

    MCNAPI ::Scripting::Result_deprecated<void>
    succeedWhenEntityHasComponent(std::string const&, std::string const&, ::Vec3 const&, bool);

    MCNAPI ::Scripting::Result_deprecated<void> succeedWhenEntityPresent(std::string const&, ::Vec3 const&, bool);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    triggerInternalBlockEvent(::Vec3 const&, std::string const&, std::vector<float> const&);

    MCNAPI ::Scripting::Result<Scripting::Promise<void, Scripting::Error>, gametest::GameTestCompletedError>
    until(::Scripting::ScriptObjectFactory&, ::Scripting::Closure<void()>);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    walkTo(::ScriptModuleMinecraft::ScriptActor&, ::Vec3 const&, float);

    MCNAPI ::Scripting::Result<void, gametest::GameTestError, gametest::GameTestCompletedError>
    walkToLocation(::ScriptModuleMinecraft::ScriptActor&, ::Vec3 const&, float);

    MCNAPI ::Scripting::Result<Vec3, gametest::GameTestError, gametest::GameTestCompletedError>
    worldBlockPosition(::Vec3 const&) const;

    MCNAPI ::Scripting::Result<Vec3, gametest::GameTestError, gametest::GameTestCompletedError>
    worldPosition(::Vec3 const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<gametest::GameTestError> _callClosure(::Scripting::Closure<void()> const&);

    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
