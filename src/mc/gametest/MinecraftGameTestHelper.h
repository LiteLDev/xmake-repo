#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class MinecraftGameTestInstance;
#else // @header-generator platform
#endif // @header-generator platform
class Mob;
#if defined(LL_PLAT_A) // @header-generator platform
class ServerNetworkHandler;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::MinecraftGameTestInstance&> mGameTest;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk5b6854;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGameTestHelper& operator=(MinecraftGameTestHelper const&);
    MinecraftGameTestHelper(MinecraftGameTestHelper const&);
    MinecraftGameTestHelper();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~MinecraftGameTestHelper();
#else // @header-generator platform
    virtual ~MinecraftGameTestHelper() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void succeedWhenEntityPresent(::ActorDefinitionIdentifier const&, ::BlockPos const&, bool);
#else // @header-generator platform
    virtual void succeedWhenEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        int                                x,
        int                                y,
        int                                z,
        bool                               isPresent
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void succeedWhenEntityPresent(::ActorDefinitionIdentifier const&, int, int, int, bool);
#else // @header-generator platform
    virtual void succeedWhenEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::BlockPos const&                  pos,
        bool                               isPresent
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void succeedWhenEntityData(::BlockPos const&, ::ActorDefinitionIdentifier const&, std::function<bool (Actor&)>);
#else // @header-generator platform
    virtual void succeedWhenEntityData(
        ::BlockPos const&                  pos,
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::function<bool(::Actor&)>    dataPredicate
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void succeedWhenEntityHasComponent(::ActorDefinitionIdentifier const&, std::string const&, ::BlockPos const&, bool);
#else // @header-generator platform
    virtual void succeedWhenEntityHasComponent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::string const&               componentName,
        ::BlockPos const&                  pos,
        bool                               hasComponent
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void succeedWhenBlockPresent(::BlockType const&, ::BlockPos const&, bool);
#else // @header-generator platform
    virtual void succeedWhenBlockPresent(::Block const& block, int x, int y, int z, bool isPresent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void succeedWhenBlockPresent(::Block const&, ::BlockPos const&, bool);
#else // @header-generator platform
    virtual void succeedWhenBlockPresent(::Block const& block, ::BlockPos const& pos, bool isPresent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void succeedWhenBlockPresent(::Block const&, int, int, int, bool);
#else // @header-generator platform
    virtual void
    succeedWhenBlockPresent(::BlockType const& block, ::BlockPos const& position, bool isPresent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setNight();
#else // @header-generator platform
    virtual void setNight() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setDayTime(int);
#else // @header-generator platform
    virtual void setDayTime(int time) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> setBlock(::BlockPos const&, ::Block const&, int);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError>
    setBlock(int x, int y, int z, ::Block const& block, int updateFlags) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> setBlock(int, int, int, ::Block const&, int);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError>
    setBlock(::BlockPos const& pos, ::Block const& block, int updateFlags) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> destroyBlock(::BlockPos const&, bool);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError>
    destroyBlock(::BlockPos const& pos, bool dropResources) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> pressButton(::BlockPos const&);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> pressButton(int x, int y, int z) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> pressButton(int, int, int);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> pressButton(::BlockPos const& buttonPos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> pullLever(::BlockPos const&);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> pullLever(int x, int y, int z) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> pullLever(int, int, int);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> pullLever(::BlockPos const& leverPos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> killAllEntities();
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> killAllEntities() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::variant<gametest::GameTestError, Actor*> spawn(::ActorDefinitionIdentifier const&, ::Vec3 const&);
#else // @header-generator platform
    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawn(::ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::variant<gametest::GameTestError, Actor*> spawn(::ActorDefinitionIdentifier const&, ::BlockPos const&);
#else // @header-generator platform
    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawn(::ActorDefinitionIdentifier const& actorIdentifier, ::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::variant<gametest::GameTestError, Actor*> spawn(::ActorDefinitionIdentifier const&, int, int, int);
#else // @header-generator platform
    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawn(::ActorDefinitionIdentifier const& actorIdentifier, ::Vec3 const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::variant<gametest::GameTestError, Actor*> spawnItem(::ItemStack const&, ::Vec3 const&);
#else // @header-generator platform
    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawnItem(::ItemStack const& itemType, ::Vec3 const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::variant<gametest::GameTestError, Actor*> spawnWithoutBehaviors(::ActorDefinitionIdentifier const&, ::Vec3 const&);
#else // @header-generator platform
    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawnWithoutBehaviors(::ActorDefinitionIdentifier const& actorIdentifier, ::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::variant<gametest::GameTestError, Actor*> spawnWithoutBehaviors(::ActorDefinitionIdentifier const&, ::BlockPos const&);
#else // @header-generator platform
    virtual ::std::variant<::gametest::GameTestError, ::Actor*>
    spawnWithoutBehaviors(::ActorDefinitionIdentifier const& actorIdentifier, ::Vec3 const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> walkTo(::Mob&, ::Vec3 const&, float);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError>
    walkTo(::Mob& mob, ::BlockPos const& pos, float speedModifier) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> walkTo(::Mob&, ::BlockPos const&, float);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError>
    walkTo(::Mob& mob, ::Vec3 const& pos, float speedModifier) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> setTntFuse(::Actor&, int);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> setTntFuse(::Actor& actor, int fuseLength) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertEntityPresent(::ActorDefinitionIdentifier const&, ::BlockPos const&, float const, bool);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError>
    assertEntityPresent(::ActorDefinitionIdentifier const& actorIdentifier, bool isPresent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertEntityPresent(::ActorDefinitionIdentifier const&, ::BlockPos const&, bool);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> assertEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        int                                x,
        int                                y,
        int                                z,
        bool                               isPresent
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertEntityPresent(::ActorDefinitionIdentifier const&, int, int, int, bool);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> assertEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::BlockPos const&                  pos,
        bool                               isPresent
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertEntityPresent(::ActorDefinitionIdentifier const&, bool);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> assertEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::BlockPos const&                  pos,
        float const                        distance,
        bool                               isPresent
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertEntityInstancePresent(::Actor const*, bool) const;
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError>
    assertEntityInstancePresent(::Actor const* actor, ::BlockPos const& pos, bool expectedPresent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertEntityInstancePresent(::Actor const*, ::BlockPos const&, bool);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError>
    assertEntityInstancePresent(::Actor const* actor, bool expectedPresent) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertEntityTouching(::ActorDefinitionIdentifier const&, ::Vec3 const&, bool);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> assertEntityTouching(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::Vec3 const&                      pos,
        bool                               isTouching
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertEntityState(::BlockPos const&, ::ActorDefinitionIdentifier const&, std::function<bool (Actor&)>);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> assertEntityState(
        ::BlockPos const&                  pos,
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::function<bool(::Actor&)>    dataPredicate
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertBlockPresent(::BlockType const&, ::BlockPos const&, bool);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError>
    assertBlockPresent(::BlockType const& blockType, int x, int y, int z, bool isPresent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertBlockPresent(::BlockType const&, int, int, int, bool);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError>
    assertBlockPresent(::BlockType const& blockType, ::BlockPos const& pos, bool isPresent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertBlockState(::BlockPos const&, std::function<bool (const Block&)>);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError>
    assertBlockState(::BlockPos const& blockPos, ::std::function<bool(::Block const&)> predicate) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertItemEntityPresent(::Item const&, ::BlockPos const&, float, bool);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError>
    assertItemEntityPresent(::Item const& item, int x, int y, int z, float searchDistance, bool isPresent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertItemEntityPresent(::Item const&, int, int, int, float, bool);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> assertItemEntityPresent(
        ::Item const&     item,
        ::BlockPos const& pos,
        float             searchDistance,
        bool              isPresent
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertItemEntityCountIs(::Item const&, ::BlockPos const&, float, int);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> assertItemEntityCountIs(
        ::Item const&     itemType,
        ::BlockPos const& pos,
        float             searchDistance,
        int               expectedCount
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertContainerEmpty(::BlockPos const&);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> assertContainerEmpty(::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertContainerContains(::ItemStack const&, ::BlockPos const&);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError>
    assertContainerContains(::ItemStack const& item, ::BlockPos const& pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertEntityHasComponent(::ActorDefinitionIdentifier const&, std::string const&, ::BlockPos const&, bool);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> assertEntityHasComponent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::string const&               componentName,
        ::BlockPos const&                  pos,
        bool                               hasComponent
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertEntityHasArmor(::ActorDefinitionIdentifier const&, ::SharedTypes::Legacy::ArmorSlot, std::string const&, int, ::BlockPos const&, bool);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> assertEntityHasArmor(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::SharedTypes::Legacy::ArmorSlot   armorSlot,
        ::std::string const&               armorName,
        int                                dataValue,
        ::BlockPos const&                  pos,
        bool                               hasArmor
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> print(std::string const&);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> print(::std::string const& text) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertRedstonePower(::BlockPos const&, int);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError>
    assertRedstonePower(::BlockPos const& pos, int expectedPower) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertIsWaterlogged(::BlockPos const&, bool);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError>
    assertIsWaterlogged(::BlockPos const& pos, bool expectedWaterlogged) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> pulseRedstone(::BlockPos const&, int);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> pulseRedstone(::BlockPos const& pos, int duration) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::variant<gametest::GameTestError, ScriptModuleGameTest::ScriptGameTestConnectivity> getFenceConnectivity(::BlockPos const&);
#else // @header-generator platform
    virtual ::std::variant<::gametest::GameTestError, ::ScriptModuleGameTest::ScriptGameTestConnectivity>
    getFenceConnectivity(::BlockPos const& relativePos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::variant<gametest::GameTestError, Vec3> worldPosition(::Vec3 const&) const;
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError>
    setFluidContainer(::BlockPos const& pos, int _fluidType) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::variant<gametest::GameTestError, BlockPos> worldPosition(::BlockPos const&) const;
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> triggerInternalBlockEvent(
        ::BlockPos const&           pos,
        ::std::string const&        event,
        ::std::vector<float> const& parameters
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::variant<gametest::GameTestError, Vec3> relativePosition(::Vec3 const&) const;
#else // @header-generator platform
    virtual ::std::variant<::gametest::GameTestError, ::BlockPos> worldPosition(::BlockPos const& relativePos) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::variant<gametest::GameTestError, BlockPos> relativePosition(::BlockPos const&) const;
#else // @header-generator platform
    virtual ::std::variant<::gametest::GameTestError, ::Vec3> worldPosition(::Vec3 const& relativePos) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> setFluidContainer(::BlockPos const&, int);
#else // @header-generator platform
    virtual ::std::variant<::gametest::GameTestError, ::BlockPos> relativePosition(::BlockPos const& worldPos) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> triggerInternalBlockEvent(::BlockPos const&, std::string const&, std::vector<float> const&);
#else // @header-generator platform
    virtual ::std::variant<::gametest::GameTestError, ::Vec3> relativePosition(::Vec3 const& worldPos) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> assertCanReachLocation(::Mob&, ::BlockPos const&, bool);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError>
    assertCanReachLocation(::Mob& mob, ::BlockPos const& pos, bool expectedReach) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> spreadFromFaceTowardDirection(::BlockPos const&, ::ScriptModuleMinecraft::ScriptFacing, ::ScriptModuleMinecraft::ScriptFacing);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> spreadFromFaceTowardDirection(
        ::BlockPos const&                     pos,
        ::ScriptModuleMinecraft::ScriptFacing fromFace,
        ::ScriptModuleMinecraft::ScriptFacing direction
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::variant<gametest::GameTestError, SimulatedPlayer*> spawnSimulatedPlayer(std::string const&, ::BlockPos const&, ::GameType);
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> getBlockSource(::BlockSource*& blockSourceResult) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeSimulatedPlayer(::SimulatedPlayer&);
#else // @header-generator platform
    virtual ::std::variant<::gametest::GameTestError, ::SimulatedPlayer*>
    spawnSimulatedPlayer(::std::string const& name, ::BlockPos const& pos, ::GameType gameMode) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::variant<gametest::GameTestError, Dimension*> getDimension();
#else // @header-generator platform
    virtual void removeSimulatedPlayer(::SimulatedPlayer& simulatedPlayer) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> getBlockSource(::BlockSource*&);
#else // @header-generator platform
    virtual ::std::variant<::gametest::GameTestError, ::Dimension*> getDimension() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<gametest::GameTestError> onPlayerJump(::Mob&, int);
    // clang-format on
#else // @header-generator platform
    virtual ::std::optional<::gametest::GameTestError> onPlayerJump(::Mob& mob, int jumpAmount) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<gametest::GameTestError>
           _assertEntityInstancePresent(::Actor const*, ::AABB const&, ::BlockPos const&, bool) const;
#else // @header-generator platform
    MCAPI ::std::optional<::gametest::GameTestError> _assertEntityInstancePresent(
        ::Actor const*    actor,
        ::AABB const&     searchBounds,
        ::BlockPos const& relativeTestPosition,
        bool              expectedPresent
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<gametest::GameTestError>
           _assertEntityPresent(::ActorDefinitionIdentifier const&, ::AABB const&, ::BlockPos const&, bool) const;
#else // @header-generator platform
    MCAPI ::std::optional<::gametest::GameTestError> _assertEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::AABB const&                      searchBounds,
        ::BlockPos const&                  pos,
        bool                               expectedPresent
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container const* _getContainer(::BlockPos const&);
#else // @header-generator platform
    MCAPI ::Container const* _getContainer(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int _getItemEntityCount(::Item const&, ::AABB const&);
#else // @header-generator platform
    MCAPI int _getItemEntityCount(::Item const& item, ::AABB const& searchBounds);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<gametest::GameTestError> _getStructureBlockMissingError() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::std::optional<::gametest::GameTestError> _getStructureBlockMissingError() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $succeedWhenEntityPresent(::ActorDefinitionIdentifier const&, ::BlockPos const&, bool);
#else // @header-generator platform
    MCAPI void
    $succeedWhenEntityPresent(::ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z, bool isPresent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $succeedWhenEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::BlockPos const&                  pos,
        bool                               isPresent
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void $succeedWhenEntityData(
        ::BlockPos const&                  pos,
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::function<bool(::Actor&)>    dataPredicate
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::variant<gametest::GameTestError, SimulatedPlayer*>
           $spawnSimulatedPlayer(std::string const&, ::BlockPos const&, ::GameType);
#else // @header-generator platform
    MCAPI void $succeedWhenEntityHasComponent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::string const&               componentName,
        ::BlockPos const&                  pos,
        bool                               hasComponent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $removeSimulatedPlayer(::SimulatedPlayer&);
#else // @header-generator platform
    MCAPI void $succeedWhenBlockPresent(::Block const& block, int x, int y, int z, bool isPresent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::variant<gametest::GameTestError, Dimension*> $getDimension();
#else // @header-generator platform
    MCAPI void $succeedWhenBlockPresent(::Block const& block, ::BlockPos const& pos, bool isPresent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<gametest::GameTestError> $getBlockSource(::BlockSource*&);
#else // @header-generator platform
    MCAPI void $succeedWhenBlockPresent(::BlockType const& block, ::BlockPos const& position, bool isPresent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<gametest::GameTestError> $onPlayerJump(::Mob&, int);
#else // @header-generator platform
    MCAPI void $setNight();

    MCAPI void $setDayTime(int time);

    MCAPI ::std::optional<::gametest::GameTestError>
    $setBlock(int x, int y, int z, ::Block const& block, int updateFlags);

    MCAPI ::std::optional<::gametest::GameTestError>
    $setBlock(::BlockPos const& pos, ::Block const& block, int updateFlags);

    MCAPI ::std::optional<::gametest::GameTestError> $destroyBlock(::BlockPos const& pos, bool dropResources);

    MCAPI ::std::optional<::gametest::GameTestError> $pressButton(int x, int y, int z);

    MCAPI ::std::optional<::gametest::GameTestError> $pressButton(::BlockPos const& buttonPos);

    MCAPI ::std::optional<::gametest::GameTestError> $pullLever(int x, int y, int z);

    MCAPI ::std::optional<::gametest::GameTestError> $pullLever(::BlockPos const& leverPos);

    MCAPI ::std::optional<::gametest::GameTestError> $killAllEntities();

    MCAPI ::std::variant<::gametest::GameTestError, ::Actor*>
    $spawn(::ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z);

    MCAPI ::std::variant<::gametest::GameTestError, ::Actor*>
    $spawn(::ActorDefinitionIdentifier const& actorIdentifier, ::BlockPos const& pos);

    MCAPI ::std::variant<::gametest::GameTestError, ::Actor*>
    $spawn(::ActorDefinitionIdentifier const& actorIdentifier, ::Vec3 const& pos);

    MCAPI ::std::variant<::gametest::GameTestError, ::Actor*>
    $spawnItem(::ItemStack const& itemType, ::Vec3 const& pos);

    MCAPI ::std::variant<::gametest::GameTestError, ::Actor*>
    $spawnWithoutBehaviors(::ActorDefinitionIdentifier const& actorIdentifier, ::BlockPos const& pos);

    MCAPI ::std::variant<::gametest::GameTestError, ::Actor*>
    $spawnWithoutBehaviors(::ActorDefinitionIdentifier const& actorIdentifier, ::Vec3 const& pos);

    MCAPI ::std::optional<::gametest::GameTestError> $walkTo(::Mob& mob, ::BlockPos const& pos, float speedModifier);

    MCAPI ::std::optional<::gametest::GameTestError> $walkTo(::Mob& mob, ::Vec3 const& pos, float speedModifier);

    MCAPI ::std::optional<::gametest::GameTestError> $setTntFuse(::Actor& actor, int fuseLength);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertEntityPresent(::ActorDefinitionIdentifier const& actorIdentifier, bool isPresent);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertEntityPresent(::ActorDefinitionIdentifier const& actorIdentifier, int x, int y, int z, bool isPresent);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertEntityPresent(::ActorDefinitionIdentifier const& actorIdentifier, ::BlockPos const& pos, bool isPresent);

    MCAPI ::std::optional<::gametest::GameTestError> $assertEntityPresent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::BlockPos const&                  pos,
        float const                        distance,
        bool                               isPresent
    );

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertEntityInstancePresent(::Actor const* actor, ::BlockPos const& pos, bool expectedPresent);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertEntityInstancePresent(::Actor const* actor, bool expectedPresent) const;

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertEntityTouching(::ActorDefinitionIdentifier const& actorIdentifier, ::Vec3 const& pos, bool isTouching);

    MCAPI ::std::optional<::gametest::GameTestError> $assertEntityState(
        ::BlockPos const&                  pos,
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::function<bool(::Actor&)>    dataPredicate
    );

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertBlockPresent(::BlockType const& blockType, int x, int y, int z, bool isPresent);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertBlockPresent(::BlockType const& blockType, ::BlockPos const& pos, bool isPresent);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertBlockState(::BlockPos const& blockPos, ::std::function<bool(::Block const&)> predicate);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertItemEntityPresent(::Item const& item, int x, int y, int z, float searchDistance, bool isPresent);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertItemEntityPresent(::Item const& item, ::BlockPos const& pos, float searchDistance, bool isPresent);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertItemEntityCountIs(::Item const& itemType, ::BlockPos const& pos, float searchDistance, int expectedCount);

    MCAPI ::std::optional<::gametest::GameTestError> $assertContainerEmpty(::BlockPos const& pos);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertContainerContains(::ItemStack const& item, ::BlockPos const& pos);

    MCAPI ::std::optional<::gametest::GameTestError> $assertEntityHasComponent(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::std::string const&               componentName,
        ::BlockPos const&                  pos,
        bool                               hasComponent
    );

    MCAPI ::std::optional<::gametest::GameTestError> $assertEntityHasArmor(
        ::ActorDefinitionIdentifier const& actorIdentifier,
        ::SharedTypes::Legacy::ArmorSlot   armorSlot,
        ::std::string const&               armorName,
        int                                dataValue,
        ::BlockPos const&                  pos,
        bool                               hasArmor
    );

    MCAPI ::std::optional<::gametest::GameTestError> $print(::std::string const& text);

    MCAPI ::std::optional<::gametest::GameTestError> $assertRedstonePower(::BlockPos const& pos, int expectedPower);

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertIsWaterlogged(::BlockPos const& pos, bool expectedWaterlogged);

    MCAPI ::std::optional<::gametest::GameTestError> $pulseRedstone(::BlockPos const& pos, int duration);

    MCAPI ::std::variant<::gametest::GameTestError, ::ScriptModuleGameTest::ScriptGameTestConnectivity>
    $getFenceConnectivity(::BlockPos const& relativePos);

    MCAPI ::std::optional<::gametest::GameTestError> $setFluidContainer(::BlockPos const& pos, int _fluidType);

    MCAPI ::std::optional<::gametest::GameTestError> $triggerInternalBlockEvent(
        ::BlockPos const&           pos,
        ::std::string const&        event,
        ::std::vector<float> const& parameters
    );

    MCAPI ::std::variant<::gametest::GameTestError, ::BlockPos> $worldPosition(::BlockPos const& relativePos) const;

    MCAPI ::std::variant<::gametest::GameTestError, ::Vec3> $worldPosition(::Vec3 const& relativePos) const;

    MCAPI ::std::variant<::gametest::GameTestError, ::BlockPos> $relativePosition(::BlockPos const& worldPos) const;

    MCAPI ::std::variant<::gametest::GameTestError, ::Vec3> $relativePosition(::Vec3 const& worldPos) const;

    MCAPI ::std::optional<::gametest::GameTestError>
    $assertCanReachLocation(::Mob& mob, ::BlockPos const& pos, bool expectedReach);

    MCAPI ::std::optional<::gametest::GameTestError> $spreadFromFaceTowardDirection(
        ::BlockPos const&                     pos,
        ::ScriptModuleMinecraft::ScriptFacing fromFace,
        ::ScriptModuleMinecraft::ScriptFacing direction
    );

    MCAPI ::std::optional<::gametest::GameTestError> $getBlockSource(::BlockSource*& blockSourceResult);

    MCAPI ::std::variant<::gametest::GameTestError, ::SimulatedPlayer*>
    $spawnSimulatedPlayer(::std::string const& name, ::BlockPos const& pos, ::GameType gameMode);

    MCAPI void $removeSimulatedPlayer(::SimulatedPlayer& simulatedPlayer);

    MCAPI ::std::variant<::gametest::GameTestError, ::Dimension*> $getDimension();

    MCAPI ::std::optional<::gametest::GameTestError> $onPlayerJump(::Mob& mob, int jumpAmount);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
