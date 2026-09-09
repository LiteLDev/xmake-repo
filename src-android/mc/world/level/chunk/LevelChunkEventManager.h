#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/world/level/chunk/ILevelChunkEventManagerConnector.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class ILevelChunkEventManagerProxy;
class LevelChunk;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class LevelChunkEventManager : public ::ILevelChunkEventManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 88> mOnChunkLoadedPublisher;
    ::ll::UntypedStorage<8, 88> mOnChunkReloadedPublisher;
    ::ll::UntypedStorage<8, 88> mOnChunkDiscardedPublisher;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<ILevelChunkEventManagerProxy>> const> mLevelChunkEventManagerProxy;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkEventManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelChunkEventManager();

    virtual ::Bedrock::PubSub::Connector<void(ChunkSource&, LevelChunk&, int)>& getOnChunkLoadedConnector();

    virtual ::Bedrock::PubSub::Connector<void(ChunkSource&, LevelChunk&)>& getOnChunkReloadedConnector();

    virtual ::Bedrock::PubSub::Connector<void(LevelChunk&)>& getOnChunkDiscardedConnector();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LevelChunkEventManager(std::unique_ptr<ILevelChunkEventManagerProxy>);

    MCNAPI void onChunkDiscarded(::LevelChunk&);

    MCNAPI void onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    MCNAPI void onChunkReloaded(::ChunkSource&, ::LevelChunk&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<ILevelChunkEventManagerProxy>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Connector<void(ChunkSource&, LevelChunk&, int)>& $getOnChunkLoadedConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(ChunkSource&, LevelChunk&)>& $getOnChunkReloadedConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(LevelChunk&)>& $getOnChunkDiscardedConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
