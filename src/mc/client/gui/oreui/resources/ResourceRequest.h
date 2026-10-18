#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/resources/RequestResourceRange.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/resources/RequestResourceRange.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class IAsyncResourceRequest; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Gameface {

#if defined(LL_PLAT_A) // @header-generator platform
struct ResourceRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                   mUrl;
    ::ll::TypedStorage<8, 24, std::string>                                   mAbsoluteUrl;
    ::ll::TypedStorage<8, 32, std::optional<Gameface::RequestResourceRange>> mRange;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                      mFallbackUrls;
    ::ll::TypedStorage<4, 4, uint>                                           mRequestId;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ResourceRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                     mUrl;
    ::ll::TypedStorage<8, 32, ::std::string>                                     mAbsoluteUrl;
    ::ll::TypedStorage<8, 32, ::std::optional<::Gameface::RequestResourceRange>> mRange;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                      mFallbackUrls;
    ::ll::TypedStorage<4, 4, uint>                                               mRequestId;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ResourceRequest(::cohtml::IAsyncResourceRequest const& request);

    MCAPI ~ResourceRequest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cohtml::IAsyncResourceRequest const& request);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ResourceRequest {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Gameface
