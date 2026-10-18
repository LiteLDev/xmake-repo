#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/ExpressionNode.h"

struct NamedMolangScript {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>   mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>   mName;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mScript;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    NamedMolangScript& operator=(NamedMolangScript const&);
    NamedMolangScript();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~NamedMolangScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
