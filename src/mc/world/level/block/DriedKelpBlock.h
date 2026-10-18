#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Material;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class DriedKelpBlock : public ::BlockType {
#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    DriedKelpBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DriedKelpBlock();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DriedKelpBlock(std::string const&, int, ::Material const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::Material const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

#else // @header-generator platform
#endif // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
