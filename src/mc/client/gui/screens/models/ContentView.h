#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IContentManager;
struct ContentItem;
// clang-format on

class ContentView : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ContentView inner types define
    using ContentItemPtr = std::shared_ptr<ContentItem>;

    using ConstContentItemPtr = std::shared_ptr<const ContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<IContentManager>>            mContentManager;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ContentItem>>> mItems;
    ::ll::UntypedStorage<8, 64>                                          mPredicate;
    ::ll::UntypedStorage<8, 48>                                          mSortFunction;
    ::ll::UntypedStorage<8, 48>                                          mOnReload;
    ::ll::UntypedStorage<8, 32>                                          mContentViewSources;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentView();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentView();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ulong countIf(std::function<bool(const std::shared_ptr<ContentItem>&)>) const;

    MCNAPI std::shared_ptr<ContentItem> getItem(uint);

    MCNAPI std::shared_ptr<ContentItem> getItem(std::function<bool(const ContentItem&)>) const;

    MCNAPI std::shared_ptr<const ContentItem> getItem(uint) const;

    MCNAPI uint getNumberOfItems() const;

    MCNAPI ulong getTotalSize() const;

    MCNAPI void onReload(std::function<void()>);

    MCNAPI void reload();

    MCNAPI void
        setSortFunc(std::function<bool(const std::shared_ptr<ContentItem>&, const std::shared_ptr<ContentItem>&)>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IContentManager;
struct ContentItem;
// clang-format on

class ContentView : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ContentView inner types define
    using ConstContentItemPtr = ::std::shared_ptr<::ContentItem const>;

    using ContentItemPtr = ::std::shared_ptr<::ContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::IContentManager>>                                  mContentManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ContentItem>>>                     mItems;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<bool(::std::shared_ptr<::ContentItem>)>> mPredicate;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::shared_ptr<::ContentItem>, ::std::shared_ptr<::ContentItem>)>>
                                                                   mSortFunction;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>             mOnReload;
    ::ll::TypedStorage<8, 24, ::std::vector<::ContentView const*>> mContentViewSources;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentView() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void onReload(::std::function<void()> callback);

    MCAPI void reload();

    MCAPI void setSortFunc(
        ::std::function<bool(::std::shared_ptr<::ContentItem> const&, ::std::shared_ptr<::ContentItem> const&)> sortFunc
    );
    // NOLINTEND
};
#else // @header-generator platform
class ContentView {};
#endif // @header-generator platform
#endif // @header-generator platform
