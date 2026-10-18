#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/realms_screen_utils/RealmsSubscriptionsLoadingState.h"
#include "mc/client/world/RealmsWorldInfo.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/realms_screen_utils/RealmsSubscriptionsLoadingState.h"
#include "mc/client/world/RealmsWorldInfo.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace RealmsScreenUtils {

#if defined(LL_PLAT_A) // @header-generator platform
struct RealmsWorldLoadingDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 752>                                                   world;
    ::ll::TypedStorage<4, 4, ::RealmsScreenUtils::RealmsSubscriptionsLoadingState> loadingState;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct RealmsWorldLoadingDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 904, ::RealmsWorldInfo>                                  world;
    ::ll::TypedStorage<4, 4, ::RealmsScreenUtils::RealmsSubscriptionsLoadingState> loadingState;
    // NOLINTEND
};
#else // @header-generator platform
struct RealmsWorldLoadingDetails {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace RealmsScreenUtils
