#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/chunk/ChunkLoadedRequest.h"
#include "mc/world/level/chunk/ChunkRequestListType.h"
#include "mc/world/level/chunk/ChunksLoadedStatus.h"
#include "mc/world/level/chunk/QueueRequestResult.h"
#include "mc/world/level/dimension/DimensionDataSerializer.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class CompoundTag;
class Dimension;
class ICommandOriginLoader;
class IRequestAction;
class IUnknownBlockTypeRegistry;
class JigsawStructureElementRegistry;
class LevelChunk;
class LevelStorage;
class ServerLevel;
struct DimensionType;
struct Tick;
// clang-format on

class ChunkLoadActionList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ChunkLoadedRequest>> mChunkLoadedRequests;
    ::ll::TypedStorage<8, 24, std::vector<ChunkLoadedRequest>> mChunkLoadedRequestsWaitForTicking;
    ::ll::TypedStorage<4, 4, ::DimensionDataSerializer>        mDimensionDataSerializer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChunkLoadActionList();

    MCNAPI void _addChunkLoadedRequest(::ChunkLoadedRequest, std::string const&, ::ChunksLoadedStatus, ::LevelStorage&);

    MCNAPI int _clearRequest(::LevelStorage&, ::IRequestAction*, std::string_view);

    MCNAPI bool _handleChunksLoadedStatusAsyncCallback(
        ::ChunkLoadedRequest&,
        ::ChunksLoadedStatus,
        std::string const&,
        ::LevelStorage&
    );

    MCNAPI ::QueueRequestResult _queueRequestOrExecuteAction(
        ::ChunkLoadedRequest,
        ::ServerLevel&,
        ::LevelStorage&,
        ::Dimension&,
        ::ChunksLoadedStatus
    );

    MCNAPI void _saveRequest(::ChunkLoadedRequest&, std::string const&, ::ChunkRequestListType, ::LevelStorage&);

    MCNAPI void addChunkLoadedRequest(::ChunkLoadedRequest, std::string const&, ::ChunksLoadedStatus, ::LevelStorage&);

    MCNAPI int clearRequestWithAction(::LevelStorage&, ::gsl::not_null<IRequestAction*>);

    MCNAPI int clearRequestWithTickingAreaName(::LevelStorage&, std::string_view, ::IRequestAction*);

    MCNAPI void loadRequests(
        ::LevelStorage&,
        ::ICommandOriginLoader&,
        std::string const&,
        ::DimensionType,
        ::JigsawStructureElementRegistry const&,
        ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry>
    );

    MCNAPI void onChunkLoaded(::LevelStorage&, ::ChunkSource&, std::string const&, ::LevelChunk&, ::Tick);

    MCNAPI void onStaticTickingAreaAdded(::LevelStorage&, ::Dimension&, std::string const&, ::Tick);

    MCNAPI ::QueueRequestResult queueRequestActionWithoutDuplicates(::ChunkLoadedRequest, ::ServerLevel&, ::Dimension&);

    MCNAPI ::QueueRequestResult queueRequestOrExecuteAction(::ChunkLoadedRequest, ::ServerLevel&, ::Dimension&);

    MCNAPI void tickRequests(::ServerLevel&, ::Dimension&);

    MCNAPI ~ChunkLoadActionList();
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
};
