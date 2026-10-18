#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/crash_manager/ICrashFileApi.h"
#include "mc/platform/Result.h"

namespace Bedrock {

class CrashFileApiImpl : public ::Bedrock::ICrashFileApi {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CrashFileApiImpl();
#else // @header-generator platform
    virtual ::std::string_view getSaveRoot() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string_view getSaveRoot() const;
#else // @header-generator platform
    virtual ::Bedrock::Result<void> createDirectory(char const* path) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> createDirectory(char const*);

    virtual ::Bedrock::Result<void, std::error_code> writeFile(char const*, char const*, ulong);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::Bedrock::Result<void> writeFile(char const* path, char const* buffer, uint64 bufferSize) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string_view $getSaveRoot() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::std::string_view $getSaveRoot() const;

    MCNAPI ::Bedrock::Result<void> $createDirectory(char const* path);

    MCNAPI ::Bedrock::Result<void> $writeFile(char const* path, char const* buffer, uint64 bufferSize);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $createDirectory(char const*);
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $writeFile(char const*, char const*, ulong);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
