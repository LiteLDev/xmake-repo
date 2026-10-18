#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#include "mc/deps/script_core/runtime/scripting/InvalidArgumentErrorType.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting {

struct InvalidArgumentError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::Scripting::InvalidArgumentErrorType> type;
    ::ll::TypedStorage<4, 4, int>                                   index;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnkef90d9;
    ::ll::UntypedStorage<4, 4> mUnk90d964;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    InvalidArgumentError& operator=(InvalidArgumentError const&);
    InvalidArgumentError(InvalidArgumentError const&);
#endif // @header-generator platform
    InvalidArgumentError();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI InvalidArgumentError(std::string const&, int);
#else // @header-generator platform
    MCNAPI InvalidArgumentError(::std::string const& argTypeName, int index_);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI InvalidArgumentError(std::string const&, ::Scripting::InvalidArgumentErrorType, int);
#else // @header-generator platform
    MCNAPI
    InvalidArgumentError(::std::string const& argTypeName, ::Scripting::InvalidArgumentErrorType type_, int index_);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, int);
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string const& argTypeName, int index_);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, ::Scripting::InvalidArgumentErrorType, int);
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string const& argTypeName, ::Scripting::InvalidArgumentErrorType type_, int index_);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
