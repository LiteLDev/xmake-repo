#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/HopperCallbacks.h"
#else // @header-generator platform
#include "mc/world/actor/HopperCallbacks.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
class Container;
class ItemActor;
class ItemStack;
class Vec3;
// clang-format on

class Hopper {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                mCooldownTime;
    ::ll::TypedStorage<4, 4, int>                mMoveCooldownTime;
    ::ll::TypedStorage<1, 1, bool>               mTransferedFromChestMinecart;
    ::ll::TypedStorage<1, 1, bool>               mIsEntity;
    ::ll::TypedStorage<4, 4, int>                mMoveItemSpeed;
    ::ll::TypedStorage<8, 96, ::HopperCallbacks> mCallbacks;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                 mCooldownTime;
    ::ll::TypedStorage<4, 4, int>                 mMoveCooldownTime;
    ::ll::TypedStorage<1, 1, bool>                mTransferedFromChestMinecart;
    ::ll::TypedStorage<1, 1, bool>                mIsEntity;
    ::ll::TypedStorage<4, 4, int>                 mMoveItemSpeed;
    ::ll::TypedStorage<8, 128, ::HopperCallbacks> mCallbacks;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    Hopper& operator=(Hopper const&);
    Hopper();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Hopper(int, bool);
#else // @header-generator platform
    MCAPI ::std::vector<::Container*>
    _getAttachedContainers(::BlockSource& region, ::Vec3 const& pos, int attachedFace);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container* _getAttachedContainerInBlock(::BlockSource&, ::Vec3 const&, int);
#else // @header-generator platform
    MCAPI ::Container* _getContainerInBlock(::BlockSource& region, ::Vec3 const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<Container*> _getAttachedContainers(::BlockSource&, ::Vec3 const&, int);
#else // @header-generator platform
    MCAPI ::std::vector<::Container*> _getContainersAt(::BlockSource& region, ::Vec3 const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container* _getContainerInBlock(::BlockSource&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI bool
    _pushOutItems(::BlockSource& region, ::Container& fromContainer, ::Vec3 const& position, int attachedFace);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<Container*> _getContainersAt(::BlockSource&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI bool _tryAddItemsFromPos(::BlockSource& region, ::Container& toContainer, ::Vec3 const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<Container*> _getSourceContainers(::BlockSource&, ::Vec3 const&);

    MCNAPI bool _pushOutItems(::BlockSource&, ::Container&, ::Vec3 const&, int);

    MCNAPI bool _tryAddItemsFromPos(::BlockSource&, ::Container&, ::Vec3 const&);

    MCNAPI bool _tryMoveInItem(
        ::BlockSource&,
        ::Container&,
        std::optional<std::reference_wrapper<ItemActor>> const&,
        ::ItemStack&,
        int,
        int,
        int
#else // @header-generator platform
    MCAPI bool _tryMoveInItem(
        ::BlockSource&                                                region,
        ::Container&                                                  container,
        ::std::optional<::std::reference_wrapper<::ItemActor>> const& itemActor,
        ::ItemStack&                                                  item,
        int                                                           slot,
        int                                                           face,
        int                                                           itemCount
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _tryMoveItems(::BlockSource&, ::Container&, ::Vec3 const&, int, bool);
#else // @header-generator platform
    MCAPI bool _tryMoveItems(
        ::BlockSource& region,
        ::Container&   fromContainer,
        ::Vec3 const&  pos,
        int            attachedFace,
        bool           canPushItems
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _tryMoveItems(::HopperCallbacks, ::BlockSource&, ::Container&, ::Vec3 const&, int, bool);
#else // @header-generator platform
    MCAPI bool _tryMoveItems(
        ::HopperCallbacks callbacks,
        ::BlockSource&    region,
        ::Container&      fromContainer,
        ::Vec3 const&     pos,
        int               attachedFace,
        bool              canPushItems
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _tryPullInItemsFromAboveContainer(::BlockSource&, ::Container&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI bool _tryPullInItemsFromAboveContainer(::BlockSource& region, ::Container& toContainer, ::Vec3 const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _tryPullInItemsFromWorld(::BlockSource&, ::Container&, ::Vec3 const&);

    MCNAPI int getCooldownTime() const;

    MCNAPI bool isOnCooldown() const;

    MCNAPI bool isOnMoveCooldown() const;

    MCNAPI void setCooldownTime(int);

    MCNAPI void setMoveCooldownTime(int);

    MCNAPI ~Hopper();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Vec3 const& HOPPER_PULL_IN_RECESS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI bool _tryPullInItemsFromWorld(::BlockSource& region, ::Container& toContainer, ::Vec3 const& pos);
#endif // @header-generator platform
    // NOLINTEND
};
