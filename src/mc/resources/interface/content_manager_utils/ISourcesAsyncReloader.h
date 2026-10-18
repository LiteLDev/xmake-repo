#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ContentManagerUtils {

#if defined(LL_PLAT_A) // @header-generator platform
class ISourcesAsyncReloader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISourcesAsyncReloader() = default;

    virtual ::Bedrock::Threading::Async<void> reloadSourcesAsync(bool) = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ISourcesAsyncReloader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISourcesAsyncReloader() = default;

    virtual ::Bedrock::Threading::Async<void> reloadSourcesAsync(bool saveSources) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ISourcesAsyncReloader {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ContentManagerUtils
