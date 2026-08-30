#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/platform/PlatformType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deviceinfo/DeviceMemoryTier.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/server/ServerPlayer.h"
#include "mc/server/sim/BuildIntent.h"
#include "mc/server/sim/LookAtIntent.h"
#include "mc/server/sim/LookDuration.h"
#include "mc/server/sim/MovementIntent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorSwingSource.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#include "mc/world/actor/player/PlayerMovementSettings.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/storage/PlayerSuspendLevelStorageSaveToken.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class ChunkSource;
class ChunkViewSource;
class EntityContext;
class ItemStack;
class Level;
class NavigationComponent;
class NetworkIdentifier;
class PacketSender;
class ServerNetworkHandler;
class ServerNetworkSystem;
class Vec2;
class Vec3;
struct ActorUniqueID;
struct DimensionType;
struct PlayerAuthenticationInfo;
struct VariantParameterList;
namespace ClientBlobCache::Server { class ActiveTransfersManager; }
namespace ScriptModuleGameTest { struct ScriptNavigationResult; }
namespace gametest { class BaseGameTestHelper; }
namespace mce { class UUID; }
// clang-format on

class SimulatedPlayer : public ::ServerPlayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::sim::MovementIntent>                      mSimulatedMovement;
    ::ll::TypedStorage<4, 8, ::sim::BuildIntent>                          mBuildIntention;
    ::ll::UntypedStorage<4, 40>                                           mLookAtIntent;
    ::ll::TypedStorage<4, 16, std::optional<BlockPos>>                    mDestroyingBlockPos;
    ::ll::TypedStorage<1, 2, std::optional<uchar>>                        mDestroyingBlockFace;
    ::ll::UntypedStorage<8, 24>                                           mGameTestHelper;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                       mInputCooldownTick;
    ::ll::TypedStorage<8, 64, ::PlayerMovementSettings>                   mMovementSettings;
    ::ll::TypedStorage<4, 4, float>                                       mBaseInputSpeed;
    ::ll::TypedStorage<8, 24, std::string>                                mXuid;
    ::ll::TypedStorage<8, 40, ::PlayerSuspendLevelStorageSaveToken const> mPlayerSuspendLevelStorageSaveToken;
    // NOLINTEND

