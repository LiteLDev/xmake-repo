#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class LodestoneBlockActor;
class Material;
// clang-format on
#else // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockType.h"
#endif // @header-generator platform

class LodestoneBlock : public ::ActorBlock {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    LodestoneBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LodestoneBlock();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LodestoneBlock(std::string const&, int, ::Material const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::LodestoneBlockActor* getBlockActor(::BlockSource&, ::BlockPos const&);
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
