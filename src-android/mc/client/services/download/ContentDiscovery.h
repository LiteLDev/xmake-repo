#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class IContentDiscoveryListener;
class PackSourceFactory;
struct DurableDocument;
struct InstalledPackDetails;
struct PackIdVersion;
struct UpdateHistoryRecords;
// clang-format on

class ContentDiscovery {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IContentDiscoveryListener&> mContentDiscoveryListener;
    ::ll::UntypedStorage<8, 24>                            mCatalogService;
    ::ll::TypedStorage<8, 8, ::PackSourceFactory&>         mPackSourceFactory;
    ::ll::TypedStorage<4, 4, int const>                    SEARCH_BATCH_SIZE;
    ::ll::TypedStorage<4, 4, int const>                    SEARCH_PAGE_SIZE;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>       mExistenceTracker;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentDiscovery& operator=(ContentDiscovery const&);
    ContentDiscovery(ContentDiscovery const&);
    ContentDiscovery();
};
