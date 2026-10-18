#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting {

struct ContainerSizeOutOfBoundsError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint> maxSize;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkea5a69;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ContainerSizeOutOfBoundsError& operator=(ContainerSizeOutOfBoundsError const&);
    ContainerSizeOutOfBoundsError(ContainerSizeOutOfBoundsError const&);
#endif // @header-generator platform
    ContainerSizeOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ContainerSizeOutOfBoundsError(std::string const&, uint);
#else // @header-generator platform
    MCNAPI ContainerSizeOutOfBoundsError(::std::string const& propertyName, uint maxSize_);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, uint);
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string const& propertyName, uint maxSize_);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
