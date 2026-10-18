#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Material;
// clang-format on
#else // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockType.h"
#endif // @header-generator platform

class NetherReactorBlock : public ::ActorBlock {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    NetherReactorBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetherReactorBlock();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetherReactorBlock(std::string const&, int, ::Material const&);
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

public:
#else // @header-generator platform
#endif // @header-generator platform
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
