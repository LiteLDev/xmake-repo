#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#include "mc/world/WaypointGroup.h"

// auto generated forward declare list
// clang-format off
class Player;
class ServerWaypoint;
struct ActorUniqueID;
// clang-format on

class ServerWaypointGroup : public ::WaypointGroup {
public:
    // ServerWaypointGroup inner types declare
    // clang-format off
    struct WaypointChangeRecord;
    // clang-format on

    // ServerWaypointGroup inner types define
    enum class Action : uchar {
        None   = 0,
        Add    = 1,
        Remove = 2,
        Update = 3,
    };

    struct WaypointChangeRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::ServerWaypointGroup::Action> mAction;
        ::ll::TypedStorage<4, 4, uint>                          mUpdateFlags;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mWaypoints;
    ::ll::UntypedStorage<8, 24> mChangeRecords;
    ::ll::UntypedStorage<8, 88> mOnInvalidActorRemovedEvent;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerWaypointGroup();

    virtual bool has(::WaypointGroup::WaypointHandle const&) const;

    virtual bool remove(::WaypointGroup::WaypointHandle const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::WaypointGroup::WaypointHandle add(std::unique_ptr<ServerWaypoint>);

    MCNAPI std::map<WaypointGroup::WaypointHandle, ServerWaypointGroup::WaypointChangeRecord> consumeChanges();

    MCNAPI void
        forEach(std::function<void(const WaypointGroup::WaypointHandle&, gsl::not_null<const ServerWaypoint*>)>) const;

    MCNAPI ::ServerWaypoint* get(::WaypointGroup::WaypointHandle const&);

    MCNAPI std::vector<WaypointGroup::WaypointHandle> getAllHandlesWithActorID(::ActorUniqueID const&) const;

    MCNAPI ::Bedrock::PubSub::Connector<void(const std::vector<WaypointGroup::WaypointHandle>&)>&
    getOnInvalidActorRemovedEvent();

    MCNAPI void update(::Player const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $has(::WaypointGroup::WaypointHandle const&) const;

    MCNAPI bool $remove(::WaypointGroup::WaypointHandle const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
