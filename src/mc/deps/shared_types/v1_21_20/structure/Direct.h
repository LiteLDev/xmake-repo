#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/util/Reference.h"

namespace SharedTypes::v1_21_20::PoolAliases {

struct Direct {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mAlias;
    ::ll::UntypedStorage<8, 24>            mTarget;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                mAlias;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<15>> mTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    Direct& operator=(Direct const&);
    Direct();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Direct(::SharedTypes::v1_21_20::PoolAliases::Direct const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::v1_21_20::PoolAliases::Direct const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::PoolAliases
