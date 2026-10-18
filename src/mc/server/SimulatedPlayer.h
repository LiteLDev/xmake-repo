#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/server/sim/LookDuration.h"
#include "mc/world/actor/player/PlayerInventory.h"
#include "mc/world/actor/provider/SynchedActorDataAccess.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/common/SubClientId.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/platform/PlatformType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deviceinfo/DeviceMemoryTier.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/server/ServerPlayer.h"
#include "mc/server/sim/BuildIntent.h"
#include "mc/server/sim/LookAtIntent.h"
#include "mc/server/sim/LookDuration.h"
#include "mc/server/sim/MovementIntent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorSwingSource.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/player/PlayerMovementSettings.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/storage/PlayerSuspendLevelStorageSaveToken.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LLAPI static optional_ref<SimulatedPlayer>
    create(std::string const& name, Vec3 const& pos, DimensionType dimId = 0, Vec2 const& rotation = {0, 0});

    bool simulateSneaking() {
        setSneaking(true);
        return SynchedActorDataAccess::getActorFlag(mEntityContext, ActorFlags::Sneaking);
    }
    bool simulateStopSneaking() {
        setSneaking(false);
        return !SynchedActorDataAccess::getActorFlag(mEntityContext, ActorFlags::Sneaking);
    }
    bool simulateUseItem() { return simulateUseItemInSlot(mInventory->mSelected); }

    LLAPI bool simulateDestroyBlock(BlockPos const&, ScriptModuleMinecraft::ScriptFacing);
    LLAPI bool simulateDestroyLookAt(float handLength = 5.5f);
    LLAPI void simulateStopMoving();
    LLAPI bool simulateAttack(Actor* target);
    LLAPI void simulateStartBuildInSlot(int slot);
    LLAPI void simulateStopBuild();
    LLAPI void simulateStopUsingItem();
    LLAPI bool simulateGiveItem(ItemStack& item, bool selectSlot);
    LLAPI bool simulateSetItem(ItemStack const& item, bool selectSlot, int slot);
    LLAPI bool simulateDropSelectedItem();
    LLAPI bool simulateInteract(Actor& actor);
    LLAPI void simulateStopInteracting();
    LLAPI bool isSimulatingDestroyingBlock();
    // LLAPI void simulateLookAt(Vec3 const& pos, sim::LookDuration lookType = sim::LookDuration::Instant);
    LLAPI void simulateLookAt(Actor& actor, sim::LookDuration lookType = sim::LookDuration::Instant);
    // LLAPI void simulateLookAt(BlockPos const& blockPos, sim::LookDuration lookType = sim::LookDuration::Instant);
    LLAPI void simulateDisconnect();
    LLAPI bool simulateRespawn();
    LLAPI void simulateFly();
    LLAPI void simulateStopFlying();
    LLAPI void simulateWorldMove(::Vec3 const& worldDirection, float = 1.0f);
    LLAPI void simulateLocalMove(::Vec3 const& localDirection, float = 1.0f);
    LLAPI void simulateMoveToLocation(::Vec3 const& position, float speed, bool faceTarget);
    LLAPI void simulateStopDestroyingBlock();
    LLAPI bool simulateInteract(::BlockPos const& pos, ::ScriptModuleMinecraft::ScriptFacing face);


    LLAPI static ::SimulatedPlayer* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::sim::MovementIntent>                                      mSimulatedMovement;
    ::ll::TypedStorage<1, 2, ::sim::BuildIntent>                                          mBuildIntention;
    ::ll::TypedStorage<8, 40, ::sim::LookAtIntent>                                        mLookAtIntent;
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>>                                mDestroyingBlockPos;
    ::ll::TypedStorage<1, 2, ::std::optional<uchar>>                                      mDestroyingBlockFace;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::gametest::BaseGameTestHelper>> mGameTestHelper;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>                                    mInputCooldownTick;
    ::ll::TypedStorage<8, 64, ::PlayerMovementSettings>                                   mMovementSettings;
    ::ll::TypedStorage<4, 4, float>                                                       mBaseInputSpeed;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mXuid;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 40, ::PlayerSuspendLevelStorageSaveToken const> mPlayerSuspendLevelStorageSaveToken;
    // NOLINTEND

public:
    // prevent constructor by default
    SimulatedPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SimulatedPlayer();
