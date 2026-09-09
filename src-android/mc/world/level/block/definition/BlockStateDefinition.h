#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/Tag.h"

// auto generated forward declare list
// clang-format off
class ListTag;
// clang-format on

struct BlockStateDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>             mName;
    ::ll::UntypedStorage<1, 1>                         mType;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ListTag>> mEnumValues;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockStateDefinition(::BlockStateDefinition const&);

    MCNAPI ::BlockStateDefinition& operator=(::BlockStateDefinition const&);

    MCNAPI ~BlockStateDefinition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockStateDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
