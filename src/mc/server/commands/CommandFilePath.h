#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandFilePath {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mText;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandFilePath();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mText;
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::CommandFilePath>();
// clang-format on
#endif // @header-generator platform
