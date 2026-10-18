#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on
#endif // @header-generator platform

struct ItemRegistryComplexAlias {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>                                                        mCallback;
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<const HashedString>>> mSplitNames;
    ::ll::TypedStorage<1, 1, bool>                                                     allowCommands;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::function<::HashedString(short)>>                        mCallback;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::HashedString const>>> mSplitNames;
    ::ll::TypedStorage<1, 1, bool>                                                           allowCommands;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ItemRegistryComplexAlias(ItemRegistryComplexAlias const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ItemRegistryComplexAlias();
#else // @header-generator platform
    MCAPI ~ItemRegistryComplexAlias();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
