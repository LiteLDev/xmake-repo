#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<8, 88> mOnChunkLoadedPublisher;
    ::ll::UntypedStorage<8, 88> mOnChunkReloadedPublisher;
    ::ll::UntypedStorage<8, 88> mOnChunkDiscardedPublisher;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<ILevelChunkEventManagerProxy>> const> mLevelChunkEventManagerProxy;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::ChunkSource&, ::LevelChunk&, int), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnChunkLoadedPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::ChunkSource&, ::LevelChunk&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnChunkReloadedPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::LevelChunk&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnChunkDiscardedPublisher;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ILevelChunkEventManagerProxy>> const>
        mLevelChunkEventManagerProxy;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkEventManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LevelChunkEventManager();
#else // @header-generator platform
    virtual ~LevelChunkEventManager() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(ChunkSource&, LevelChunk&, int)>& getOnChunkLoadedConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&, int)>&
    getOnChunkLoadedConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(ChunkSource&, LevelChunk&)>& getOnChunkReloadedConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&)>&
    getOnChunkReloadedConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(LevelChunk&)>& getOnChunkDiscardedConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::LevelChunk&)>& getOnChunkDiscardedConnector() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit LevelChunkEventManager(std::unique_ptr<ILevelChunkEventManagerProxy>);

    MCNAPI void onChunkDiscarded(::LevelChunk&);

    MCNAPI void onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    MCNAPI void onChunkReloaded(::ChunkSource&, ::LevelChunk&);
#else // @header-generator platform
    MCAPI explicit LevelChunkEventManager(
        ::std::unique_ptr<::ILevelChunkEventManagerProxy> levelChunkEventManagerProxy
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::unique_ptr<ILevelChunkEventManagerProxy>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::unique_ptr<::ILevelChunkEventManagerProxy> levelChunkEventManagerProxy);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(ChunkSource&, LevelChunk&, int)>& $getOnChunkLoadedConnector();
#else // @header-generator platform
    MCFOLD ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&, int)>& $getOnChunkLoadedConnector();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(ChunkSource&, LevelChunk&)>& $getOnChunkReloadedConnector();
#else // @header-generator platform
    MCFOLD ::Bedrock::PubSub::Connector<void(::ChunkSource&, ::LevelChunk&)>& $getOnChunkReloadedConnector();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(LevelChunk&)>& $getOnChunkDiscardedConnector();
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Connector<void(::LevelChunk&)>& $getOnChunkDiscardedConnector();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
