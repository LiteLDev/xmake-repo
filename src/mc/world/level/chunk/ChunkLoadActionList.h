#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/chunk/ChunkLoadedRequest.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/chunk/ChunkRequestListType.h"
#include "mc/world/level/chunk/ChunksLoadedStatus.h"
#include "mc/world/level/chunk/QueueRequestResult.h"
#include "mc/world/level/dimension/DimensionDataSerializer.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ChunkSource;
class CompoundTag;
#else // @header-generator platform
class ChunkLoadedRequest;
#endif // @header-generator platform
class Dimension;
class ICommandOriginLoader;
class IRequestAction;
class IUnknownBlockTypeRegistry;
class JigsawStructureElementRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class LevelChunk;
#else // @header-generator platform
#endif // @header-generator platform
class LevelStorage;
class ServerLevel;
struct DimensionType;
#if defined(LL_PLAT_A) // @header-generator platform
struct Tick;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ChunkLoadActionList {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ChunkLoadedRequest>> mChunkLoadedRequests;
    ::ll::TypedStorage<8, 24, std::vector<ChunkLoadedRequest>> mChunkLoadedRequestsWaitForTicking;
    ::ll::TypedStorage<4, 4, ::DimensionDataSerializer>        mDimensionDataSerializer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkLoadedRequest>> mChunkLoadedRequests;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkLoadedRequest>> mChunkLoadedRequestsWaitForTicking;
    ::ll::TypedStorage<4, 4, ::DimensionDataSerializer>            mDimensionDataSerializer;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ChunkLoadActionList();

    MCNAPI void _addChunkLoadedRequest(::ChunkLoadedRequest, std::string const&, ::ChunksLoadedStatus, ::LevelStorage&);

    MCNAPI int _clearRequest(::LevelStorage&, ::IRequestAction*, std::string_view);

    MCNAPI bool _handleChunksLoadedStatusAsyncCallback(
        ::ChunkLoadedRequest&,
        ::ChunksLoadedStatus,
        std::string const&,
        ::LevelStorage&
#else // @header-generator platform
    MCAPI void _addChunkLoadedRequest(
        ::ChunkLoadedRequest chunkLoadedRequest,
        ::std::string const& dimensionPrefix,
        ::ChunksLoadedStatus chunksLoadedStatus,
        ::LevelStorage&      levelStorage
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::QueueRequestResult _queueRequestOrExecuteAction(
        ::ChunkLoadedRequest,
        ::ServerLevel&,
        ::LevelStorage&,
        ::Dimension&,
        ::ChunksLoadedStatus
#else // @header-generator platform
    MCAPI void _addChunkLoadedRequestToTickingList(
        ::ChunkLoadedRequest chunkLoadedRequest,
        ::std::string const& dimensionPrefix,
        ::LevelStorage&      levelStorage
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _saveRequest(::ChunkLoadedRequest&, std::string const&, ::ChunkRequestListType, ::LevelStorage&);
#else // @header-generator platform
    MCAPI int
    _clearRequest(::LevelStorage& levelStorage, ::IRequestAction* actionToRemove, ::std::string_view tickingAreaName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void _loadRequests(
        ::LevelStorage&                                         storage,
        ::ICommandOriginLoader&                                 loader,
        ::std::string const&                                    dimensionPrefix,
        ::JigsawStructureElementRegistry const&                 elementReg,
        ::DimensionType                                         type,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockTypeRegistry
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onChunkLoaded(::LevelStorage&, ::ChunkSource&, std::string const&, ::LevelChunk&, ::Tick);
#else // @header-generator platform
    MCAPI void _saveRequest(
        ::ChunkLoadedRequest&  request,
        ::std::string const&   dimensionPrefix,
        ::ChunkRequestListType chunkRequestListType,
        ::LevelStorage&        levelStorage
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onStaticTickingAreaAdded(::LevelStorage&, ::Dimension&, std::string const&, ::Tick);
#else // @header-generator platform
    MCAPI void _updateAsyncList(
        ::LevelStorage&                                              levelStorage,
        ::Dimension&                                                 dimension,
        ::std::function<::ChunksLoadedStatus(::ChunkLoadedRequest&)> chunksLoadedCheckFunction
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::QueueRequestResult queueRequestActionWithoutDuplicates(::ChunkLoadedRequest, ::ServerLevel&, ::Dimension&);
#else // @header-generator platform
    MCAPI void _updateTickingList(
        ::ServerLevel&                                               serverLevel,
        ::Dimension&                                                 dimension,
        ::std::function<::ChunksLoadedStatus(::ChunkLoadedRequest&)> chunksLoadedCheckFunction
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::QueueRequestResult queueRequestOrExecuteAction(::ChunkLoadedRequest, ::ServerLevel&, ::Dimension&);
#else // @header-generator platform
    MCAPI void loadRequests(
        ::LevelStorage&                                         storage,
        ::ICommandOriginLoader&                                 loader,
        ::std::string const&                                    dimensionPrefix,
        ::DimensionType                                         type,
        ::JigsawStructureElementRegistry const&                 elementReg,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockTypeRegistry
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void tickRequests(::ServerLevel&, ::Dimension&);
#else // @header-generator platform
    MCAPI ::QueueRequestResult queueRequestActionWithoutDuplicates(
        ::ChunkLoadedRequest chunkLoadedRequest,
        ::ServerLevel&       serverLevel,
        ::Dimension&         dimension
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ChunkLoadActionList();
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::QueueRequestResult queueRequestOrExecuteAction(
        ::ChunkLoadedRequest chunkLoadedRequest,
        ::ServerLevel&       serverLevel,
        ::Dimension&         dimension
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI ~ChunkLoadActionList();
#endif // @header-generator platform
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
};
