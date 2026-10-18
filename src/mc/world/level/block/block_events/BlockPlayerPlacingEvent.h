#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockCancellableEventBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
class Item;
#if defined(LL_PLAT_A) // @header-generator platform
class RenderParams;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace BlockEvents {

class BlockPlayerPlacingEvent : public ::BlockEvents::BlockCancellableEventBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BlockSource&>                mRegion;
    ::ll::TypedStorage<8, 8, ::Actor&>                      mActor;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>> mPermutationToPlace;
    ::ll::TypedStorage<8, 8, ::Item const&>                 mItem;
    ::ll::TypedStorage<1, 1, uchar const>                   mFace;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::BlockSource&>                  mRegion;
    ::ll::TypedStorage<8, 8, ::Actor&>                        mActor;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Block const*>> mPermutationToPlace;
    ::ll::TypedStorage<8, 8, ::Item const&>                   mItem;
    ::ll::TypedStorage<1, 1, uchar const>                     mFace;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPlayerPlacingEvent& operator=(BlockPlayerPlacingEvent const&);
    BlockPlayerPlacingEvent(BlockPlayerPlacingEvent const&);
    BlockPlayerPlacingEvent();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockPlayerPlacingEvent();

    virtual ::BlockSource const& getBlockSource() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockPlayerPlacingEvent(
        ::BlockSource&,
        ::BlockPos const,
        ::Actor&,
        uchar const,
        ::gsl::not_null<const Block*>,
        ::Item const&
    );

    MCNAPI void configureRenderParamsForTrigger(::RenderParams&);

    MCNAPI ::Actor const& getActor() const;

    MCNAPI ::Item const& getItemUsed() const;

    MCNAPI ::Block const& getPermutationToPlace() const;

    MCNAPI bool isClientSide() const;

    MCNAPI void setPermutationToPlace(::Block const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::BlockSource&, ::BlockPos const, ::Actor&, uchar const, ::gsl::not_null<const Block*>, ::Item const&);
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
