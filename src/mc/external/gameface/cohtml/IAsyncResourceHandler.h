#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cohtml { class IAsyncResourceRequest; }
namespace cohtml { class IAsyncResourceResponse; }
namespace cohtml { class IAsyncResourceStreamResponse; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
class IAsyncResourceHandler {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IAsyncResourceHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAsyncResourceHandler() = default;

    virtual void
    OnResourceRequest(::cohtml::IAsyncResourceRequest const* request, ::cohtml::IAsyncResourceResponse* response) = 0;

    virtual void OnResourceStreamRequest(
        ::cohtml::IAsyncResourceRequest const*  request,
        ::cohtml::IAsyncResourceStreamResponse* response
    ) = 0;

    virtual void OnAbortResourceRequest(uint) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IAsyncResourceHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
