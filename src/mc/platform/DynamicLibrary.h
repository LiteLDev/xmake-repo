#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Bedrock {

#if defined(LL_PLAT_A) // @header-generator platform
class DynamicLibrary : public ::std::enable_shared_from_this<Bedrock::DynamicLibrary> {
#else // @header-generator platform
class DynamicLibrary : public ::std::enable_shared_from_this<::Bedrock::DynamicLibrary> {
#endif // @header-generator platform
public:
    // DynamicLibrary inner types declare
    // clang-format off
    class Impl;
    // clang-format on

    // DynamicLibrary inner types define
    class Impl {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Impl() = default;

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ::Bedrock::Result<void*, std::error_code> loadLibrary(std::string const&) = 0;
#else // @header-generator platform
        virtual ::Bedrock::Result<void*> loadLibrary(::std::string const&) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ::Bedrock::Result<void*, std::error_code> loadFunction(void*, char const*) = 0;
#else // @header-generator platform
        virtual ::Bedrock::Result<void*> loadFunction(void*, char const*) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ::Bedrock::Result<void, std::error_code> freeLibrary(void*) = 0;
#else // @header-generator platform
        virtual ::Bedrock::Result<void> freeLibrary(void*) = 0;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::DynamicLibrary::Impl>> mImpl;
    ::ll::TypedStorage<8, 8, void*>                                          mLibrary;
    ::ll::TypedStorage<8, 24, std::string const>                             mLibraryName;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk51eb01;
    ::ll::UntypedStorage<8, 8>  mUnk83ce55;
    ::ll::UntypedStorage<8, 32> mUnk2702eb;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DynamicLibrary& operator=(DynamicLibrary const&);
    DynamicLibrary(DynamicLibrary const&);
#endif // @header-generator platform
    DynamicLibrary();
};

} // namespace Bedrock
