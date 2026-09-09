#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/FetchResult.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class TreatmentPackDownloadMonitor;
struct ResourcePackTreatmentSearchResults;
// clang-format on

class ResourcePackTreatmentQuery : public ::std::enable_shared_from_this<ResourcePackTreatmentQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::TreatmentPackDownloadMonitor&> mMonitor;
    ::ll::TypedStorage<8, 8, ::ContentCatalogService&>        mCatalogService;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackTreatmentQuery& operator=(ResourcePackTreatmentQuery const&);
    ResourcePackTreatmentQuery(ResourcePackTreatmentQuery const&);
    ResourcePackTreatmentQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePackTreatmentQuery(::ContentCatalogService&, ::TreatmentPackDownloadMonitor&);

    MCNAPI void sendQuery();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContentCatalogService&, ::TreatmentPackDownloadMonitor&);
    // NOLINTEND
};
