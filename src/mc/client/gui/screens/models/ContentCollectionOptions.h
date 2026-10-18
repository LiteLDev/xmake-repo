#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ContentItemCollection;
class IVersionedContentItemCollection;
struct ContentItem;
// clang-format on

struct ContentCollectionOptions {
public:
    // ContentCollectionOptions inner types define
    using FilterPredicate = ::brstd::move_only_function<bool(const ContentItem&)>;

    using SortPredicate = bool (*)(::ContentItem const&, ::ContentItem const&);

    using OnReload = ::brstd::move_only_function<void(ContentItemCollection&)>;

    using ViewSource = std::shared_ptr<const IVersionedContentItemCollection>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mFilter;
    ::ll::UntypedStorage<8, 16> mSort;
    ::ll::UntypedStorage<8, 64> mOnReload;
    ::ll::UntypedStorage<8, 32> mViewSource;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ContentCollectionOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ContentItemCollection;
class IVersionedContentItemCollection;
struct ContentItem;
// clang-format on

struct ContentCollectionOptions {
public:
    // ContentCollectionOptions inner types define
    using OnReload = ::brstd::move_only_function<void(::ContentItemCollection&)>;

    using SortPredicate = bool (*)(::ContentItem const&, ::ContentItem const&);

    using FilterPredicate = ::brstd::move_only_function<bool(::ContentItem const&)>;

    using ViewSource = ::std::shared_ptr<::IVersionedContentItemCollection const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<bool(::ContentItem const&)>>                   mFilter;
    ::ll::TypedStorage<8, 8, bool (*)(::ContentItem const&, ::ContentItem const&)>                       mSort;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void(::ContentItemCollection&)>>               mOnReload;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::IVersionedContentItemCollection const>>> mViewSource;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ContentCollectionOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ContentCollectionOptions {};
#endif // @header-generator platform
#endif // @header-generator platform
