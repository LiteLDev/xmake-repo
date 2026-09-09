#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/MovePriorityQueue.h"
#include "mc/server/commands/DelayRequest.h"
#include "mc/world/level/chunk/QueueRequestResult.h"
#include "mc/world/level/dimension/DimensionDataSerializer.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Dimension;
class ICommandOriginLoader;
class IRequestAction;
class LevelStorage;
class ServerLevel;
// clang-format on

class DelayActionList {
public:
    // DelayActionList inner types declare
    // clang-format off
    class DelayRequestQueue;
    // clang-format on

    // DelayActionList inner types define
    class DelayRequestQueue : public ::MovePriorityQueue<DelayRequest, std::greater<DelayRequest>> {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI int
        removeRequestWithAction(::DimensionDataSerializer, ::LevelStorage&, ::gsl::not_null<IRequestAction*>);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                         mDelayRequests;
    ::ll::TypedStorage<4, 4, ::DimensionDataSerializer> mDimensionDataSerializer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DelayActionList();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DelayActionList();

    MCNAPI void _loadRequests(::Dimension&, ::LevelStorage&, ::ICommandOriginLoader&, ulong);

    MCNAPI ::QueueRequestResult
    _queueRequestOrExecuteAction(::DelayRequest, ::LevelStorage&, ::Dimension&, ulong const, bool);

    MCNAPI void _saveRequest(::DelayRequest&, std::string const&, ::LevelStorage&);

    MCNAPI int clearRequestWithAction(::LevelStorage&, ::gsl::not_null<IRequestAction*>);

    MCNAPI void loadRequests(::Dimension&, ::LevelStorage&, ::ICommandOriginLoader&, ulong);

    MCNAPI ::QueueRequestResult queueRequestOrExecuteAction(::DelayRequest, ::Dimension&, ulong, bool);

    MCNAPI void tick(::ServerLevel&, ::Dimension&, ulong const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
