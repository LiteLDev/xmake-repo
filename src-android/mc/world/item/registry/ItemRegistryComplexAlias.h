#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

struct ItemRegistryComplexAlias {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                                        mCallback;
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<const HashedString>>> mSplitNames;
    ::ll::TypedStorage<1, 1, bool>                                                     allowCommands;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemRegistryComplexAlias(ItemRegistryComplexAlias const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ItemRegistryComplexAlias();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
