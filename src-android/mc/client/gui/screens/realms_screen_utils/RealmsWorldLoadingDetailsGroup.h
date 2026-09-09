#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/realms_screen_utils/RealmsSubscriptionsLoadingState.h"
#include "mc/client/network/realms/World.h"

// auto generated forward declare list
// clang-format off
namespace RealmsScreenUtils { struct RealmsWorldLoadingDetails; }
// clang-format on

namespace RealmsScreenUtils {

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

} // namespace RealmsScreenUtils
