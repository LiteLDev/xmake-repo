#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/server/IServerMapDataManagerConnector.h"
#include "mc/world/level/MapDataManager.h"

// auto generated forward declare list
// clang-format off
class DimensionManager;
class EntityContext;
class IGameplayUserManagerConnector;
class IMapDataManagerOptions;
class LevelStorage;
class MapItemSavedData;
struct ActorUniqueID;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class ServerMapDataManager : public ::MapDataManager, public ::IServerMapDataManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88>                                mOnCreateMapSavedData;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserAdded;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerMapDataManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerMapDataManager();

    virtual void registerOnGameplayUserAddedSubscription(::IGameplayUserManagerConnector&);

    virtual ::MapItemSavedData& createMapSavedData(::ActorUniqueID const&);

    virtual void requestMapInfo(::ActorUniqueID const, bool);

    virtual void _copyAndLockMap(::ActorUniqueID const, ::ActorUniqueID const);

    virtual ::Bedrock::PubSub::Connector<void(MapItemSavedData&)>& getOnCreateMapSavedDataConnector();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _onGameplayUserAdded(::EntityContext&);
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

    MCNAPI ::Bedrock::PubSub::Connector<void(MapItemSavedData&)>& $getOnCreateMapSavedDataConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
