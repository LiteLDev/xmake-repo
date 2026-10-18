#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentItem.h"
#include "mc/client/gui/screens/models/ContentItemCollectionVersion.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IVersionedContentItemCollection;
class ReadOnlyContentItemCollection;
struct ContentCollectionOptions;
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentItemCollectionVersion.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IVersionedContentItemCollection;
class ReadOnlyContentItemCollection;
struct ContentCollectionOptions;
struct ContentItem;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class ContentItemCollection {
public:
    // ContentItemCollection inner types declare
    // clang-format off
    struct ContentViewSource;
    struct ItemCollection;
    // clang-format on

    // ContentItemCollection inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ContentViewSource {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ContentItemCollectionVersion>                        mLastVersion;
        ::ll::TypedStorage<8, 16, std::weak_ptr<const IVersionedContentItemCollection>> mCollection;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ContentViewSource {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ContentItemCollectionVersion>                            mLastVersion;
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::IVersionedContentItemCollection const>> mCollection;
        // NOLINTEND
    };
#else // @header-generator platform
    struct ContentViewSource {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        ContentViewSource& operator=(ContentViewSource const&);
        ContentViewSource(ContentViewSource const&);
    };

    struct ItemCollection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ContentItem>>> mItemProxy;
        ::ll::UntypedStorage<8, 64>                                              mPredicate;
        ::ll::UntypedStorage<8, 32>                                              mCollection;
        // NOLINTEND

    public:
        // prevent constructor by default
        ItemCollection& operator=(ItemCollection const&);
        ItemCollection(ItemCollection const&);
        ItemCollection();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ItemCollection();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using OnReload = ::brstd::move_only_function<void(ContentItemCollection&)>;

    using FilterPredicate = ::brstd::move_only_function<bool(const ContentItem&)>;

    using SortPredicate = bool (*)(::ContentItem const&, ::ContentItem const&);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ReadOnlyContentItemCollection>>>     mAllItems;
    ::ll::TypedStorage<8, 24, std::vector<ContentItemCollection::ContentViewSource>>               mContentViewSources;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ContentItemCollection::ItemCollection>>> mItemCollections;
    ::ll::UntypedStorage<8, 64>                                                                    mOnReloaded;
    ::ll::UntypedStorage<8, 64>                                                                    mFilter;
    ::ll::UntypedStorage<8, 16>                                                                    mSort;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentItemCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ContentItemCollection(::ContentCollectionOptions&&);

    MCNAPI void createItemCollection(
        ::gsl::not_null<std::shared_ptr<ContentItem>>,
        ::brstd::move_only_function<bool(const ContentItem&)>
    );

    MCNAPI void forEachItem(::brstd::move_only_function<void(const std::shared_ptr<const ContentItem>&)>);

    MCNAPI void forceReload();

    MCNAPI std::vector<gsl::not_null<std::shared_ptr<const ContentItem>>> getCollection(::ContentItem const&);

    MCNAPI std::shared_ptr<const ContentItem> getItem(ulong);

    MCNAPI std::shared_ptr<const ContentItem> getItem(::brstd::move_only_function<bool(const ContentItem&)>);

    MCNAPI ulong getNumberOfItems();

    MCNAPI ulong getTotalSize();

    MCNAPI ::gsl::not_null<std::shared_ptr<const IVersionedContentItemCollection>> getViewSource() const;

    MCNAPI bool tryReload();

    MCNAPI ~ContentItemCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContentCollectionOptions&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ItemCollection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::ContentItem>>>                      mItemProxy;
        ::ll::TypedStorage<8, 64, ::brstd::move_only_function<bool(::ContentItem const&)>>                mPredicate;
        ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::std::shared_ptr<::ContentItem const>>>> mCollection;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ItemCollection();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    using OnReload = ::brstd::move_only_function<void(::ContentItemCollection&)>;

    using SortPredicate = bool (*)(::ContentItem const&, ::ContentItem const&);

    using FilterPredicate = ::brstd::move_only_function<bool(::ContentItem const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::ReadOnlyContentItemCollection>>> mAllItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ContentItemCollection::ContentViewSource>>           mContentViewSources;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ContentItemCollection::ItemCollection>>>
                                                                                           mItemCollections;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void(::ContentItemCollection&)>> mOnReloaded;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<bool(::ContentItem const&)>>     mFilter;
    ::ll::TypedStorage<8, 8, bool (*)(::ContentItem const&, ::ContentItem const&)>         mSort;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentItemCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ContentItemCollection(::ContentCollectionOptions&& options);

    MCAPI void createItemCollection(
        ::gsl::not_null<::std::shared_ptr<::ContentItem>>       itemProxy,
        ::brstd::move_only_function<bool(::ContentItem const&)> predicate
    );

    MCAPI void forceReload();

    MCAPI ::std::shared_ptr<::ContentItem const>
    getItem(::brstd::move_only_function<bool(::ContentItem const&)> predicate);

    MCAPI bool tryReload();

    MCAPI ~ContentItemCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContentCollectionOptions&& options);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct ItemCollection {};
#endif // @header-generator platform
#endif // @header-generator platform
};
