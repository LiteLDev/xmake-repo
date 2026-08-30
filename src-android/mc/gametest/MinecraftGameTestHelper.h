#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/gametest/framework/BaseGameTestHelper.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class Container;
class Dimension;
class Item;
class ItemStack;
class MinecraftGameTestInstance;
class Mob;
class ServerNetworkHandler;
class SimulatedPlayer;
class Vec3;
struct ActorDefinitionIdentifier;
namespace ScriptModuleGameTest { class ScriptGameTestConnectivity; }
namespace gametest { struct GameTestError; }
// clang-format on

class MinecraftGameTestHelper : public ::gametest::BaseGameTestHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MinecraftGameTestInstance&> mGameTest;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGameTestHelper& operator=(MinecraftGameTestHelper const&);
    MinecraftGameTestHelper(MinecraftGameTestHelper const&);
    MinecraftGameTestHelper();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MinecraftGameTestHelper();

    virtual void succeedWhenEntityPresent(::ActorDefinitionIdentifier const&, ::BlockPos const&, bool);

    virtual void succeedWhenEntityPresent(::ActorDefinitionIdentifier const&, int, int, int, bool);

    virtual void succeedWhenEntityData(::BlockPos const&, ::ActorDefinitionIdentifier const&, std::function<bool (Actor&)>);

    virtual void succeedWhenEntityHasComponent(::ActorDefinitionIdentifier const&, std::string const&, ::BlockPos const&, bool);

    virtual void succeedWhenBlockPresent(::BlockType const&, ::BlockPos const&, bool);

    virtual void succeedWhenBlockPresent(::Block const&, ::BlockPos const&, bool);

    virtual void succeedWhenBlockPresent(::Block const&, int, int, int, bool);

    virtual void setNight();

    virtual void setDayTime(int);

    virtual std::optional<gametest::GameTestError> setBlock(::BlockPos const&, ::Block const&, int);

    virtual std::optional<gametest::GameTestError> setBlock(int, int, int, ::Block const&, int);

    virtual std::optional<gametest::GameTestError> destroyBlock(::BlockPos const&, bool);

    virtual std::optional<gametest::GameTestError> pressButton(::BlockPos const&);

    virtual std::optional<gametest::GameTestError> pressButton(int, int, int);

    virtual std::optional<gametest::GameTestError> pullLever(::BlockPos const&);

    virtual std::optional<gametest::GameTestError> pullLever(int, int, int);

    virtual std::optional<gametest::GameTestError> killAllEntities();

    virtual std::variant<gametest::GameTestError, Actor*> spawn(::ActorDefinitionIdentifier const&, ::Vec3 const&);

    virtual std::variant<gametest::GameTestError, Actor*> spawn(::ActorDefinitionIdentifier const&, ::BlockPos const&);

    virtual std::variant<gametest::GameTestError, Actor*> spawn(::ActorDefinitionIdentifier const&, int, int, int);

    virtual std::variant<gametest::GameTestError, Actor*> spawnItem(::ItemStack const&, ::Vec3 const&);

    virtual std::variant<gametest::GameTestError, Actor*> spawnWithoutBehaviors(::ActorDefinitionIdentifier const&, ::Vec3 const&);

    virtual std::variant<gametest::GameTestError, Actor*> spawnWithoutBehaviors(::ActorDefinitionIdentifier const&, ::BlockPos const&);

    virtual std::optional<gametest::GameTestError> walkTo(::Mob&, ::Vec3 const&, float);

    virtual std::optional<gametest::GameTestError> walkTo(::Mob&, ::BlockPos const&, float);

    virtual std::optional<gametest::GameTestError> setTntFuse(::Actor&, int);

    virtual std::optional<gametest::GameTestError> assertEntityPresent(::ActorDefinitionIdentifier const&, ::BlockPos const&, float const, bool);

    virtual std::optional<gametest::GameTestError> assertEntityPresent(::ActorDefinitionIdentifier const&, ::BlockPos const&, bool);

    virtual std::optional<gametest::GameTestError> assertEntityPresent(::ActorDefinitionIdentifier const&, int, int, int, bool);

    virtual std::optional<gametest::GameTestError> assertEntityPresent(::ActorDefinitionIdentifier const&, bool);

    virtual std::optional<gametest::GameTestError> assertEntityInstancePresent(::Actor const*, bool) const;

    virtual std::optional<gametest::GameTestError> assertEntityInstancePresent(::Actor const*, ::BlockPos const&, bool);

    virtual std::optional<gametest::GameTestError> assertEntityTouching(::ActorDefinitionIdentifier const&, ::Vec3 const&, bool);

    virtual std::optional<gametest::GameTestError> assertEntityState(::BlockPos const&, ::ActorDefinitionIdentifier const&, std::function<bool (Actor&)>);

    virtual std::optional<gametest::GameTestError> assertBlockPresent(::BlockType const&, ::BlockPos const&, bool);

    virtual std::optional<gametest::GameTestError> assertBlockPresent(::BlockType const&, int, int, int, bool);

    virtual std::optional<gametest::GameTestError> assertBlockState(::BlockPos const&, std::function<bool (const Block&)>);

    virtual std::optional<gametest::GameTestError> assertItemEntityPresent(::Item const&, ::BlockPos const&, float, bool);

    virtual std::optional<gametest::GameTestError> assertItemEntityPresent(::Item const&, int, int, int, float, bool);

    virtual std::optional<gametest::GameTestError> assertItemEntityCountIs(::Item const&, ::BlockPos const&, float, int);

    virtual std::optional<gametest::GameTestError> assertContainerEmpty(::BlockPos const&);

    virtual std::optional<gametest::GameTestError> assertContainerContains(::ItemStack const&, ::BlockPos const&);

    virtual std::optional<gametest::GameTestError> assertEntityHasComponent(::ActorDefinitionIdentifier const&, std::string const&, ::BlockPos const&, bool);

    virtual std::optional<gametest::GameTestError> assertEntityHasArmor(::ActorDefinitionIdentifier const&, ::SharedTypes::Legacy::ArmorSlot, std::string const&, int, ::BlockPos const&, bool);

    virtual std::optional<gametest::GameTestError> print(std::string const&);

    virtual std::optional<gametest::GameTestError> assertRedstonePower(::BlockPos const&, int);

    virtual std::optional<gametest::GameTestError> assertIsWaterlogged(::BlockPos const&, bool);

    virtual std::optional<gametest::GameTestError> pulseRedstone(::BlockPos const&, int);

    virtual std::variant<gametest::GameTestError, ScriptModuleGameTest::ScriptGameTestConnectivity> getFenceConnectivity(::BlockPos const&);

    virtual std::variant<gametest::GameTestError, Vec3> worldPosition(::Vec3 const&) const;

    virtual std::variant<gametest::GameTestError, BlockPos> worldPosition(::BlockPos const&) const;

    virtual std::variant<gametest::GameTestError, Vec3> relativePosition(::Vec3 const&) const;

    virtual std::variant<gametest::GameTestError, BlockPos> relativePosition(::BlockPos const&) const;

    virtual std::optional<gametest::GameTestError> setFluidContainer(::BlockPos const&, int);

    virtual std::optional<gametest::GameTestError> triggerInternalBlockEvent(::BlockPos const&, std::string const&, std::vector<float> const&);

    virtual std::optional<gametest::GameTestError> assertCanReachLocation(::Mob&, ::BlockPos const&, bool);

    virtual std::optional<gametest::GameTestError> spreadFromFaceTowardDirection(::BlockPos const&, ::ScriptModuleMinecraft::ScriptFacing, ::ScriptModuleMinecraft::ScriptFacing);

    virtual std::variant<gametest::GameTestError, SimulatedPlayer*> spawnSimulatedPlayer(std::string const&, ::BlockPos const&, ::GameType);

    virtual void removeSimulatedPlayer(::SimulatedPlayer&);

    virtual std::variant<gametest::GameTestError, Dimension*> getDimension();

    virtual std::optional<gametest::GameTestError> getBlockSource(::BlockSource*&);

    virtual std::optional<gametest::GameTestError> onPlayerJump(::Mob&, int);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<gametest::GameTestError>
           _assertEntityInstancePresent(::Actor const*, ::AABB const&, ::BlockPos const&, bool) const;

    MCNAPI std::optional<gametest::GameTestError>
           _assertEntityPresent(::ActorDefinitionIdentifier const&, ::AABB const&, ::BlockPos const&, bool) const;

    MCNAPI ::Container const* _getContainer(::BlockPos const&);

    MCNAPI int _getItemEntityCount(::Item const&, ::AABB const&);

    MCNAPI std::optional<gametest::GameTestError> _getStructureBlockMissingError() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $succeedWhenEntityPresent(::ActorDefinitionIdentifier const&, ::BlockPos const&, bool);

    MCNAPI void $succeedWhenEntityPresent(::ActorDefinitionIdentifier const&, int, int, int, bool);

    MCNAPI void
    $succeedWhenEntityData(::BlockPos const&, ::ActorDefinitionIdentifier const&, std::function<bool(Actor&)>);

    MCNAPI void
    $succeedWhenEntityHasComponent(::ActorDefinitionIdentifier const&, std::string const&, ::BlockPos const&, bool);

    MCNAPI void $succeedWhenBlockPresent(::BlockType const&, ::BlockPos const&, bool);

    MCNAPI void $succeedWhenBlockPresent(::Block const&, ::BlockPos const&, bool);

    MCNAPI void $succeedWhenBlockPresent(::Block const&, int, int, int, bool);

    MCNAPI void $setNight();

    MCNAPI void $setDayTime(int);

    MCNAPI std::optional<gametest::GameTestError> $setBlock(::BlockPos const&, ::Block const&, int);

    MCNAPI std::optional<gametest::GameTestError> $setBlock(int, int, int, ::Block const&, int);

    MCNAPI std::optional<gametest::GameTestError> $destroyBlock(::BlockPos const&, bool);

    MCNAPI std::optional<gametest::GameTestError> $pressButton(::BlockPos const&);

    MCNAPI std::optional<gametest::GameTestError> $pressButton(int, int, int);

    MCNAPI std::optional<gametest::GameTestError> $pullLever(::BlockPos const&);

    MCNAPI std::optional<gametest::GameTestError> $pullLever(int, int, int);

    MCNAPI std::optional<gametest::GameTestError> $killAllEntities();

    MCNAPI std::variant<gametest::GameTestError, Actor*> $spawn(::ActorDefinitionIdentifier const&, ::Vec3 const&);

    MCNAPI std::variant<gametest::GameTestError, Actor*> $spawn(::ActorDefinitionIdentifier const&, ::BlockPos const&);

    MCNAPI std::variant<gametest::GameTestError, Actor*> $spawn(::ActorDefinitionIdentifier const&, int, int, int);

    MCNAPI std::variant<gametest::GameTestError, Actor*> $spawnItem(::ItemStack const&, ::Vec3 const&);

    MCNAPI std::variant<gametest::GameTestError, Actor*>
           $spawnWithoutBehaviors(::ActorDefinitionIdentifier const&, ::Vec3 const&);

    MCNAPI std::variant<gametest::GameTestError, Actor*>
           $spawnWithoutBehaviors(::ActorDefinitionIdentifier const&, ::BlockPos const&);

    MCNAPI std::optional<gametest::GameTestError> $walkTo(::Mob&, ::Vec3 const&, float);

    MCNAPI std::optional<gametest::GameTestError> $walkTo(::Mob&, ::BlockPos const&, float);

    MCNAPI std::optional<gametest::GameTestError> $setTntFuse(::Actor&, int);

    MCNAPI std::optional<gametest::GameTestError>
           $assertEntityPresent(::ActorDefinitionIdentifier const&, ::BlockPos const&, float const, bool);

    MCNAPI std::optional<gametest::GameTestError>
           $assertEntityPresent(::ActorDefinitionIdentifier const&, ::BlockPos const&, bool);

    MCNAPI std::optional<gametest::GameTestError>
           $assertEntityPresent(::ActorDefinitionIdentifier const&, int, int, int, bool);

    MCNAPI std::optional<gametest::GameTestError> $assertEntityPresent(::ActorDefinitionIdentifier const&, bool);

    MCNAPI std::optional<gametest::GameTestError> $assertEntityInstancePresent(::Actor const*, bool) const;

    MCNAPI std::optional<gametest::GameTestError> $assertEntityInstancePresent(::Actor const*, ::BlockPos const&, bool);

    MCNAPI std::optional<gametest::GameTestError>
           $assertEntityTouching(::ActorDefinitionIdentifier const&, ::Vec3 const&, bool);

    MCNAPI std::optional<gametest::GameTestError>
           $assertEntityState(::BlockPos const&, ::ActorDefinitionIdentifier const&, std::function<bool(Actor&)>);

    MCNAPI std::optional<gametest::GameTestError> $assertBlockPresent(::BlockType const&, ::BlockPos const&, bool);

    MCNAPI std::optional<gametest::GameTestError> $assertBlockPresent(::BlockType const&, int, int, int, bool);

    MCNAPI std::optional<gametest::GameTestError>
           $assertBlockState(::BlockPos const&, std::function<bool(const Block&)>);

    MCNAPI std::optional<gametest::GameTestError>
           $assertItemEntityPresent(::Item const&, ::BlockPos const&, float, bool);

    MCNAPI std::optional<gametest::GameTestError> $assertItemEntityPresent(::Item const&, int, int, int, float, bool);

    MCNAPI std::optional<gametest::GameTestError>
           $assertItemEntityCountIs(::Item const&, ::BlockPos const&, float, int);

    MCNAPI std::optional<gametest::GameTestError> $assertContainerEmpty(::BlockPos const&);

    MCNAPI std::optional<gametest::GameTestError> $assertContainerContains(::ItemStack const&, ::BlockPos const&);

    MCNAPI std::optional<gametest::GameTestError>
           $assertEntityHasComponent(::ActorDefinitionIdentifier const&, std::string const&, ::BlockPos const&, bool);

    MCNAPI std::optional<gametest::GameTestError> $assertEntityHasArmor(
        ::ActorDefinitionIdentifier const&,
        ::SharedTypes::Legacy::ArmorSlot,
        std::string const&,
        int,
        ::BlockPos const&,
        bool
    );

    MCNAPI std::optional<gametest::GameTestError> $print(std::string const&);

    MCNAPI std::optional<gametest::GameTestError> $assertRedstonePower(::BlockPos const&, int);

    MCNAPI std::optional<gametest::GameTestError> $assertIsWaterlogged(::BlockPos const&, bool);

    MCNAPI std::optional<gametest::GameTestError> $pulseRedstone(::BlockPos const&, int);

    MCNAPI std::variant<gametest::GameTestError, ScriptModuleGameTest::ScriptGameTestConnectivity>
           $getFenceConnectivity(::BlockPos const&);

    MCNAPI std::variant<gametest::GameTestError, Vec3> $worldPosition(::Vec3 const&) const;

    MCNAPI std::variant<gametest::GameTestError, BlockPos> $worldPosition(::BlockPos const&) const;

    MCNAPI std::variant<gametest::GameTestError, Vec3> $relativePosition(::Vec3 const&) const;

    MCNAPI std::variant<gametest::GameTestError, BlockPos> $relativePosition(::BlockPos const&) const;

    MCNAPI std::optional<gametest::GameTestError> $setFluidContainer(::BlockPos const&, int);

    MCNAPI std::optional<gametest::GameTestError>
           $triggerInternalBlockEvent(::BlockPos const&, std::string const&, std::vector<float> const&);

    MCNAPI std::optional<gametest::GameTestError> $assertCanReachLocation(::Mob&, ::BlockPos const&, bool);

    MCNAPI std::optional<gametest::GameTestError> $spreadFromFaceTowardDirection(
        ::BlockPos const&,
        ::ScriptModuleMinecraft::ScriptFacing,
        ::ScriptModuleMinecraft::ScriptFacing
    );

    MCNAPI std::variant<gametest::GameTestError, SimulatedPlayer*>
           $spawnSimulatedPlayer(std::string const&, ::BlockPos const&, ::GameType);

    MCNAPI void $removeSimulatedPlayer(::SimulatedPlayer&);

    MCNAPI std::variant<gametest::GameTestError, Dimension*> $getDimension();

    MCNAPI std::optional<gametest::GameTestError> $getBlockSource(::BlockSource*&);

    MCNAPI std::optional<gametest::GameTestError> $onPlayerJump(::Mob&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
