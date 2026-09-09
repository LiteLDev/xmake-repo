#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
