#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/PackListType.h"

// auto generated forward declare list
// clang-format off
struct PackContentItem;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/PackListType.h"

// auto generated forward declare list
// clang-format off
struct PackContentItem;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
struct PendingPackRemoval {
public:
    // PendingPackRemoval inner types define
    using PackItemContentPtr = std::shared_ptr<const PackContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<const PackContentItem>>> mContentToMove;
    ::ll::TypedStorage<4, 4, ::PackListType>                                       mToPackList;
    ::ll::TypedStorage<8, 16, std::shared_ptr<const PackContentItem>>              mPackItem;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingPackRemoval& operator=(PendingPackRemoval const&);
    PendingPackRemoval(PendingPackRemoval const&);
    PendingPackRemoval();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PendingPackRemoval();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PendingPackRemoval {
public:
    // PendingPackRemoval inner types define
    using PackItemContentPtr = ::std::shared_ptr<::PackContentItem const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PackContentItem const>>> mContentToMove;
    ::ll::TypedStorage<4, 4, ::PackListType>                                             mToPackList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PackContentItem const>>                mPackItem;
    // NOLINTEND
};
#else // @header-generator platform
struct PendingPackRemoval {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
