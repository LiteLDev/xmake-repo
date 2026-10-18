#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class IFileReadAccess;
class IFileWriteAccess;
namespace Core { class PathView; }
// clang-format on

class IFileAccess : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IFileAccess() = default;
#else // @header-generator platform
    virtual ~IFileAccess() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void* fopen(::Core::PathView, std::string const&) = 0;
#else // @header-generator platform
    virtual void* fopen(::Core::PathView filePath, ::std::string const& mode) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int fclose(void*) = 0;
#else // @header-generator platform
    virtual int fclose(void* file) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int fseek(void*, long, int) = 0;
#else // @header-generator platform
    virtual int fseek(void* file, int64 offset, int origin) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual long ftell(void*) = 0;
#else // @header-generator platform
    virtual int64 ftell(void* file) = 0;
#endif // @header-generator platform

    virtual ::IFileReadAccess const* getReadInterface() const = 0;

    virtual ::IFileWriteAccess* getWriteInterface() = 0;

    virtual void unload() = 0;
    // NOLINTEND
};
