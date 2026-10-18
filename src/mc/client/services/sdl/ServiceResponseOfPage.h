#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/sdl/Page.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace SDL {

#if defined(LL_PLAT_A) // @header-generator platform
struct ServiceResponseOfPage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 184, ::SDL::Page> mResult;
    ::ll::TypedStorage<8, 24, std::string>  mContinuationToken;
    ::ll::TypedStorage<4, 4, int>           mRequestSize;
    ::ll::TypedStorage<4, 4, int>           mResponseSize;
    // NOLINTEND
};
#else // @header-generator platform
struct ServiceResponseOfPage {};
#endif // @header-generator platform

} // namespace SDL