public:
    // prevent constructor by default
    SimulatedPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SimulatedPlayer();

    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void teleportTo(::Vec3 const&, bool, int, int, bool);

    virtual void aiStep();

    virtual bool isSimulated() const;

    virtual std::string getXuid() const;

    virtual ::PlayerMovementSettings const& getMovementSettings() const;

    virtual std::shared_ptr<ChunkViewSource> _createChunkSource(::ChunkSource&);

    virtual int _getSpawnChunkLimit() const;

    virtual void _updateChunkPublisherView(::Vec3 const&, float);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SimulatedPlayer(
        ::Level&,
        ::PacketSender&,
        ::ServerNetworkSystem&,
        ::ClientBlobCache::Server::ActiveTransfersManager&,
        ::GameType,
        ::NetworkIdentifier const&,
        ::SubClientId const,
        std::function<void(ServerPlayer&)>,
        ::mce::UUID,
        std::string const&,
        ::PlayerAuthenticationType,
        ::PlayerAuthenticationInfo const&,
        int,
        bool,
        ::EntityContext&
    );

    MCNAPI void _addMoveComponent();

    MCNAPI ::ScriptModuleGameTest::ScriptNavigationResult _createNavigationResult(::NavigationComponent*) const;

    MCNAPI void _updateDestroyBlock();

    MCNAPI void _updateMovement();

    MCNAPI void _updateRidingComponents();

    MCNAPI ::Bedrock::NonOwnerPointer<gametest::BaseGameTestHelper> getGameTestHelper() const;

    MCNAPI void postAiStep();

    MCNAPI void preAiStep();

    MCNAPI void setGameTestHelper(::Bedrock::NonOwnerPointer<gametest::BaseGameTestHelper>);

    MCNAPI void setXuid(std::string const&);

    MCNAPI bool simulateAttack();

    MCNAPI bool simulateAttack(::Actor*);

    MCNAPI void simulateChat(std::string const&);

    MCNAPI bool simulateDestroyBlock(::BlockPos const&, ::ScriptModuleMinecraft::ScriptFacing);

    MCNAPI void simulateDisconnect();

    MCNAPI bool simulateDropSelectedItem();

    MCNAPI void simulateFly();

    MCNAPI bool simulateGiveItem(::ItemStack&, bool);

    MCNAPI bool simulateInteract();

    MCNAPI bool simulateInteract(::Actor&);

    MCNAPI bool simulateInteract(::BlockPos const&, ::ScriptModuleMinecraft::ScriptFacing);

    MCNAPI bool simulateJump();

    MCNAPI void simulateLocalMove(::Vec3 const&, float);

    MCNAPI void simulateLookAt(::Vec3 const&, ::sim::LookDuration);

    MCNAPI void simulateLookAt(::Actor&, ::sim::LookDuration);

    MCNAPI void simulateLookAt(::BlockPos const&, ::sim::LookDuration);

    MCNAPI void simulateMoveToLocation(::Vec3 const&, float, bool);

    MCNAPI ::ScriptModuleGameTest::ScriptNavigationResult simulateNavigateToEntity(::Actor&, float);

    MCNAPI ::ScriptModuleGameTest::ScriptNavigationResult simulateNavigateToLocation(::Vec3 const&, float);

    MCNAPI void simulateNavigateToLocations(std::vector<Vec3>&&, float);

    MCNAPI bool simulateRespawn();

    MCNAPI void simulateSetBodyRotation(float);

    MCNAPI bool simulateSetItem(::ItemStack&, bool, int);

    MCNAPI void simulateStartBuildInSlot(int);

    MCNAPI void simulateStopBuild();

    MCNAPI void simulateStopDestroyingBlock();

    MCNAPI void simulateStopFlying();

    MCNAPI void simulateStopInteracting();

    MCNAPI void simulateStopMoving();

    MCNAPI void simulateStopUsingItem();

    MCNAPI bool simulateUseItem(::ItemStack&);

    MCNAPI bool simulateUseItemInSlot(int);

    MCNAPI bool
    simulateUseItemInSlotOnBlock(int, ::BlockPos const&, ::ScriptModuleMinecraft::ScriptFacing, ::Vec3 const&);

    MCNAPI bool
    simulateUseItemOnBlock(::ItemStack&, ::BlockPos const&, ::ScriptModuleMinecraft::ScriptFacing, ::Vec3 const&);

    MCNAPI void simulateWorldMove(::Vec3 const&, float);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SimulatedPlayer* create(
        std::string const&,
        ::Vec3 const&,
        ::DimensionType,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ServerNetworkHandler>>,
        std::string const&,
        std::optional<ActorUniqueID>
    );

    MCNAPI static ::SimulatedPlayer* create(
        std::string const&,
        ::Vec3 const&,
        ::Vec3 const&,
        ::Vec2 const&,
        bool const,
        ::DimensionType,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ServerNetworkHandler>>,
        std::string const&,
        std::optional<ActorUniqueID>
    );

    MCNAPI static ::SimulatedPlayer* tryGetFromEntity(::EntityContext&, bool const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Level&,
        ::PacketSender&,
        ::ServerNetworkSystem&,
        ::ClientBlobCache::Server::ActiveTransfersManager&,
        ::GameType,
        ::NetworkIdentifier const&,
        ::SubClientId const,
        std::function<void(ServerPlayer&)>,
        ::mce::UUID,
        std::string const&,
        ::PlayerAuthenticationType,
        ::PlayerAuthenticationInfo const&,
        int,
        bool,
        ::EntityContext&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI void $teleportTo(::Vec3 const&, bool, int, int, bool);

    MCNAPI void $aiStep();

    MCNAPI bool $isSimulated() const;

    MCNAPI std::string $getXuid() const;

    MCNAPI ::PlayerMovementSettings const& $getMovementSettings() const;

    MCNAPI std::shared_ptr<ChunkViewSource> $_createChunkSource(::ChunkSource&);

    MCNAPI int $_getSpawnChunkLimit() const;

    MCNAPI void $_updateChunkPublisherView(::Vec3 const&, float);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
