#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
struct MCRESULT;
#endif // @header-generator platform
// clang-format on

namespace CodeBuilder {

struct ErrorMessage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> requestId;
    ::ll::UntypedStorage<8, 16>            body;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk83c360;
    ::ll::UntypedStorage<8, 16> mUnk5ccd40;
    // NOLINTEND

public:
    // prevent constructor by default
    ErrorMessage& operator=(ErrorMessage const&);
    ErrorMessage(ErrorMessage const&);
    ErrorMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ErrorMessage(::std::string const& requestId, ::MCRESULT result);

    MCNAPI ErrorMessage(::std::string const& requestId, ::MCRESULT result, ::std::string const& message);

    MCNAPI ~ErrorMessage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& requestId, ::MCRESULT result);

    MCNAPI void* $ctor(::std::string const& requestId, ::MCRESULT result, ::std::string const& message);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace CodeBuilder
