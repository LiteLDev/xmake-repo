#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/world/level/PackInstanceId.h"

// auto generated forward declare list
// clang-format off
class CompositePackSource;
struct PackContentItem;
namespace Core { class Path; }
// clang-format on

struct PackManagerContentSourceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                              mPath;
    ::ll::TypedStorage<8, 8, ::ContentType>                                  mContentType;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompositePackSource>>           mPackSource;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<PackContentItem>>> mPackContent;
    ::ll::TypedStorage<8, 24, std::vector<PackIdVersion>>                    mSelectedPacksCache;
    ::ll::TypedStorage<8, 24, std::vector<PackInstanceId>>                   mCachedInstanceIds;
    ::ll::TypedStorage<1, 1, bool>                                           mLoadedInstanceIds;
    // NOLINTEND

public:
    // prevent constructor by default
    PackManagerContentSourceData& operator=(PackManagerContentSourceData const&);
    PackManagerContentSourceData(PackManagerContentSourceData const&);
    PackManagerContentSourceData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackManagerContentSourceData(
        ::Core::Path const&,
        ::ContentType const,
        std::unique_ptr<CompositePackSource>,
        std::vector<std::shared_ptr<PackContentItem>> const&
    );

    MCNAPI ~PackManagerContentSourceData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Core::Path const&,
        ::ContentType const,
        std::unique_ptr<CompositePackSource>,
        std::vector<std::shared_ptr<PackContentItem>> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/level/PackInstanceId.h"

// auto generated forward declare list
// clang-format off
class CompositePackSource;
struct PackContentItem;
struct PackIdVersion;
namespace Core { class Path; }
// clang-format on

struct PackManagerContentSourceData {
public:
    // PackManagerContentSourceData inner types define
    using PackContentItemPtr = ::std::shared_ptr<::PackContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                   mPath;
    ::ll::TypedStorage<8, 8, ::ContentType>                                        mContentType;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>>             mPackSource;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PackContentItem>>> mPackContent;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackIdVersion>>                      mSelectedPacksCache;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackInstanceId>>                     mCachedInstanceIds;
    ::ll::TypedStorage<1, 1, bool>                                                 mLoadedInstanceIds;
    // NOLINTEND

public:
    // prevent constructor by default
    PackManagerContentSourceData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackManagerContentSourceData(
        ::Core::Path const&                                        path,
        ::ContentType const                                        contentType,
        ::std::unique_ptr<::CompositePackSource>                   packSource,
        ::std::vector<::std::shared_ptr<::PackContentItem>> const& packContent
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Core::Path const&                                        path,
        ::ContentType const                                        contentType,
        ::std::unique_ptr<::CompositePackSource>                   packSource,
        ::std::vector<::std::shared_ptr<::PackContentItem>> const& packContent
    );
    // NOLINTEND
};
#else // @header-generator platform
struct PackManagerContentSourceData {};
#endif // @header-generator platform
#endif // @header-generator platform
