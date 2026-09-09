#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
