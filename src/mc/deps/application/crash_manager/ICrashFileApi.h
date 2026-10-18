#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Bedrock {

class ICrashFileApi {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ICrashFileApi();
#else // @header-generator platform
    virtual ~ICrashFileApi() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string_view getSaveRoot() const = 0;
#else // @header-generator platform
    virtual ::std::string_view getSaveRoot() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> createDirectory(char const*) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<void> createDirectory(char const* path) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> writeFile(char const*, char const*, ulong) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::Bedrock::Result<void> writeFile(char const* path, char const* buffer, uint64 bufferSize) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
