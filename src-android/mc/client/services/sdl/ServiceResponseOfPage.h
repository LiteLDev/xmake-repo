#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/sdl/Page.h"

namespace SDL {

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

} // namespace SDL
