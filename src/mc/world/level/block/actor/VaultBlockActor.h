#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/legacy/ActorUniqueID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/block/VaultBlockState.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
class ActorRuntimeID;
#endif // @header-generator platform
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
#else // @header-generator platform
#endif // @header-generator platform
class SaveContext;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
struct DimensionType;
#else // @header-generator platform
struct ActorUniqueID;
#endif // @header-generator platform
// clang-format on

class VaultBlockActor : public ::VanillaBlockActor {
public:
    // VaultBlockActor inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct VaultConfig;
#else // @header-generator platform
#endif // @header-generator platform
    struct VaultClientData;
#if defined(LL_PLAT_A) // @header-generator platform
    struct VaultSharedData;
#else // @header-generator platform
    struct VaultConfig;
#endif // @header-generator platform
    struct VaultServerData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct VaultSharedData;
#endif // @header-generator platform
    class Client;
    class Server;
    // clang-format on

    // VaultBlockActor inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct VaultConfig {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>  lootTable;
        ::ll::TypedStorage<4, 4, float>         activationRange;
        ::ll::TypedStorage<4, 4, float>         deactivationRange;
        ::ll::TypedStorage<8, 152, ::ItemStack> keyItem;
        ::ll::TypedStorage<8, 24, std::string>  overrideLootTableToDisplay;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~VaultConfig();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct VaultClientData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>            currentSpin;
        ::ll::TypedStorage<4, 4, float>            previousSpin;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 24, ::WeakEntityRef> displayEntity;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::WeakEntityRef> displayEntity;
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct VaultSharedData {
#else // @header-generator platform
    struct VaultConfig {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 152, ::ItemStack>                displayItem;
        ::ll::TypedStorage<8, 24, std::vector<ActorRuntimeID>> connectedPlayers;
        ::ll::TypedStorage<4, 4, float>                        connectedParticlesRange;
        ::ll::TypedStorage<1, 1, bool>                         isSharedDataDirty;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~VaultSharedData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string> lootTable;
        ::ll::TypedStorage<4, 4, float>          activationRange;
        ::ll::TypedStorage<4, 4, float>          deactivationRange;
        ::ll::TypedStorage<8, 152, ::ItemStack>  keyItem;
        ::ll::TypedStorage<8, 32, ::std::string> overrideLootTableToDisplay;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct VaultServerData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::Tick>                      stateUpdateResumesAt;
        ::ll::TypedStorage<8, 24, std::vector<ItemStack>>     itemsToEject;
        ::ll::TypedStorage<8, 24, std::vector<ActorUniqueID>> rewardedPlayers;
        ::ll::TypedStorage<1, 1, bool>                        doesBlockNeedToBeSaved;
        ::ll::TypedStorage<8, 8, ::Tick>                      serverTick;
        ::ll::TypedStorage<8, 8, ::Tick>                      lastInsertFailTimestamp;
        ::ll::TypedStorage<4, 4, int>                         totalEjectionsNeeded;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::Tick>                          stateUpdateResumesAt;
        ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>     itemsToEject;
        ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>> rewardedPlayers;
        ::ll::TypedStorage<1, 1, bool>                            doesBlockNeedToBeSaved;
        ::ll::TypedStorage<8, 8, ::Tick>                          serverTick;
        ::ll::TypedStorage<8, 8, ::Tick>                          lastInsertFailTimestamp;
        ::ll::TypedStorage<4, 4, int>                             totalEjectionsNeeded;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    };
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct VaultSharedData {
#endif // @header-generator platform
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // member functions
#else // @header-generator platform
        // member variables
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~VaultServerData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::ll::TypedStorage<8, 152, ::ItemStack>                    displayItem;
        ::ll::TypedStorage<8, 24, ::std::vector<::ActorRuntimeID>> connectedPlayers;
        ::ll::TypedStorage<4, 4, float>                            connectedParticlesRange;
        ::ll::TypedStorage<1, 1, bool>                             isSharedDataDirty;
#endif // @header-generator platform
        // NOLINTEND
    };

    class Client {
    public:
        // static functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static void emitActivationParticles(::BlockSource&, ::BlockPos);
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCAPI static void emitActivationParticles(::BlockSource& region, ::BlockPos pos);

        MCAPI static void emitConnectedParticles(
            ::BlockSource&                            region,
            ::BlockPos                                pos,
            ::VaultBlockActor::VaultSharedData const& sharedData
        );

        MCAPI static void emitDeactivationParticles(::BlockSource& region, ::BlockPos pos);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static void
        emitConnectedParticles(::BlockSource&, ::BlockPos, ::VaultBlockActor::VaultSharedData const&);

        MCNAPI static void emitDeactivationParticles(::BlockSource&, ::BlockPos);

        MCNAPI static void removeDisplayEntity(::VaultBlockActor::VaultClientData&);
#else // @header-generator platform
        MCAPI static void removeDisplayEntity(::VaultBlockActor::VaultClientData& clientData);
#endif // @header-generator platform
        // NOLINTEND
    };

    class Server {
    public:
        // static functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static void cycleDisplayItemFromLootTable(
            ::BlockSource&,
            ::VaultBlockState,
            ::VaultBlockActor::VaultConfig const&,
            ::VaultBlockActor::VaultSharedData&
#else // @header-generator platform
        MCAPI static void cycleDisplayItemFromLootTable(
            ::BlockSource&                        region,
            ::VaultBlockState                     blockState,
            ::VaultBlockActor::VaultConfig const& config,
            ::VaultBlockActor::VaultSharedData&   sharedData
#endif // @header-generator platform
        );

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static void setVaultState(
            ::BlockSource&,
            ::BlockPos,
            ::Block const&,
            ::VaultBlockState,
            ::VaultBlockState,
            ::VaultBlockActor::VaultConfig const&,
            ::VaultBlockActor::VaultSharedData&
#else // @header-generator platform
        MCAPI static void onTransitionBetweenStates(
            ::BlockSource&                        region,
            ::BlockPos                            pos,
            ::VaultBlockActor::VaultConfig const& config,
            ::VaultBlockActor::VaultSharedData&   sharedData,
            ::VaultBlockState                     oldState,
            ::VaultBlockState                     newState
#endif // @header-generator platform
        );

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static void tryInsertKey(
            ::BlockSource&,
            ::Player&,
            ::BlockPos,
            ::VaultBlockActor::VaultConfig const&,
            ::VaultBlockActor::VaultSharedData&,
            ::VaultBlockActor::VaultServerData&
#else // @header-generator platform
        MCAPI static void playInsertFailSound(
            ::BlockSource&                         region,
            ::BlockPos                             pos,
            ::VaultBlockActor::VaultServerData&    serverData,
            ::SharedTypes::Legacy::LevelSoundEvent sound
#endif // @header-generator platform
        );

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static void updateConnectedPlayersWithinRange(
            ::BlockSource&,
            ::BlockPos,
            ::VaultBlockActor::VaultServerData const&,
            ::VaultBlockActor::VaultSharedData&,
            float
#else // @header-generator platform
        MCAPI static void tryInsertKey(
            ::BlockSource&                        region,
            ::Player&                             player,
            ::BlockPos                            pos,
            ::VaultBlockActor::VaultConfig const& config,
            ::VaultBlockActor::VaultSharedData&   sharedData,
            ::VaultBlockActor::VaultServerData&   serverData
        );

        MCAPI static void updateConnectedPlayersWithinRange(
            ::BlockSource&                            region,
            ::BlockPos                                pos,
            ::VaultBlockActor::VaultServerData const& serverData,
            ::VaultBlockActor::VaultSharedData&       sharedData,
            float                                     range
#endif // @header-generator platform
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 208, ::VaultBlockActor::VaultConfig>     mConfig;
    ::ll::TypedStorage<4, 32, ::VaultBlockActor::VaultClientData>  mClientData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 224, ::VaultBlockActor::VaultConfig>     mConfig;
    ::ll::TypedStorage<8, 32, ::VaultBlockActor::VaultClientData>  mClientData;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 184, ::VaultBlockActor::VaultSharedData> mSharedData;
    ::ll::TypedStorage<8, 88, ::VaultBlockActor::VaultServerData>  mServerData;
    // NOLINTEND

public:
    // prevent constructor by default
    VaultBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~VaultBlockActor();
#else // @header-generator platform
    virtual ~VaultBlockActor() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual void tick(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::BlockSource&);
#else // @header-generator platform
    virtual void _onUpdatePacket(::CompoundTag const& tag, ::BlockSource& region) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit VaultBlockActor(::BlockPos const&);
#else // @header-generator platform
    MCAPI explicit VaultBlockActor(::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clientEmitActivationParticles(::BlockSource&) const;

    MCNAPI void clientEmitConnectedParticles(::BlockSource&) const;

    MCNAPI void clientEmitDeactivationParticles(::BlockSource&) const;

    MCNAPI ::VaultBlockActor::VaultClientData const& getClientData() const;

    MCNAPI ::ItemStack const& getDisplayedItem() const;

    MCNAPI ::Actor* tryGetOrCreateDisplayEntity(::BlockSource&);

    MCNAPI void tryInsertKey(::BlockSource&, ::Player&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Actor* tryGetOrCreateDisplayEntity(::BlockSource& region);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockPos const&);
#else // @header-generator platform
    MCAPI void* $ctor(::BlockPos const& pos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void $tick(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;
#else // @header-generator platform
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#else // @header-generator platform
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::BlockSource&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $_onUpdatePacket(::CompoundTag const& tag, ::BlockSource& region);
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
