#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
// clang-format on

namespace BlockEvents {

class BlockStateChangeEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&> mPreviousBlock;
    ::ll::TypedStorage<8, 8, ::BlockSource&> mRegion;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockStateChangeEvent& operator=(BlockStateChangeEvent const&);
    BlockStateChangeEvent(BlockStateChangeEvent const&);
    BlockStateChangeEvent();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockStateChangeEvent();

    virtual ::BlockSource const& getBlockSource() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockStateChangeEvent(::BlockSource&, ::BlockPos const, ::Block const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource&, ::BlockPos const, ::Block const&);
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
