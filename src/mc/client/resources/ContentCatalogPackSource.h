#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/resources/IContentCatalogPackSource.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentCatalogPackSourceService;
class IEntitlementManager;
class IPackManifestFactory;
class TaskGroup;
struct ContentCatalogPackSourceOptions;
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
namespace ContentManagerUtils { class ISourcesAsyncReloader; }
// clang-format on

class ContentCatalogPackSource : public ::IContentCatalogPackSource,
                                 public ::std::enable_shared_from_this<ContentCatalogPackSource> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                          mEntitlementManager;
    ::ll::TypedStorage<1, 1, bool>                                                       mEnabled;
    ::ll::TypedStorage<1, 1, ::PackType const>                                           mPackType;
    ::ll::TypedStorage<1, 1, bool const>                                                 mHighPriorityIconRequests;
    ::ll::UntypedStorage<8, 16>                                                          mActiveFetch;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                                 mTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IContentCatalogPackSourceService>>          mCatalogService;
    ::ll::TypedStorage<8, 16, std::weak_ptr<ContentManagerUtils::ISourcesAsyncReloader>> mWeakSourcesAsyncReloader;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentCatalogPackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentCatalogPackSource();

    virtual ::PackType getPackType() const;

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&);

    virtual void refreshCatalogItems(::IPackManifestFactory&);

    virtual void setEnabled(bool);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<void> _load();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackType $getPackType() const;

    MCNAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&&);

    MCNAPI void $refreshCatalogItems(::IPackManifestFactory&);

    MCNAPI void $setEnabled(bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/resources/IContentCatalogPackSource.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentCatalogPackSourceService;
class IEntitlementManager;
class IPackManifestFactory;
class TaskGroup;
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
namespace ContentManagerUtils { class ISourcesAsyncReloader; }
// clang-format on

class ContentCatalogPackSource : public ::IContentCatalogPackSource,
                                 public ::std::enable_shared_from_this<::ContentCatalogPackSource> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>          mEntitlementManager;
    ::ll::TypedStorage<1, 1, bool>                                                           mEnabled;
    ::ll::TypedStorage<1, 1, ::PackType const>                                               mPackType;
    ::ll::TypedStorage<1, 1, bool const>                                                     mHighPriorityIconRequests;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::SharedAsync<void>>                       mActiveFetch;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                                 mTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentCatalogPackSourceService>>          mCatalogService;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ContentManagerUtils::ISourcesAsyncReloader>> mWeakSourcesAsyncReloader;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentCatalogPackSource() /*override*/ = default;

    virtual void setEnabled(bool enabled) /*override*/;

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&) /*override*/;

    virtual ::PackType getPackType() const /*override*/;

    virtual void refreshCatalogItems(::IPackManifestFactory&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::Threading::Async<void> _load();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setEnabled(bool enabled);

    MCAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&&);

    MCAPI ::PackType $getPackType() const;

    MCAPI void $refreshCatalogItems(::IPackManifestFactory&);
    // NOLINTEND
};
#else // @header-generator platform
class ContentCatalogPackSource {};
#endif // @header-generator platform
#endif // @header-generator platform
