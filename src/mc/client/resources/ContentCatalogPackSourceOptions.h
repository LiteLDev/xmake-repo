#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ContentCatalogPackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk67a58a;
    ::ll::UntypedStorage<8, 8>  mUnk8e7a24;
    ::ll::UntypedStorage<8, 24> mUnk683edc;
    ::ll::UntypedStorage<1, 1>  mUnkb456e5;
    ::ll::UntypedStorage<1, 1>  mUnk629446;
    ::ll::UntypedStorage<1, 1>  mUnk920758;
    ::ll::UntypedStorage<8, 16> mUnkd4f32e;
    ::ll::UntypedStorage<8, 8>  mUnk5c787d;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentCatalogPackSourceOptions& operator=(ContentCatalogPackSourceOptions const&);
    ContentCatalogPackSourceOptions(ContentCatalogPackSourceOptions const&);
    ContentCatalogPackSourceOptions();
};
#else // @header-generator platform
struct ContentCatalogPackSourceOptions {};
#endif // @header-generator platform
#endif // @header-generator platform
