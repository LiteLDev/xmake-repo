#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentSourceType.h"
#include "mc/client/gui/screens/models/PackManagerContentSource.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentSourceRepository;
class IEntitlementManager;
class IUIDefRepository;
class ResourcePackManager;
struct ContentItem;
struct PackContentItem;
struct PackInstanceId;
struct PackManagerContentSourceArgs;
// clang-format on

struct PackManagerContentSourceImpl : public ::PackManagerContentSource {
public:
    // PackManagerContentSourceImpl inner types define
    using PackContentItemPtr = std::shared_ptr<PackContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mContentSourceRepository;
    // NOLINTEND

public:
    // prevent constructor by default
    PackManagerContentSourceImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackManagerContentSourceImpl();

    virtual void save();

    virtual void saveAllPacks();

    virtual void deleteContentFiles(std::vector<std::shared_ptr<const ContentItem>> const&);

    virtual void postDeleteContent(std::vector<std::shared_ptr<const ContentItem>> const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackManagerContentSourceImpl(
        ::ContentSourceType,
        ::PackManagerContentSourceArgs&&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IContentSourceRepository>>
    );

    MCNAPI std::vector<std::shared_ptr<PackContentItem>> _getAllSelectedItems() const;

    MCNAPI void _save(bool const);

    MCNAPI void getSortedSelectedContent(
        std::vector<PackInstanceId>&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>
    );

    MCNAPI void repopulateReports(::gsl::not_null<Bedrock::NonOwnerPointer<IUIDefRepository>>, ::ResourcePackManager&);

    MCNAPI void resetCache();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ContentSourceType,
        ::PackManagerContentSourceArgs&&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IContentSourceRepository>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $save();

    MCNAPI void $saveAllPacks();

    MCNAPI void $deleteContentFiles(std::vector<std::shared_ptr<const ContentItem>> const&);

    MCNAPI void $postDeleteContent(std::vector<std::shared_ptr<const ContentItem>> const&);
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
#include "mc/client/gui/screens/models/ContentSourceType.h"
#include "mc/client/gui/screens/models/PackManagerContentSource.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentSourceRepository;
class IEntitlementManager;
class IUIDefRepository;
class ResourcePackManager;
struct ContentItem;
struct PackContentItem;
struct PackInstanceId;
struct PackManagerContentSourceArgs;
// clang-format on

struct PackManagerContentSourceImpl : public ::PackManagerContentSource {
public:
    // PackManagerContentSourceImpl inner types define
    using ConstPackContentItemPtr = ::std::shared_ptr<::PackContentItem const>;

    using PackContentItemPtr = ::std::shared_ptr<::PackContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentSourceRepository>> mContentSourceRepository;
    // NOLINTEND

public:
    // prevent constructor by default
    PackManagerContentSourceImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackManagerContentSourceImpl() /*override*/;

    virtual void save() /*override*/;

    virtual void saveAllPacks() /*override*/;

    virtual void deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const& items) /*override*/;

    virtual void postDeleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& items) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackManagerContentSourceImpl(
        ::ContentSourceType                                       sourceType,
        ::PackManagerContentSourceArgs&&                          args,
        ::Bedrock::NotNullNonOwnerPtr<::IContentSourceRepository> contentSourceRepository
    );

    MCAPI ::std::vector<::std::shared_ptr<::PackContentItem>> _getAllSelectedItems() const;

    MCAPI void _save(bool const shouldSaveAll);

    MCAPI void getSortedSelectedContent(
        ::std::vector<::PackInstanceId>&                     modelManagerIdentities,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager
    );

    MCAPI void
    repopulateReports(::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository> uiDefRepo, ::ResourcePackManager& packManager);

    MCAPI void resetCache();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ContentSourceType                                       sourceType,
        ::PackManagerContentSourceArgs&&                          args,
        ::Bedrock::NotNullNonOwnerPtr<::IContentSourceRepository> contentSourceRepository
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $save();

    MCAPI void $saveAllPacks();

    MCAPI void $deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const& items);

    MCAPI void $postDeleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& items);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
struct PackManagerContentSourceImpl {};
#endif // @header-generator platform
#endif // @header-generator platform
