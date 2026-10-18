#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/sdl/HeaderBannerComponent.h"
#include "mc/client/services/sdl/HeaderTimerComponent.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace SDL {

#if defined(LL_PLAT_A) // @header-generator platform
struct HeaderComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                  mHeaderText;
    ::ll::TypedStorage<8, 24, std::string>                  mSaleBeginsSoonHeaderText;
    ::ll::TypedStorage<8, 80, ::SDL::HeaderTimerComponent>  mTimerComp;
    ::ll::TypedStorage<8, 24, ::SDL::HeaderBannerComponent> mBannerComp;
    // NOLINTEND
};
#else // @header-generator platform
struct HeaderComponent {};
#endif // @header-generator platform

} // namespace SDL
