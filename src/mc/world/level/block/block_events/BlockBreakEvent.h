#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockChangeContext.h"
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
// clang-format on

namespace BlockEvents {

class BlockBreakEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::BlockChangeContext> mDestructionContext;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::BlockChangeContext> mDestructionContext;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BlockSource&>        mRegion;
    ::ll::TypedStorage<8, 8, ::Block const&>        mDestroyedBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockBreakEvent& operator=(BlockBreakEvent const&);
    BlockBreakEvent(BlockBreakEvent const&);
    BlockBreakEvent();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockBreakEvent();

    virtual ::BlockSource const& getBlockSource() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockBreakEvent(::BlockChangeContext const&, ::BlockSource&, ::BlockPos const, ::Block const&);

    MCNAPI std::optional<BlockPos> const getBlockDestructionCausePosition() const;

    MCNAPI ::Actor const* getEntitySource() const;

    MCNAPI bool isClientSide() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockChangeContext const&, ::BlockSource&, ::BlockPos const, ::Block const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::BlockSource const& getBlockSource() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockSource const& $getBlockSource() const;
#else // @header-generator platform
    MCFOLD ::BlockSource const& $getBlockSource() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
