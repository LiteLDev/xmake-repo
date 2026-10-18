#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/world/item/components/ICameraItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class CameraCallbacks;
#else // @header-generator platform
#endif // @header-generator platform
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
class Item;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStack;
class Player;
class Vec3;
namespace Json { class Value; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class CameraCallbacks;
#endif // @header-generator platform
// clang-format on

class CameraItemComponentLegacy : public ::ICameraItemComponent {
public:
    // CameraItemComponentLegacy inner types define
    enum class UseAction : uchar {
        None  = 0,
        Place = 1,
        Use   = 2,
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    using PlaceCallback = ::std::function<void(::Vec3 const&, ::Player&)>;

    using UseCallback = ::std::function<void(::Player&)>;

#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>              mPlacingTripodClientTick;
    ::ll::TypedStorage<8, 8, ulong>              mPlacingTripodServerTick;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>             mPlacingTripodClientTick;
    ::ll::TypedStorage<8, 8, uint64>             mPlacingTripodServerTick;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::CameraCallbacks*> mCallbacks;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    CameraItemComponentLegacy();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CameraItemComponentLegacy();
#else // @header-generator platform
    virtual ~CameraItemComponentLegacy() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float blackBarsDuration() const;
#else // @header-generator platform
    virtual void takePictureNow(::Player& player, ::Actor* camera, ::Actor* target) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float blackBarsScreenRatio() const;
#else // @header-generator platform
    virtual void use(::ItemStack& instance, ::Player& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float shutterScreenRatio() const;
#else // @header-generator platform
    virtual void releaseUsing(::ItemStack& instance, ::Player& player, int durationLeft) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float shutterDuration() const;
#else // @header-generator platform
    virtual bool
    useOn(::ItemStack& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face, ::Vec3 const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float pictureDuration() const;
#else // @header-generator platform
    virtual bool canPlace(::ItemStack const& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float slideAwayDuration() const;
#else // @header-generator platform
    virtual float blackBarsDuration() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canPlace(::ItemStack const&, ::Actor&, ::BlockPos const&, uchar) const;
#else // @header-generator platform
    virtual float blackBarsScreenRatio() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void takePictureNow(::Player&, ::Actor*, ::Actor*);
#else // @header-generator platform
    virtual float shutterScreenRatio() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerCallbacks(::CameraCallbacks*);
#else // @header-generator platform
    virtual float shutterDuration() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void use(::ItemStack&, ::Player&);
#else // @header-generator platform
    virtual float pictureDuration() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void releaseUsing(::ItemStack&, ::Player&, int);
#else // @header-generator platform
    virtual float slideAwayDuration() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool useOn(::ItemStack&, ::Actor&, ::BlockPos const&, uchar, ::Vec3 const&);
#else // @header-generator platform
    virtual void registerCallbacks(::CameraCallbacks* callbacks) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CameraItemComponentLegacy(::Item&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> buildNetworkTag() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CameraItemComponentLegacy::UseAction
    _tryPlace(::ItemStack const&, ::Actor&, ::BlockPos const&, uchar, ::Vec3&) const;

    MCNAPI std::unique_ptr<CompoundTag> buildNetworkTag() const;

    MCNAPI bool init(::Json::Value const&, ::MolangVersion);
#else // @header-generator platform
    MCAPI bool init(::Json::Value const& data, ::MolangVersion);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Json::Value initializeFromNetwork(::CompoundTag const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI static ::CameraItemComponentLegacy::UseAction
    _tryPlace(::ItemStack const& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face, ::Vec3& spawnPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Item&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::Json::Value initializeFromNetwork(::CompoundTag const& tag);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $blackBarsDuration() const;
#else // @header-generator platform
    MCAPI void $takePictureNow(::Player& player, ::Actor* camera, ::Actor* target);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $blackBarsScreenRatio() const;
#else // @header-generator platform
    MCAPI void $use(::ItemStack& instance, ::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $shutterScreenRatio() const;
#else // @header-generator platform
    MCAPI void $releaseUsing(::ItemStack& instance, ::Player& player, int durationLeft);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $shutterDuration() const;
#else // @header-generator platform
    MCAPI bool $useOn(::ItemStack& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face, ::Vec3 const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $pictureDuration() const;
#else // @header-generator platform
    MCAPI bool $canPlace(::ItemStack const& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $slideAwayDuration() const;
#else // @header-generator platform
    MCAPI float $blackBarsDuration() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canPlace(::ItemStack const&, ::Actor&, ::BlockPos const&, uchar) const;
#else // @header-generator platform
    MCFOLD float $blackBarsScreenRatio() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $takePictureNow(::Player&, ::Actor*, ::Actor*);
#else // @header-generator platform
    MCAPI float $shutterScreenRatio() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $registerCallbacks(::CameraCallbacks*);
#else // @header-generator platform
    MCAPI float $shutterDuration() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $use(::ItemStack&, ::Player&);
#else // @header-generator platform
    MCAPI float $pictureDuration() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $releaseUsing(::ItemStack&, ::Player&, int);
#else // @header-generator platform
    MCAPI float $slideAwayDuration() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $useOn(::ItemStack&, ::Actor&, ::BlockPos const&, uchar, ::Vec3 const&);
#else // @header-generator platform
    MCAPI void $registerCallbacks(::CameraCallbacks* callbacks);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
