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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>             mName;
    ::ll::UntypedStorage<1, 1>                         mType;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ListTag>> mEnumValues;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>               mName;
    ::ll::TypedStorage<1, 1, ::Tag::Type>                  mType;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ListTag>> mEnumValues;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockStateDefinition(::BlockStateDefinition const&);
#else // @header-generator platform
    MCAPI void _copy(::BlockStateDefinition const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockStateDefinition& operator=(::BlockStateDefinition const&);

    MCNAPI ~BlockStateDefinition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockStateDefinition const&);
#else // @header-generator platform
    MCAPI ~BlockStateDefinition();
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
