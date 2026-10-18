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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::DimensionManager&>                                      mDimensionManager;
    ::ll::TypedStorage<8, 8, ::LevelStorage*>                                          mLevelStorage;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IMapDataManagerOptions>>> mMapDataManagerOptions;
    ::ll::UntypedStorage<8, 48>                                                        mGetNewUniqueID;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                         mOnSaveLevelData;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, std::unique_ptr<MapItemSavedData>>> mMapData;
    ::ll::UntypedStorage<8, 24>                                                                     mPacketSender;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::DimensionManager&>                                          mDimensionManager;
    ::ll::TypedStorage<8, 8, ::LevelStorage*>                                              mLevelStorage;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IMapDataManagerOptions>>> mMapDataManagerOptions;
    ::ll::TypedStorage<8, 64, ::std::function<::ActorUniqueID()>>                          mGetNewUniqueID;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                             mOnSaveLevelData;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::std::unique_ptr<::MapItemSavedData>>> mMapData;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PacketSender>> mPacketSender;
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerOnGameplayUserAddedSubscription(::IGameplayUserManagerConnector&);
#else // @header-generator platform
    virtual void registerOnGameplayUserAddedSubscription(::IGameplayUserManagerConnector& gameplayUserManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MapItemSavedData& createMapSavedData(::ActorUniqueID const&);
#else // @header-generator platform
    virtual ::MapItemSavedData& createMapSavedData(::ActorUniqueID const& uuid);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void requestMapInfo(::ActorUniqueID const, bool);
#else // @header-generator platform
    virtual void requestMapInfo(::ActorUniqueID const uuid, bool forceUpdate);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _copyAndLockMap(::ActorUniqueID const, ::ActorUniqueID const);
#else // @header-generator platform
    virtual void _copyAndLockMap(::ActorUniqueID const originalMapUuid, ::ActorUniqueID const newMapUuid);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MapDataManager(
        ::DimensionManager&,
        ::LevelStorage*,
        std::unique_ptr<IMapDataManagerOptions>,
        std::function<ActorUniqueID()>
#else // @header-generator platform
    MCAPI MapDataManager(
        ::DimensionManager&                         dimensionManager,
        ::LevelStorage*                             levelStorage,
        ::std::unique_ptr<::IMapDataManagerOptions> mapDataManagerOptions,
        ::std::function<::ActorUniqueID()>          getNewUniqueID
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MapItemSavedData* _loadMapData(::ActorUniqueID const&);
#else // @header-generator platform
    MCAPI ::MapItemSavedData* _loadMapData(::ActorUniqueID const& uuid);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onSaveLevelData(::LevelStorage&);
#else // @header-generator platform
    MCAPI void _onSaveLevelData(::LevelStorage& levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool copyAndLockMap(::ActorUniqueID const, ::ActorUniqueID const);
#else // @header-generator platform
    MCAPI ::MapItemSavedData& createMapSavedData(
        ::std::vector<::ActorUniqueID> const& mapIds,
        ::BlockPos const&                     origin,
        ::DimensionType                       dimension,
        int                                   returnScaleLevel
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MapItemSavedData& createMapSavedData(::ActorUniqueID const&, ::BlockPos const&, ::DimensionType, int);

    MCNAPI ::MapItemSavedData&
    createMapSavedData(std::vector<ActorUniqueID> const&, ::BlockPos const&, ::DimensionType, int);

    MCNAPI ::ActorUniqueID expandMapByID(::ActorUniqueID const, bool);

    MCNAPI ::MapItemSavedData* getMapSavedData(::ActorUniqueID const);

    MCNAPI void onStartLeaveGame();

    MCNAPI void registerOnSaveLevelDataSubscription(::ILevelStorageManagerConnector&);

    MCNAPI void setPacketSender(::PacketSender&);

    MCNAPI void tick();
#else // @header-generator platform
    MCAPI void registerOnSaveLevelDataSubscription(::ILevelStorageManagerConnector& levelStorageManagerConnector);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::DimensionManager&,
        ::LevelStorage*,
        std::unique_ptr<IMapDataManagerOptions>,
        std::function<ActorUniqueID()>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::DimensionManager&                         dimensionManager,
        ::LevelStorage*                             levelStorage,
        ::std::unique_ptr<::IMapDataManagerOptions> mapDataManagerOptions,
        ::std::function<::ActorUniqueID()>          getNewUniqueID
#endif // @header-generator platform
    );
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
    MCNAPI void $registerOnGameplayUserAddedSubscription(::IGameplayUserManagerConnector&);
#else // @header-generator platform
    MCFOLD void $registerOnGameplayUserAddedSubscription(::IGameplayUserManagerConnector& gameplayUserManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MapItemSavedData& $createMapSavedData(::ActorUniqueID const&);
#else // @header-generator platform
    MCAPI ::MapItemSavedData& $createMapSavedData(::ActorUniqueID const& uuid);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $requestMapInfo(::ActorUniqueID const, bool);
#else // @header-generator platform
    MCAPI void $requestMapInfo(::ActorUniqueID const uuid, bool forceUpdate);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_copyAndLockMap(::ActorUniqueID const, ::ActorUniqueID const);
#else // @header-generator platform
    MCAPI void $_copyAndLockMap(::ActorUniqueID const originalMapUuid, ::ActorUniqueID const newMapUuid);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
