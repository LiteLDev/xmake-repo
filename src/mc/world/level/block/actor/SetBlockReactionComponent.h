#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/LabTableReactionComponent.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class LabTableReaction;
// clang-format on

class SetBlockReactionComponent : public ::LabTableReactionComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<BlockPos>> mPos;
    ::ll::TypedStorage<8, 8, ::Block const&>            mBlock;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockPos>> mPos;
    ::ll::TypedStorage<8, 8, ::Block const&>                mBlock;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SetBlockReactionComponent& operator=(SetBlockReactionComponent const&);
    SetBlockReactionComponent(SetBlockReactionComponent const&);
    SetBlockReactionComponent();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SetBlockReactionComponent();
#else // @header-generator platform
    virtual ~SetBlockReactionComponent() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onEnd(::LabTableReaction&, ::BlockSource&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void _onEnd(::LabTableReaction& owner, ::BlockSource& region) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onEnd(::LabTableReaction&, ::BlockSource&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $_onEnd(::LabTableReaction& owner, ::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