#else // @header-generator platform
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual void aiStep() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void teleportTo(::Vec3 const&, bool, int, int, bool);
#else // @header-generator platform
    virtual bool isSimulated() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void aiStep();
#else // @header-generator platform
    virtual ::std::string getXuid() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSimulated() const;
#else // @header-generator platform
    virtual ::PlayerMovementSettings const& getMovementSettings() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getXuid() const;
#else // @header-generator platform
    virtual void teleportTo(
        ::Vec3 const& pos,
        bool          shouldStopRiding,
        int           cause,
        int           sourceEntityType,
        bool          keepVelocity
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PlayerMovementSettings const& getMovementSettings() const;
#else // @header-generator platform
    virtual int _getSpawnChunkLimit() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<ChunkViewSource> _createChunkSource(::ChunkSource&);
#else // @header-generator platform
    virtual ::std::shared_ptr<::ChunkViewSource> _createChunkSource(::ChunkSource& mainChunkSource) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int _getSpawnChunkLimit() const;

    virtual void _updateChunkPublisherView(::Vec3 const&, float);
#else // @header-generator platform
    virtual void _updateChunkPublisherView(::Vec3 const& position, float minDistance) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI SimulatedPlayer(
        ::Level&                                           level,
        ::PacketSender&                                    packetSender,
        ::ServerNetworkSystem&                             network,
        ::ClientBlobCache::Server::ActiveTransfersManager& clientCacheMirror,
        ::GameType                                         playerGameType,
        ::NetworkIdentifier const&                         owner,
        ::SubClientId                                      subid,
        ::std::function<void(::ServerPlayer&)>             playerLoadedCallback,
        ::mce::UUID                                        uuid,
        ::std::string const&                               deviceId,
        ::PlayerAuthenticationType                         authType,
        ::PlayerAuthenticationInfo const&                  authInfo,
        int                                                maxChunkRadius,
        bool                                               enableItemStackNetManager,
        ::EntityContext&                                   entityContext
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addMoveComponent();
#else // @header-generator platform
    MCAPI void _addMoveComponent();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScriptModuleGameTest::ScriptNavigationResult _createNavigationResult(::NavigationComponent*) const;
#else // @header-generator platform
    MCAPI ::ScriptModuleGameTest::ScriptNavigationResult
    _createNavigationResult(::NavigationComponent* navigation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _updateDestroyBlock();
#else // @header-generator platform
    MCAPI void _updateDestroyBlock();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _updateMovement();
#else // @header-generator platform
    MCAPI void _updateMovement();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _updateRidingComponents();
#else // @header-generator platform
    MCAPI void _updateRidingComponents();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<gametest::BaseGameTestHelper> getGameTestHelper() const;
#else // @header-generator platform
    MCAPI void postAiStep();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void postAiStep();
#else // @header-generator platform
    MCAPI void preAiStep();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void preAiStep();
#else // @header-generator platform
    MCAPI void setGameTestHelper(::Bedrock::NonOwnerPointer<::gametest::BaseGameTestHelper> gameTestHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setGameTestHelper(::Bedrock::NonOwnerPointer<gametest::BaseGameTestHelper>);
#else // @header-generator platform
    MCAPI bool simulateAttack();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setXuid(std::string const&);
#else // @header-generator platform
    MCAPI void simulateChat(::std::string const& message);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool simulateAttack();
#else // @header-generator platform
    MCAPI bool simulateInteract();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool simulateAttack(::Actor*);
#else // @header-generator platform
    MCAPI bool simulateJump();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void simulateChat(std::string const&);
#else // @header-generator platform
    MCAPI void simulateLookAt(::BlockPos const& blockPos, ::sim::LookDuration lookType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool simulateDestroyBlock(::BlockPos const&, ::ScriptModuleMinecraft::ScriptFacing);
#else // @header-generator platform
    MCAPI void simulateLookAt(::Vec3 const& pos, ::sim::LookDuration lookType = sim::LookDuration::Instant);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void simulateDisconnect();
#else // @header-generator platform
    MCAPI ::ScriptModuleGameTest::ScriptNavigationResult simulateNavigateToEntity(::Actor& actor, float speed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool simulateDropSelectedItem();
#else // @header-generator platform
    MCAPI ::ScriptModuleGameTest::ScriptNavigationResult
    simulateNavigateToLocation(::Vec3 const& position, float speed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void simulateFly();
#else // @header-generator platform
    MCAPI void simulateNavigateToLocations(::std::vector<::Vec3>&& positions, float speed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool simulateGiveItem(::ItemStack&, bool);
#else // @header-generator platform
    MCAPI void simulateSetBodyRotation(float degY);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool simulateInteract();
#else // @header-generator platform
    MCAPI bool simulateUseItem(::ItemStack& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool simulateInteract(::Actor&);
#else // @header-generator platform
    MCAPI bool simulateUseItemInSlot(int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool simulateInteract(::BlockPos const&, ::ScriptModuleMinecraft::ScriptFacing);
#else // @header-generator platform
    MCAPI bool simulateUseItemInSlotOnBlock(
        int                                   slot,
        ::BlockPos const&                     pos,
        ::ScriptModuleMinecraft::ScriptFacing face,
        ::Vec3 const&                         facePos
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI bool simulateUseItemOnBlock(
        ::ItemStack&                          item,
        ::BlockPos const&                     pos,
        ::ScriptModuleMinecraft::ScriptFacing face,
        ::Vec3 const&                         facePos
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SimulatedPlayer* create(
        std::string const&,
        ::Vec3 const&,
        ::DimensionType,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ServerNetworkHandler>>,
        std::string const&,
        std::optional<ActorUniqueID>
#else // @header-generator platform
    MCAPI static ::SimulatedPlayer* create(
        ::std::string const&                                  name,
        ::Vec3 const&                                         spawnPos,
        ::DimensionType                                       dimensionId,
        ::Bedrock::NotNullNonOwnerPtr<::ServerNetworkHandler> serverNetworkHandler,
        ::std::string const&                                  xuid,
        ::std::optional<::ActorUniqueID>                      idOverride
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::SimulatedPlayer* create(
        ::std::string const&                                  name,
        ::Vec3 const&                                         spawnPos,
        ::Vec3 const&                                         spawnPosDelta,
        ::Vec2 const&                                         spawnRotation,
        bool                                                  spawnLoadedFromSave,
        ::DimensionType                                       dimensionId,
        ::Bedrock::NotNullNonOwnerPtr<::ServerNetworkHandler> serverNetworkHandler,
        ::std::string const&                                  xuid,
        ::std::optional<::ActorUniqueID>                      idOverride
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI static ::SimulatedPlayer* tryGetFromEntity(::EntityContext&, bool const);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Level&                                           level,
        ::PacketSender&                                    packetSender,
        ::ServerNetworkSystem&                             network,
        ::ClientBlobCache::Server::ActiveTransfersManager& clientCacheMirror,
        ::GameType                                         playerGameType,
        ::NetworkIdentifier const&                         owner,
        ::SubClientId                                      subid,
        ::std::function<void(::ServerPlayer&)>             playerLoadedCallback,
        ::mce::UUID                                        uuid,
        ::std::string const&                               deviceId,
        ::PlayerAuthenticationType                         authType,
        ::PlayerAuthenticationInfo const&                  authInfo,
        int                                                maxChunkRadius,
        bool                                               enableItemStackNetManager,
        ::EntityContext&                                   entityContext
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $teleportTo(::Vec3 const&, bool, int, int, bool);
#else // @header-generator platform
    MCAPI void $aiStep();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $aiStep();
#else // @header-generator platform
    MCFOLD bool $isSimulated() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSimulated() const;
#else // @header-generator platform
    MCAPI ::std::string $getXuid() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getXuid() const;
#else // @header-generator platform
    MCAPI ::PlayerMovementSettings const& $getMovementSettings() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlayerMovementSettings const& $getMovementSettings() const;
#else // @header-generator platform
    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<ChunkViewSource> $_createChunkSource(::ChunkSource&);
#else // @header-generator platform
    MCFOLD int $_getSpawnChunkLimit() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $_getSpawnChunkLimit() const;
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::ChunkViewSource> $_createChunkSource(::ChunkSource& mainChunkSource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_updateChunkPublisherView(::Vec3 const&, float);
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void $_updateChunkPublisherView(::Vec3 const& position, float minDistance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
