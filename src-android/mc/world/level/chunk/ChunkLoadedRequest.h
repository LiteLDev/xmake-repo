#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Bounds.h"
#include "mc/world/level/chunk/AreaType.h"
#include "mc/world/level/chunk/ChunkRequestListType.h"
#include "mc/world/level/chunk/ChunksLoadedStatus.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Dimension;
class ICommandOriginLoader;
class IRequestAction;
class ITickingAreaView;
class IUnknownBlockTypeRegistry;
class JigsawStructureElementRegistry;
class LevelChunk;
class ServerLevel;
struct DeserializedChunkLoadedRequest;
struct Tick;
// clang-format on

class ChunkLoadedRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                            mAllowNonTickingPlayerAndTickingAreaChunks;
    ::ll::TypedStorage<1, 1, ::AreaType>                      mAreaType;
    ::ll::TypedStorage<4, 48, ::Bounds>                       mBounds;
    ::ll::TypedStorage<8, 24, std::string>                    mTickingAreaName;
    ::ll::TypedStorage<8, 24, std::string>                    mSerializationId;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IRequestAction>> mRequestAction;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkLoadedRequest& operator=(ChunkLoadedRequest const&);
    ChunkLoadedRequest(ChunkLoadedRequest const&);
    ChunkLoadedRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ITickingAreaView const* _getTickingArea(::Dimension const&) const;

    MCNAPI ::ChunksLoadedStatus areAllChunksLoaded(::Dimension&, ::Tick) const;

    MCNAPI ~ChunkLoadedRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
