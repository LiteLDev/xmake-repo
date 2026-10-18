#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/threading/SharedLockbox.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/resource_processing/PreloadState.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/resource_processing/Reader.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock::Resources { class PreloadedPathHandle; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::Resources::Archive { class Reader; }
#endif // @header-generator platform
namespace Bedrock::Resources::Archive { class TOCReader; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class FileHandlePool; }
#else // @header-generator platform
namespace Core { class Path; }
#endif // @header-generator platform
// clang-format on

namespace Bedrock::Resources {

#if defined(LL_PLAT_A) // @header-generator platform
class PreloadCache : public ::std::enable_shared_from_this<Bedrock::Resources::PreloadCache> {
#else // @header-generator platform
class PreloadCache : public ::std::enable_shared_from_this<::Bedrock::Resources::PreloadCache> {
#endif // @header-generator platform
public:
    // PreloadCache inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct PreloadedContentMaps;
#else // @header-generator platform
#endif // @header-generator platform
    struct InFlightTocBuild;
    struct InFlightTocBuilds;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct PreloadedContentMaps;
#endif // @header-generator platform
    struct SharedOnlyConstructionTag;
    // clang-format on

    // PreloadCache inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
    struct InFlightTocBuild {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 40, std::mutex>                                              mMutex;
        ::ll::TypedStorage<4, 48, std::condition_variable>                                 mFinishedCondition;
        ::ll::TypedStorage<1, 1, bool>                                                     mFinished;
        ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::Resources::Archive::TOCReader>> mResult;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 80> mUnkf310d5;
        ::ll::UntypedStorage<8, 72> mUnk4655ba;
        ::ll::UntypedStorage<1, 1>  mUnkb8d676;
        ::ll::UntypedStorage<8, 16> mUnk262761;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        InFlightTocBuild& operator=(InFlightTocBuild const&);
        InFlightTocBuild(InFlightTocBuild const&);
        InFlightTocBuild();
#endif // @header-generator platform
    };

    struct InFlightTocBuilds {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<4, 40, std::mutex> mMutex;
        ::ll::TypedStorage<8, 40, std::unordered_map<Core::Path, std::shared_ptr<Bedrock::Resources::PreloadCache::InFlightTocBuild>>> mBuilds;
        // clang-format on
#else // @header-generator platform
        ::ll::UntypedStorage<8, 80> mUnka1d340;
        ::ll::UntypedStorage<8, 64> mUnkff858f;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        InFlightTocBuilds& operator=(InFlightTocBuilds const&);
        InFlightTocBuilds(InFlightTocBuilds const&);
        InFlightTocBuilds();
    };

    struct PreloadedContentMaps {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkea2f7b;
        ::ll::UntypedStorage<8, 64> mUnk31b19a;
        // NOLINTEND

    public:
        // prevent constructor by default
        PreloadedContentMaps& operator=(PreloadedContentMaps const&);
        PreloadedContentMaps(PreloadedContentMaps const&);
        PreloadedContentMaps();
#endif // @header-generator platform
    };

    struct SharedOnlyConstructionTag {};

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 224> mPreloadedPaths;
    ::ll::UntypedStorage<8, 16>  mFallbackPreloadPaths;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::Resources::PreloadCache::InFlightTocBuilds>> mInFlightBuilds;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Core::FileHandlePool>>                                 mHandlePool;
    ::ll::UntypedStorage<8, 184> mNegativeArchiveCache;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 136> mUnk3091c8;
    ::ll::UntypedStorage<8, 16>  mUnk407c1f;
    ::ll::UntypedStorage<8, 8>   mUnk693ed0;
    ::ll::UntypedStorage<8, 16>  mUnka4641f;
    ::ll::UntypedStorage<8, 72>  mUnkba8bc7;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PreloadCache& operator=(PreloadCache const&);
    PreloadCache(PreloadCache const&);
#endif // @header-generator platform
    PreloadCache();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PreloadCache(
        ::Bedrock::Resources::PreloadCache::SharedOnlyConstructionTag,
        std::weak_ptr<Core::FileHandlePool>
    );
#else // @header-generator platform
    MCNAPI ::std::shared_ptr<::Bedrock::Resources::Archive::TOCReader>
    _cacheTOCReaderSingleFlight(::Core::Path const& archivePath) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<Bedrock::Resources::Archive::TOCReader>
           _cacheTOCReaderSingleFlight(::Core::Path const&) const;
#else // @header-generator platform
    MCNAPI ::Bedrock::Resources::PreloadedPathHandle _findPreloadedPath(
        ::Bedrock::Resources::PreloadCache::PreloadedContentMaps const& contentMaps,
        ::Core::Path const&                                             cleanPath
    ) const;

    MCNAPI ::Bedrock::Resources::PreloadState _getAsset(
        ::Bedrock::Resources::PreloadCache::PreloadedContentMaps const& contentMaps,
        ::Core::Path const&                                             path,
        ::std::string*                                                  assetData
    ) const;

    MCNAPI bool _isNegativelyCached(::Core::Path const& archivePath) const;
#endif // @header-generator platform

    MCNAPI ::Bedrock::Resources::PreloadedPathHandle
#if defined(LL_PLAT_A) // @header-generator platform
    _findPreloadedPath(::Bedrock::Resources::PreloadCache::PreloadedContentMaps const&, ::Core::Path const&) const;
#else // @header-generator platform
    addPreloadedPath(::Core::Path const& path, ::std::unique_ptr<::Bedrock::Resources::Archive::Reader> archiveReader);

    MCNAPI ::Bedrock::Resources::PreloadedPathHandle findPreloadedPath(::Core::Path const& path) const;
#endif // @header-generator platform

    MCNAPI ::Bedrock::Resources::PreloadState
#if defined(LL_PLAT_A) // @header-generator platform
    _getAsset(::Bedrock::Resources::PreloadCache::PreloadedContentMaps const&, ::Core::Path const&, std::string*) const;
#else // @header-generator platform
    getAsset(::Core::Path const& path, ::Core::Path const& archivePath, ::std::string& contents) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Resources::PreloadedPathHandle
    addPreloadedPath(::Core::Path const&, std::unique_ptr<Bedrock::Resources::Archive::Reader>);

    MCNAPI ::Bedrock::Resources::PreloadedPathHandle findPreloadedPath(::Core::Path const&) const;

    MCNAPI ::Bedrock::Resources::PreloadState getAsset(::Core::Path const&, ::Core::Path const&, std::string&) const;

    MCNAPI ::Bedrock::Resources::PreloadState hasAsset(::Core::Path const&) const;

    MCNAPI ::Bedrock::Resources::PreloadState hasAssetFallback(::Core::Path const&, ::Core::Path const&) const;
#else // @header-generator platform
    MCNAPI ::Bedrock::Resources::PreloadState
    hasAssetFallback(::Core::Path const& path, ::Core::Path const& archivePath) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _preloadedPathDeleter(
#if defined(LL_PLAT_A) // @header-generator platform
        std::weak_ptr<Bedrock::Resources::PreloadCache>,
        ::Core::Path const&,
        ::Bedrock::Resources::Archive::Reader*
#else // @header-generator platform
        ::std::weak_ptr<::Bedrock::Resources::PreloadCache> weakThis,
        ::Core::Path const&                                 path,
        ::Bedrock::Resources::Archive::Reader*              reader
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI static std::shared_ptr<Bedrock::Resources::PreloadCache> create(std::weak_ptr<Core::FileHandlePool>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
        $ctor(::Bedrock::Resources::PreloadCache::SharedOnlyConstructionTag, std::weak_ptr<Core::FileHandlePool>);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Resources
