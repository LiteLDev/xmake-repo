#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class DimensionManager;
class IGameplayUserManagerConnector;
class ILevelStorageManagerConnector;
class IMapDataManagerOptions;
class LevelStorage;
class MapItemSavedData;
class PacketSender;
struct DimensionType;
// clang-format on

class MapDataManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::DimensionManager&>                                      mDimensionManager;
    ::ll::TypedStorage<8, 8, ::LevelStorage*>                                          mLevelStorage;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IMapDataManagerOptions>>> mMapDataManagerOptions;
    ::ll::UntypedStorage<8, 48>                                                        mGetNewUniqueID;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                         mOnSaveLevelData;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, std::unique_ptr<MapItemSavedData>>> mMapData;
    ::ll::UntypedStorage<8, 24>                                                                     mPacketSender;
    // NOLINTEND

public:
    // prevent constructor by default
    MapDataManager& operator=(MapDataManager const&);
    MapDataManager(MapDataManager const&);
    MapDataManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MapDataManager();

    virtual void registerOnGameplayUserAddedSubscription(::IGameplayUserManagerConnector&);

    virtual ::MapItemSavedData& createMapSavedData(::ActorUniqueID const&);

    virtual void requestMapInfo(::ActorUniqueID const, bool);

    virtual void _copyAndLockMap(::ActorUniqueID const, ::ActorUniqueID const);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MapDataManager(
        ::DimensionManager&,
        ::LevelStorage*,
        std::unique_ptr<IMapDataManagerOptions>,
        std::function<ActorUniqueID()>
    );

    MCNAPI ::MapItemSavedData* _loadMapData(::ActorUniqueID const&);

    MCNAPI void _onSaveLevelData(::LevelStorage&);

    MCNAPI bool copyAndLockMap(::ActorUniqueID const, ::ActorUniqueID const);

    MCNAPI ::MapItemSavedData& createMapSavedData(::ActorUniqueID const&, ::BlockPos const&, ::DimensionType, int);

    MCNAPI ::MapItemSavedData&
    createMapSavedData(std::vector<ActorUniqueID> const&, ::BlockPos const&, ::DimensionType, int);

    MCNAPI ::ActorUniqueID expandMapByID(::ActorUniqueID const, bool);

    MCNAPI ::MapItemSavedData* getMapSavedData(::ActorUniqueID const);

    MCNAPI void onStartLeaveGame();

    MCNAPI void registerOnSaveLevelDataSubscription(::ILevelStorageManagerConnector&);

    MCNAPI void setPacketSender(::PacketSender&);

    MCNAPI void tick();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::DimensionManager&,
        ::LevelStorage*,
        std::unique_ptr<IMapDataManagerOptions>,
        std::function<ActorUniqueID()>
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
    MCNAPI void $registerOnGameplayUserAddedSubscription(::IGameplayUserManagerConnector&);

    MCNAPI ::MapItemSavedData& $createMapSavedData(::ActorUniqueID const&);

    MCNAPI void $requestMapInfo(::ActorUniqueID const, bool);

    MCNAPI void $_copyAndLockMap(::ActorUniqueID const, ::ActorUniqueID const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
