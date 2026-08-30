#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

class ContentItemCollection {
public:
    // ContentItemCollection inner types declare
    // clang-format off
    struct ContentViewSource;
    struct ItemCollection;
    // clang-format on

    // ContentItemCollection inner types define
    struct ContentViewSource {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ContentItemCollectionVersion>                        mLastVersion;
        ::ll::TypedStorage<8, 16, std::weak_ptr<const IVersionedContentItemCollection>> mCollection;
        // NOLINTEND

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
};
