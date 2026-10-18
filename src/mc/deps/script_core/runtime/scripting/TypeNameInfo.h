#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct TypeNameInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mBindingName;
    ::ll::TypedStorage<8, 24, std::string> mTypeName;
    ::ll::TypedStorage<1, 1, bool>         mIsBound;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk76b434;
    ::ll::UntypedStorage<8, 32> mUnkfb71c2;
    ::ll::UntypedStorage<1, 1>  mUnk8b3241;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TypeNameInfo& operator=(TypeNameInfo const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TypeNameInfo(TypeNameInfo const&);
#endif // @header-generator platform
    TypeNameInfo();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TypeNameInfo(std::string, std::string, bool);

    MCNAPI ~TypeNameInfo();
#else // @header-generator platform
    MCNAPI TypeNameInfo(::std::string bindingName, ::std::string typeName, bool bound);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string, std::string, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string bindingName, ::std::string typeName, bool bound);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
