#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/server/commands/OverloadSyntaxInformation.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct OverloadSyntaxInformation;
// clang-format on
#endif // @header-generator platform

struct CommandSyntaxInformation {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                    isValid;
    ::ll::TypedStorage<8, 24, std::string>                            description;
    ::ll::TypedStorage<8, 24, std::vector<OverloadSyntaxInformation>> possibilities;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                        isValid;
    ::ll::TypedStorage<8, 32, ::std::string>                              description;
    ::ll::TypedStorage<8, 24, ::std::vector<::OverloadSyntaxInformation>> possibilities;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CommandSyntaxInformation();
#else // @header-generator platform
    MCAPI ~CommandSyntaxInformation();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
