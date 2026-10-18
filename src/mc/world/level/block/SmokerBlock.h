#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FurnaceBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class ItemInstance;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class SmokerBlock : public ::FurnaceBlock {
public:
    // prevent constructor by default
    SmokerBlock();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SmokerBlock();

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;
#else // @header-generator platform
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SmokerBlock(std::string const&, int, bool);
#else // @header-generator platform
    MCAPI SmokerBlock(::std::string const& nameId, int id, bool lit);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
#else // @header-generator platform
    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, int, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& nameId, int id, bool lit);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;
#else // @header-generator platform
    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;


#endif // @header-generator platform
    // NOLINTEND

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
