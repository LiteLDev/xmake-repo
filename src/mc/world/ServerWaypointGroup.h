#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Connector.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/WaypointGroup.h"

// auto generated forward declare list
// clang-format off
class Player;
class ServerWaypoint;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorUniqueID;
#else // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 40> mWaypoints;
    ::ll::UntypedStorage<8, 24> mChangeRecords;
    ::ll::UntypedStorage<8, 88> mOnInvalidActorRemovedEvent;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::WaypointGroup::WaypointHandle,
            ::std::unique_ptr<::ServerWaypoint>,
            ::WaypointGroup::WaypointHandle::Hasher,
            ::std::equal_to<::WaypointGroup::WaypointHandle>>>
        mWaypoints;
    ::ll::TypedStorage<8, 16, ::std::map<::WaypointGroup::WaypointHandle, ::ServerWaypointGroup::WaypointChangeRecord>>
        mChangeRecords;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::std::vector<::WaypointGroup::WaypointHandle> const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mOnInvalidActorRemovedEvent;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ServerWaypointGroup();
#else // @header-generator platform
    virtual bool has(::WaypointGroup::WaypointHandle const& handle) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool has(::WaypointGroup::WaypointHandle const&) const;

    virtual bool remove(::WaypointGroup::WaypointHandle const&);
#else // @header-generator platform
    virtual bool remove(::WaypointGroup::WaypointHandle const& handle) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WaypointGroup::WaypointHandle add(std::unique_ptr<ServerWaypoint>);
#else // @header-generator platform
    MCAPI ::WaypointGroup::WaypointHandle add(::std::unique_ptr<::ServerWaypoint> waypoint);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::map<WaypointGroup::WaypointHandle, ServerWaypointGroup::WaypointChangeRecord> consumeChanges();
#else // @header-generator platform
    MCAPI ::std::map<::WaypointGroup::WaypointHandle, ::ServerWaypointGroup::WaypointChangeRecord> consumeChanges();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void update(::Player const& viewingPlayer);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $has(::WaypointGroup::WaypointHandle const&) const;
#else // @header-generator platform
    MCAPI bool $has(::WaypointGroup::WaypointHandle const& handle) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $remove(::WaypointGroup::WaypointHandle const&);
#else // @header-generator platform
    MCAPI bool $remove(::WaypointGroup::WaypointHandle const& handle);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
