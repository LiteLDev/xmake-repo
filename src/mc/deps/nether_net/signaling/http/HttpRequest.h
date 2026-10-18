#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct HttpRequest {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> method;
    ::ll::TypedStorage<8, 24, std::string> path;
    ::ll::TypedStorage<8, 24, std::string> body;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk3d3861;
    ::ll::UntypedStorage<8, 32> mUnkb54873;
    ::ll::UntypedStorage<8, 32> mUnk6c2505;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    HttpRequest& operator=(HttpRequest const&);
    HttpRequest(HttpRequest const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~HttpRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    HttpRequest();
#endif // @header-generator platform
};

} // namespace NetherNet
