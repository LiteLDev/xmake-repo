#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
struct IApi {};
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/ApiId.h"

struct IApi {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual uint AddRef() = 0;

    virtual uint Release() = 0;

    virtual HRESULT QueryApi(::ApiId id, void** ptr) = 0;
    // NOLINTEND
};
#endif // @header-generator platform
#endif // @header-generator platform
