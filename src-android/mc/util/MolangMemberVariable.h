#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
struct MolangScriptArg;
// clang-format on

struct MolangMemberVariable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString> mName;
    ::ll::UntypedStorage<8, 88>               mData;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangMemberVariable();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MolangMemberVariable();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
