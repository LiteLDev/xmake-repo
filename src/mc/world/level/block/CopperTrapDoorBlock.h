#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CopperBlock.h"
#include "mc/world/level/block/TrapDoorBlock.h"

// auto generated forward declare list
// clang-format off
class Experiments;
#if defined(LL_PLAT_A) // @header-generator platform
class Material;
struct CopperBlockSet;
#else // @header-generator platform
#endif // @header-generator platform
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class CopperTrapDoorBlock : public ::CopperBlock<TrapDoorBlock> {
public:
    // prevent constructor by default
    CopperTrapDoorBlock();

#else // @header-generator platform
class CopperTrapDoorBlock : public ::CopperBlock<::TrapDoorBlock> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CopperTrapDoorBlock();
#else // @header-generator platform
    virtual void _useTrapDoor(::BlockEvents::BlockPlayerInteractEvent& eventData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _addHardCodedBlockComponents(::Experiments const&);

    virtual void _useTrapDoor(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CopperTrapDoorBlock(std::string const&, int, ::CopperBlockSet const&, ::Material const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::CopperBlockSet const&, ::Material const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
#else // @header-generator platform
    MCAPI void $_useTrapDoor(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_useTrapDoor(::BlockEvents::BlockPlayerInteractEvent&) const;
#else // @header-generator platform
    MCAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);


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
