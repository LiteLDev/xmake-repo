#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/services/catalog/DurableDocument.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentCatalogPackSourceService;
class IEntitlementManager;
class Pack;
class PackManifest;
class TaskGroup;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct ContentCatalogQueryData {
public:
    // ContentCatalogQueryData inner types declare
    // clang-format off
    struct Done;
    // clang-format on

    // ContentCatalogQueryData inner types define
    struct Done {};
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<std::shared_ptr<Pack>>>> mPacks;
    ::ll::TypedStorage<8, 24, std::vector<DurableDocument>>                      mDocuments;
    ::ll::TypedStorage<8, 8, ulong>                                              mDocumentsReceived;
    ::ll::TypedStorage<8, 8, ulong>                                              mDocumentsRemoved;
    ::ll::TypedStorage<1, 1, ::PackType const>                                   mPackType;
    ::ll::TypedStorage<8, 8, ::TaskGroup&>                                       mTaskGroup;
    ::ll::TypedStorage<8, 8, ::IContentCatalogPackSourceService&>                mCatalogService;
    ::ll::UntypedStorage<8, 24>                                                  mEntitlementManager;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<PackManifest>>>        mManifests;
    ::ll::TypedStorage<8, 24, std::vector<ulong>>                                mImageFetchManifestMapping;
    ::ll::TypedStorage<1, 1, bool const>                                         mHighPriorityIconRequests;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentCatalogQueryData& operator=(ContentCatalogQueryData const&);
    ContentCatalogQueryData(ContentCatalogQueryData const&);
    ContentCatalogQueryData();
#else // @header-generator platform
#endif // @header-generator platform
};
