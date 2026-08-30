#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackSource.h"
#include "mc/resources/PackSourceOptions.h"

// auto generated forward declare list
// clang-format off
class IContentCatalogPackSourceService;
class IEntitlementManager;
class TaskGroup;
namespace ContentManagerUtils { class ISourcesAsyncReloader; }
// clang-format on

struct ContentCatalogPackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PackSourceOptions>                                        mBase;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IContentCatalogPackSourceService>>          mCatalogService;
    ::ll::UntypedStorage<8, 24>                                                          mEntitlementManager;
    ::ll::TypedStorage<1, 1, bool>                                                       mEnabled;
    ::ll::UntypedStorage<1, 1>                                                           mPackType;
    ::ll::TypedStorage<1, 1, bool>                                                       mHighPriorityIconRequests;
    ::ll::TypedStorage<8, 16, std::weak_ptr<ContentManagerUtils::ISourcesAsyncReloader>> mWeakSourcesAsyncReloader;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                                 mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentCatalogPackSourceOptions& operator=(ContentCatalogPackSourceOptions const&);
    ContentCatalogPackSourceOptions(ContentCatalogPackSourceOptions const&);
    ContentCatalogPackSourceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ContentCatalogPackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
