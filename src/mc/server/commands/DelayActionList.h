#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/MovePriorityQueue.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/commands/DelayRequest.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/chunk/QueueRequestResult.h"
#include "mc/world/level/dimension/DimensionDataSerializer.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
class DelayRequest;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    class DelayRequestQueue : public ::MovePriorityQueue<DelayRequest, std::greater<DelayRequest>> {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI int
        removeRequestWithAction(::DimensionDataSerializer, ::LevelStorage&, ::gsl::not_null<IRequestAction*>);
        // NOLINTEND
    };
#else // @header-generator platform
    class DelayRequestQueue : public ::MovePriorityQueue<::DelayRequest, ::std::greater<::DelayRequest>> {};
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                         mDelayRequests;
    ::ll::TypedStorage<4, 4, ::DimensionDataSerializer> mDimensionDataSerializer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::DelayActionList::DelayRequestQueue> mDelayRequests;
    ::ll::TypedStorage<4, 4, ::DimensionDataSerializer>             mDimensionDataSerializer;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DelayActionList();
#else // @header-generator platform
    virtual ~DelayActionList() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DelayActionList();
#else // @header-generator platform
    MCAPI void _loadRequests(
        ::Dimension&            dimension,
        ::LevelStorage&         levelStorage,
        ::ICommandOriginLoader& loader,
        uint64                  currentTick
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _loadRequests(::Dimension&, ::LevelStorage&, ::ICommandOriginLoader&, ulong);
#else // @header-generator platform
    MCAPI ::QueueRequestResult _queueRequestOrExecuteAction(
        ::DelayRequest  request,
        ::LevelStorage& levelStorage,
        ::Dimension&    dimension,
        uint64          currentTick,
        bool            allowDuplicates
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::QueueRequestResult
    _queueRequestOrExecuteAction(::DelayRequest, ::LevelStorage&, ::Dimension&, ulong const, bool);
#else // @header-generator platform
    MCAPI int clearRequestWithAction(::LevelStorage& levelStorage, ::gsl::not_null<::IRequestAction*> actionToRemove);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _saveRequest(::DelayRequest&, std::string const&, ::LevelStorage&);
#else // @header-generator platform
    MCAPI ::QueueRequestResult queueRequestOrExecuteAction(
        ::DelayRequest request,
        ::Dimension&   dimension,
        uint64         currentTick,
        bool           allowDuplicates
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void tick(::ServerLevel& level, ::Dimension& dimension, uint64 currentTick);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
