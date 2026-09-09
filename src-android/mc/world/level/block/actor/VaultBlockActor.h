#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/block/VaultBlockState.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class Level;
class Player;
class Random;
class SaveContext;
class Vec3;
struct DimensionType;
// clang-format on

class VaultBlockActor : public ::VanillaBlockActor {
public:
    // VaultBlockActor inner types declare
    // clang-format off
    struct VaultConfig;
    struct VaultClientData;
    struct VaultSharedData;
    struct VaultServerData;
    class Client;
    class Server;
    // clang-format on

    // VaultBlockActor inner types define
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

    struct VaultClientData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>            currentSpin;
        ::ll::TypedStorage<4, 4, float>            previousSpin;
        ::ll::TypedStorage<1, 24, ::WeakEntityRef> displayEntity;
        // NOLINTEND
    };

    struct VaultSharedData {
    public:
        // member variables
        // NOLINTBEGIN
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
        // NOLINTEND
    };

    struct VaultServerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Tick>                      stateUpdateResumesAt;
        ::ll::TypedStorage<8, 24, std::vector<ItemStack>>     itemsToEject;
        ::ll::TypedStorage<8, 24, std::vector<ActorUniqueID>> rewardedPlayers;
        ::ll::TypedStorage<1, 1, bool>                        doesBlockNeedToBeSaved;
        ::ll::TypedStorage<8, 8, ::Tick>                      serverTick;
        ::ll::TypedStorage<8, 8, ::Tick>                      lastInsertFailTimestamp;
        ::ll::TypedStorage<4, 4, int>                         totalEjectionsNeeded;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~VaultServerData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class Client {
    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void emitActivationParticles(::BlockSource&, ::BlockPos);

        MCNAPI static void
        emitConnectedParticles(::BlockSource&, ::BlockPos, ::VaultBlockActor::VaultSharedData const&);

        MCNAPI static void emitDeactivationParticles(::BlockSource&, ::BlockPos);

        MCNAPI static void removeDisplayEntity(::VaultBlockActor::VaultClientData&);
        // NOLINTEND
    };

    class Server {
    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void cycleDisplayItemFromLootTable(
            ::BlockSource&,
            ::VaultBlockState,
            ::VaultBlockActor::VaultConfig const&,
            ::VaultBlockActor::VaultSharedData&
        );

        MCNAPI static void setVaultState(
            ::BlockSource&,
            ::BlockPos,
            ::Block const&,
            ::VaultBlockState,
            ::VaultBlockState,
            ::VaultBlockActor::VaultConfig const&,
            ::VaultBlockActor::VaultSharedData&
        );

        MCNAPI static void tryInsertKey(
            ::BlockSource&,
            ::Player&,
            ::BlockPos,
            ::VaultBlockActor::VaultConfig const&,
            ::VaultBlockActor::VaultSharedData&,
            ::VaultBlockActor::VaultServerData&
        );

        MCNAPI static void updateConnectedPlayersWithinRange(
            ::BlockSource&,
            ::BlockPos,
            ::VaultBlockActor::VaultServerData const&,
            ::VaultBlockActor::VaultSharedData&,
            float
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 208, ::VaultBlockActor::VaultConfig>     mConfig;
    ::ll::TypedStorage<4, 32, ::VaultBlockActor::VaultClientData>  mClientData;
    ::ll::TypedStorage<8, 184, ::VaultBlockActor::VaultSharedData> mSharedData;
    ::ll::TypedStorage<8, 88, ::VaultBlockActor::VaultServerData>  mServerData;
    // NOLINTEND

public:
    // prevent constructor by default
    VaultBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VaultBlockActor();

    virtual void load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    virtual bool save(::CompoundTag&, ::SaveContext const&) const;

    virtual std::unique_ptr<BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual void tick(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit VaultBlockActor(::BlockPos const&);

    MCNAPI void clientEmitActivationParticles(::BlockSource&) const;

    MCNAPI void clientEmitConnectedParticles(::BlockSource&) const;

    MCNAPI void clientEmitDeactivationParticles(::BlockSource&) const;

    MCNAPI ::VaultBlockActor::VaultClientData const& getClientData() const;

    MCNAPI ::ItemStack const& getDisplayedItem() const;

    MCNAPI ::Actor* tryGetOrCreateDisplayEntity(::BlockSource&);

    MCNAPI void tryInsertKey(::BlockSource&, ::Player&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::ILevel&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI bool $save(::CompoundTag&, ::SaveContext const&) const;

    MCNAPI std::unique_ptr<BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCNAPI void $tick(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
