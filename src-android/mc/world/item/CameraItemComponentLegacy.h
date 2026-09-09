#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/world/item/components/ICameraItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CameraCallbacks;
class CompoundTag;
class Item;
class ItemStack;
class Player;
class Vec3;
namespace Json { class Value; }
// clang-format on

class CameraItemComponentLegacy : public ::ICameraItemComponent {
public:
    // CameraItemComponentLegacy inner types define
    enum class UseAction : uchar {
        None  = 0,
        Place = 1,
        Use   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>              mBlackBarsDuration;
    ::ll::TypedStorage<4, 4, float>              mBlackBarsScreenRatio;
    ::ll::TypedStorage<4, 4, float>              mShutterScreenRatio;
    ::ll::TypedStorage<4, 4, float>              mShutterDuration;
    ::ll::TypedStorage<4, 4, float>              mPictureDuration;
    ::ll::TypedStorage<4, 4, float>              mSlideAwayDuration;
    ::ll::TypedStorage<1, 1, bool>               mPlacingTripod;
    ::ll::TypedStorage<8, 8, ulong>              mPlacingTripodClientTick;
    ::ll::TypedStorage<8, 8, ulong>              mPlacingTripodServerTick;
    ::ll::TypedStorage<8, 8, ::CameraCallbacks*> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraItemComponentLegacy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CameraItemComponentLegacy();

    virtual float blackBarsDuration() const;

    virtual float blackBarsScreenRatio() const;

    virtual float shutterScreenRatio() const;

    virtual float shutterDuration() const;

    virtual float pictureDuration() const;

    virtual float slideAwayDuration() const;

    virtual bool canPlace(::ItemStack const&, ::Actor&, ::BlockPos const&, uchar) const;

    virtual void takePictureNow(::Player&, ::Actor*, ::Actor*);

    virtual void registerCallbacks(::CameraCallbacks*);

    virtual void use(::ItemStack&, ::Player&);

    virtual void releaseUsing(::ItemStack&, ::Player&, int);

    virtual bool useOn(::ItemStack&, ::Actor&, ::BlockPos const&, uchar, ::Vec3 const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CameraItemComponentLegacy(::Item&);

    MCNAPI ::CameraItemComponentLegacy::UseAction
    _tryPlace(::ItemStack const&, ::Actor&, ::BlockPos const&, uchar, ::Vec3&) const;

    MCNAPI std::unique_ptr<CompoundTag> buildNetworkTag() const;

    MCNAPI bool init(::Json::Value const&, ::MolangVersion);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Json::Value initializeFromNetwork(::CompoundTag const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Item&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $blackBarsDuration() const;

    MCNAPI float $blackBarsScreenRatio() const;

    MCNAPI float $shutterScreenRatio() const;

    MCNAPI float $shutterDuration() const;

    MCNAPI float $pictureDuration() const;

    MCNAPI float $slideAwayDuration() const;

    MCNAPI bool $canPlace(::ItemStack const&, ::Actor&, ::BlockPos const&, uchar) const;

    MCNAPI void $takePictureNow(::Player&, ::Actor*, ::Actor*);

    MCNAPI void $registerCallbacks(::CameraCallbacks*);

    MCNAPI void $use(::ItemStack&, ::Player&);

    MCNAPI void $releaseUsing(::ItemStack&, ::Player&, int);

    MCNAPI bool $useOn(::ItemStack&, ::Actor&, ::BlockPos const&, uchar, ::Vec3 const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
