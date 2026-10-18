#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/Bounds.h"
#include "mc/world/level/chunk/AreaType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/chunk/ChunkRequestListType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/chunk/ChunksLoadedStatus.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class Dimension;
#if defined(LL_PLAT_A) // @header-generator platform
class ICommandOriginLoader;
#else // @header-generator platform
#endif // @header-generator platform
class IRequestAction;
class ITickingAreaView;
#if defined(LL_PLAT_A) // @header-generator platform
class IUnknownBlockTypeRegistry;
class JigsawStructureElementRegistry;
class LevelChunk;
class ServerLevel;
struct DeserializedChunkLoadedRequest;
#else // @header-generator platform
#endif // @header-generator platform
struct Tick;
// clang-format on

class ChunkLoadedRequest {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                            mAllowNonTickingPlayerAndTickingAreaChunks;
    ::ll::TypedStorage<1, 1, ::AreaType>                      mAreaType;
    ::ll::TypedStorage<4, 48, ::Bounds>                       mBounds;
    ::ll::TypedStorage<8, 24, std::string>                    mTickingAreaName;
    ::ll::TypedStorage<8, 24, std::string>                    mSerializationId;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IRequestAction>> mRequestAction;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                mAllowNonTickingPlayerAndTickingAreaChunks;
    ::ll::TypedStorage<1, 1, ::AreaType>                          mAreaType;
    ::ll::TypedStorage<4, 48, ::Bounds>                           mBounds;
    ::ll::TypedStorage<8, 32, ::std::string>                      mTickingAreaName;
    ::ll::TypedStorage<8, 32, ::std::string>                      mSerializationId;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IRequestAction>> mRequestAction;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ChunkLoadedRequest& operator=(ChunkLoadedRequest const&);
    ChunkLoadedRequest(ChunkLoadedRequest const&);
#else // @header-generator platform
#endif // @header-generator platform
    ChunkLoadedRequest();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ITickingAreaView const* _getTickingArea(::Dimension const&) const;
#else // @header-generator platform
    MCAPI ChunkLoadedRequest(
        ::std::string const&                tickingAreaName,
        ::std::unique_ptr<::IRequestAction> requestAction,
        bool                                allowNonTickingPlayerAndTickingAreaChunks
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ChunksLoadedStatus areAllChunksLoaded(::Dimension&, ::Tick) const;
#else // @header-generator platform
    MCAPI ::ITickingAreaView const* _getTickingArea(::Dimension const& dimension) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ChunkLoadedRequest();
#else // @header-generator platform
    MCAPI ::ChunksLoadedStatus areAllChunksLoaded(::Dimension& dimension, ::Tick currentLevelTick) const;

    MCAPI ~ChunkLoadedRequest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                tickingAreaName,
        ::std::unique_ptr<::IRequestAction> requestAction,
        bool                                allowNonTickingPlayerAndTickingAreaChunks
    );
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
