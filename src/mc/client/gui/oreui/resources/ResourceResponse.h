#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Gameface { class UserImageData; }
namespace cohtml { class IAsyncResourceResponse; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cohtml { class IAsyncResourceResponse; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Gameface {

#if defined(LL_PLAT_A) // @header-generator platform
class ResourceResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::IAsyncResourceResponse*> mResponse;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourceResponse();

    MCNAPI void fail();

    MCNAPI void* getSpace(ulong);

    MCNAPI void receiveUserImage(::Gameface::UserImageData const&);

    MCNAPI void setHeader(char const*, char const*);

    MCNAPI void setStatus(ushort);

    MCNAPI void succeed();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ResourceResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::IAsyncResourceResponse*> mResponse;
    // NOLINTEND
};
#else // @header-generator platform
class ResourceResponse {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Gameface
