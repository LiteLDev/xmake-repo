#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/sdl/HeaderBannerComponent.h"
#include "mc/client/services/sdl/HeaderTimerComponent.h"

namespace SDL {

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

} // namespace SDL
