#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/SessionTrackerOperationResult.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/events/ClientInstanceEventListener.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class ClientInstance;
class ILevel;
namespace Json { class Value; }
namespace Realms { struct World; }
namespace Social { class GameConnectionInfo; }
namespace Social { class IUserManager; }
namespace World { class WorldJoinedRecord; }
// clang-format on

namespace World {

class WorldActivitySessionTracker : public ::ClientInstanceEventListener,
                                    public ::std::enable_shared_from_this<World::WorldActivitySessionTracker> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<World::WorldJoinedRecord>>> mJoinedRecords;
    ::ll::UntypedStorage<8, 24>                                                       mRecordFilePath;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                           mSerializeJoinedActivity;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mSignInSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldActivitySessionTracker();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldActivitySessionTracker();

    virtual ::EventResult onClientEnteredWorld(::ClientInstance&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::World::SessionTrackerOperationResult _addOrUpdate(std::unique_ptr<World::WorldJoinedRecord>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onClientEnteredWorld(::ClientInstance&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
