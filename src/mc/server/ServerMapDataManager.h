#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/server/IServerMapDataManagerConnector.h"
#include "mc/world/level/MapDataManager.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class DimensionManager;
#else // @header-generator platform
#endif // @header-generator platform
class EntityContext;
class IGameplayUserManagerConnector;
#if defined(LL_PLAT_A) // @header-generator platform
class IMapDataManagerOptions;
class LevelStorage;
#else // @header-generator platform
#endif // @header-generator platform
class MapItemSavedData;
struct ActorUniqueID;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class ServerMapDataManager : public ::MapDataManager, public ::IServerMapDataManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 88>                                mOnCreateMapSavedData;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::MapItemSavedData&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                               mOnCreateMapSavedData;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserAdded;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ServerMapDataManager();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ServerMapDataManager();
#else // @header-generator platform
    virtual ~ServerMapDataManager() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerOnGameplayUserAddedSubscription(::IGameplayUserManagerConnector&);
#else // @header-generator platform
    virtual void
    registerOnGameplayUserAddedSubscription(::IGameplayUserManagerConnector& gameplayUserManagerConnector) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MapItemSavedData& createMapSavedData(::ActorUniqueID const&);
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::MapItemSavedData&)>& getOnCreateMapSavedDataConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void requestMapInfo(::ActorUniqueID const, bool);
#else // @header-generator platform
    virtual ::MapItemSavedData& createMapSavedData(::ActorUniqueID const& uuid) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _copyAndLockMap(::ActorUniqueID const, ::ActorUniqueID const);
#else // @header-generator platform
    virtual void requestMapInfo(::ActorUniqueID const uuid, bool forceUpdate) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(MapItemSavedData&)>& getOnCreateMapSavedDataConnector();
#else // @header-generator platform
    virtual void _copyAndLockMap(::ActorUniqueID const originalMapUuid, ::ActorUniqueID const newMapUuid) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onGameplayUserAdded(::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void _onGameplayUserAdded(::EntityContext& entity);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $registerOnGameplayUserAddedSubscription(::IGameplayUserManagerConnector&);
#else // @header-generator platform
    MCAPI void $registerOnGameplayUserAddedSubscription(::IGameplayUserManagerConnector& gameplayUserManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MapItemSavedData& $createMapSavedData(::ActorUniqueID const&);
#else // @header-generator platform
    MCFOLD ::Bedrock::PubSub::Connector<void(::MapItemSavedData&)>& $getOnCreateMapSavedDataConnector();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $requestMapInfo(::ActorUniqueID const, bool);
#else // @header-generator platform
    MCAPI ::MapItemSavedData& $createMapSavedData(::ActorUniqueID const& uuid);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_copyAndLockMap(::ActorUniqueID const, ::ActorUniqueID const);
#else // @header-generator platform
    MCFOLD void $requestMapInfo(::ActorUniqueID const uuid, bool forceUpdate);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(MapItemSavedData&)>& $getOnCreateMapSavedDataConnector();
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $_copyAndLockMap(::ActorUniqueID const originalMapUuid, ::ActorUniqueID const newMapUuid);
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
