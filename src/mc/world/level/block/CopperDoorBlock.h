#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CopperBlock.h"
#include "mc/world/level/block/DoorBlock.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Material;
struct CopperBlockSet;
#else // @header-generator platform
#endif // @header-generator platform
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class CopperDoorBlock : public ::CopperBlock<DoorBlock> {
public:
    // prevent constructor by default
    CopperDoorBlock();

#else // @header-generator platform
class CopperDoorBlock : public ::CopperBlock<::DoorBlock> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CopperDoorBlock();

    virtual void _useDoor(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CopperDoorBlock(std::string const&, int, ::CopperBlockSet const&, ::Material const&, ::DoorBlock::DoorType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::CopperBlockSet const&, ::Material const&, ::DoorBlock::DoorType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void _useDoor(::BlockEvents::BlockPlayerInteractEvent& eventData) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_useDoor(::BlockEvents::BlockPlayerInteractEvent&) const;
#else // @header-generator platform
    MCAPI void $_useDoor(::BlockEvents::BlockPlayerInteractEvent& eventData) const;


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
