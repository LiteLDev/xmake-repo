#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/threading/SharedLockbox.h"
#include "mc/deps/resource_processing/PreloadState.h"
#include "mc/deps/resource_processing/Reader.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Bedrock::Resources::Archive { class TOCReader; }
namespace Core { class FileHandlePool; }
// clang-format on

namespace Bedrock::Resources {

class PreloadCache : public ::std::enable_shared_from_this<Bedrock::Resources::PreloadCache> {
public:
    // PreloadCache inner types declare
    // clang-format off
    struct PreloadedContentMaps;
    struct InFlightTocBuild;
    struct InFlightTocBuilds;
    struct SharedOnlyConstructionTag;
    // clang-format on

    // PreloadCache inner types define
    struct PreloadedContentMaps {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 40, std::unordered_map<Core::Path, std::weak_ptr<Bedrock::Resources::Archive::Reader>>> mStorage;
        ::ll::TypedStorage<8, 40, std::unordered_map<Core::Path, std::string_view>> mAssets;
        // clang-format on
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PreloadedContentMaps();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct InFlightTocBuild {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 40, std::mutex>                                              mMutex;
        ::ll::TypedStorage<4, 48, std::condition_variable>                                 mFinishedCondition;
        ::ll::TypedStorage<1, 1, bool>                                                     mFinished;
        ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::Resources::Archive::TOCReader>> mResult;
        // NOLINTEND
    };

    struct InFlightTocBuilds {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<4, 40, std::mutex> mMutex;
        ::ll::TypedStorage<8, 40, std::unordered_map<Core::Path, std::shared_ptr<Bedrock::Resources::PreloadCache::InFlightTocBuild>>> mBuilds;
        // clang-format on
        // NOLINTEND
    };

    struct SharedOnlyConstructionTag {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 224> mPreloadedPaths;
    ::ll::UntypedStorage<8, 16>  mFallbackPreloadPaths;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::Resources::PreloadCache::InFlightTocBuilds>> mInFlightBuilds;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Core::FileHandlePool>>                                 mHandlePool;
    ::ll::UntypedStorage<8, 184> mNegativeArchiveCache;
    // NOLINTEND

public:
    // prevent constructor by default
    PreloadCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PreloadCache(
        ::Bedrock::Resources::PreloadCache::SharedOnlyConstructionTag,
        std::weak_ptr<Core::FileHandlePool>
    );

    MCNAPI std::shared_ptr<Bedrock::Resources::Archive::TOCReader>
           _cacheTOCReaderSingleFlight(::Core::Path const&) const;

    MCNAPI ::Bedrock::Resources::PreloadedPathHandle
    _findPreloadedPath(::Bedrock::Resources::PreloadCache::PreloadedContentMaps const&, ::Core::Path const&) const;

    MCNAPI ::Bedrock::Resources::PreloadState
    _getAsset(::Bedrock::Resources::PreloadCache::PreloadedContentMaps const&, ::Core::Path const&, std::string*) const;

    MCNAPI ::Bedrock::Resources::PreloadedPathHandle
    addPreloadedPath(::Core::Path const&, std::unique_ptr<Bedrock::Resources::Archive::Reader>);

    MCNAPI ::Bedrock::Resources::PreloadedPathHandle findPreloadedPath(::Core::Path const&) const;

    MCNAPI ::Bedrock::Resources::PreloadState getAsset(::Core::Path const&, ::Core::Path const&, std::string&) const;

    MCNAPI ::Bedrock::Resources::PreloadState hasAsset(::Core::Path const&) const;

    MCNAPI ::Bedrock::Resources::PreloadState hasAssetFallback(::Core::Path const&, ::Core::Path const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _preloadedPathDeleter(
        std::weak_ptr<Bedrock::Resources::PreloadCache>,
        ::Core::Path const&,
        ::Bedrock::Resources::Archive::Reader*
    );

    MCNAPI static std::shared_ptr<Bedrock::Resources::PreloadCache> create(std::weak_ptr<Core::FileHandlePool>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
        $ctor(::Bedrock::Resources::PreloadCache::SharedOnlyConstructionTag, std::weak_ptr<Core::FileHandlePool>);
    // NOLINTEND
};

} // namespace Bedrock::Resources
