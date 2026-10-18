#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class ContentItemCollection;
class IStorageManagementModel;
class IVersionedContentItemCollection;
struct ContentItem;
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated forward declare list
// clang-format off
class ContentItemCollection;
class IStorageManagementModel;
struct ContentItem;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class StorageManagementViews {
public:
    // StorageManagementViews inner types declare
    // clang-format off
    struct ContentTab;
    // clang-format on

    // StorageManagementViews inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ContentTab {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::string_view>                                       prefix;
        ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<ContentItemCollection>>> view;
        ::ll::TypedStorage<1, 1, bool>                                                    expanded;
        // NOLINTEND

    public:
        // prevent constructor by default
        ContentTab();
    };

    using ConstContentItemPtr = std::shared_ptr<const ContentItem>;

    using ContentTabPtr = ::gsl::not_null<std::shared_ptr<StorageManagementViews::ContentTab>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<IStorageManagementModel>>> mModel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<StorageManagementViews::ContentTab>>       mWorldTab;
    ::ll::TypedStorage<8, 16, std::shared_ptr<StorageManagementViews::ContentTab>>       mWorldTemplateTab;
    ::ll::TypedStorage<8, 16, std::shared_ptr<StorageManagementViews::ContentTab>>       mResourceTab;
    ::ll::TypedStorage<8, 16, std::shared_ptr<StorageManagementViews::ContentTab>>       mBehaviorTab;
    ::ll::TypedStorage<8, 16, std::shared_ptr<StorageManagementViews::ContentTab>>       mSkinTab;
    ::ll::TypedStorage<8, 16, std::shared_ptr<StorageManagementViews::ContentTab>>       mCacheTab;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<ContentItemCollection>>>    mSelectedView;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<const ContentItem>>>           mSelectedItems;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageManagementViews();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ContentItemCollection& getSelectedView();

    MCNAPI std::array<gsl::not_null<std::shared_ptr<StorageManagementViews::ContentTab>>, 6> getTabs();

    MCNAPI ~StorageManagementViews();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ContentTab {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::string_view>                                         prefix;
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ContentItemCollection>>> view;
        ::ll::TypedStorage<1, 1, bool>                                                        expanded;
        // NOLINTEND
    };

    using ConstContentItemPtr = ::std::shared_ptr<::ContentItem const>;

    using ContentTabPtr = ::gsl::not_null<::std::shared_ptr<::StorageManagementViews::ContentTab>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::IStorageManagementModel>>> mModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StorageManagementViews::ContentTab>>       mWorldTab;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StorageManagementViews::ContentTab>>       mWorldTemplateTab;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StorageManagementViews::ContentTab>>       mResourceTab;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StorageManagementViews::ContentTab>>       mBehaviorTab;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StorageManagementViews::ContentTab>>       mSkinTab;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StorageManagementViews::ContentTab>>       mCacheTab;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ContentItemCollection>>>    mSelectedView;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ContentItem const>>>         mSelectedItems;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::std::shared_ptr<::ContentItem const>> getAndExpandSelectedItems() const;

    MCAPI ::ContentItemCollection& getSelectedView();

    MCAPI ::std::array<::gsl::not_null<::std::shared_ptr<::StorageManagementViews::ContentTab>>, 6> getTabs();
    // NOLINTEND
#else // @header-generator platform
    struct ContentTab {};
#endif // @header-generator platform
#endif // @header-generator platform
};
