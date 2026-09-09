#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/HopperCallbacks.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
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
    ::ll::TypedStorage<4, 4, int>                mCooldownTime;
    ::ll::TypedStorage<4, 4, int>                mMoveCooldownTime;
    ::ll::TypedStorage<1, 1, bool>               mTransferedFromChestMinecart;
    ::ll::TypedStorage<1, 1, bool>               mIsEntity;
    ::ll::TypedStorage<4, 4, int>                mMoveItemSpeed;
    ::ll::TypedStorage<8, 96, ::HopperCallbacks> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    Hopper& operator=(Hopper const&);
    Hopper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Hopper(int, bool);

    MCNAPI ::Container* _getAttachedContainerInBlock(::BlockSource&, ::Vec3 const&, int);

    MCNAPI std::vector<Container*> _getAttachedContainers(::BlockSource&, ::Vec3 const&, int);

    MCNAPI ::Container* _getContainerInBlock(::BlockSource&, ::Vec3 const&);

    MCNAPI std::vector<Container*> _getContainersAt(::BlockSource&, ::Vec3 const&);

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
    );

    MCNAPI bool _tryMoveItems(::BlockSource&, ::Container&, ::Vec3 const&, int, bool);

    MCNAPI bool _tryMoveItems(::HopperCallbacks, ::BlockSource&, ::Container&, ::Vec3 const&, int, bool);

    MCNAPI bool _tryPullInItemsFromAboveContainer(::BlockSource&, ::Container&, ::Vec3 const&);

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
    // NOLINTEND
};
