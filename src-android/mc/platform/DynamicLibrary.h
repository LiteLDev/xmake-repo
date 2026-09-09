#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Bedrock {

class DynamicLibrary : public ::std::enable_shared_from_this<Bedrock::DynamicLibrary> {
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

        virtual ::Bedrock::Result<void*, std::error_code> loadLibrary(std::string const&) = 0;

        virtual ::Bedrock::Result<void*, std::error_code> loadFunction(void*, char const*) = 0;

        virtual ::Bedrock::Result<void, std::error_code> freeLibrary(void*) = 0;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::DynamicLibrary::Impl>> mImpl;
    ::ll::TypedStorage<8, 8, void*>                                          mLibrary;
    ::ll::TypedStorage<8, 24, std::string const>                             mLibraryName;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicLibrary();
};

} // namespace Bedrock
