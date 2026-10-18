#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/realms_screen_utils/RealmsSubscriptionsLoadingState.h"
#include "mc/client/network/realms/World.h"

// auto generated forward declare list
// clang-format off
namespace RealmsScreenUtils { struct RealmsWorldLoadingDetails; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/realms_screen_utils/RealmsSubscriptionsLoadingState.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct World; }
namespace RealmsScreenUtils { struct RealmsWorldLoadingDetails; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace RealmsScreenUtils {

#if defined(LL_PLAT_A) // @header-generator platform
struct RealmsWorldLoadingDetailsGroup {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<std::vector<RealmsScreenUtils::RealmsWorldLoadingDetails>>> mRealmWorldLoadingDetailsList;
    ::ll::TypedStorage<8, 24, std::vector<Realms::World>> mRealmWorldList;
    ::ll::TypedStorage<4, 4, ::RealmsScreenUtils::RealmsSubscriptionsLoadingState> mInitialLoadingState;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct RealmsWorldLoadingDetailsGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::vector<::RealmsScreenUtils::RealmsWorldLoadingDetails>>>
                                                                                   mRealmWorldLoadingDetailsList;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::World>>                      mRealmWorldList;
    ::ll::TypedStorage<4, 4, ::RealmsScreenUtils::RealmsSubscriptionsLoadingState> mInitialLoadingState;
    // NOLINTEND
};
#else // @header-generator platform
struct RealmsWorldLoadingDetailsGroup {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace RealmsScreenUtils
