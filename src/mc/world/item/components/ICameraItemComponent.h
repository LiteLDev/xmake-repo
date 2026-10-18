#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class CameraCallbacks;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStack;
class Player;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class CameraCallbacks;
#endif // @header-generator platform
// clang-format on

class ICameraItemComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICameraItemComponent() = default;

    virtual float blackBarsDuration() const = 0;

    virtual float blackBarsScreenRatio() const = 0;

    virtual float shutterScreenRatio() const = 0;

    virtual float shutterDuration() const = 0;

    virtual float pictureDuration() const = 0;

    virtual float slideAwayDuration() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canPlace(::ItemStack const&, ::Actor&, ::BlockPos const&, uchar) const = 0;
#else // @header-generator platform
    virtual bool
    canPlace(::ItemStack const& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void takePictureNow(::Player&, ::Actor*, ::Actor*) = 0;
#else // @header-generator platform
    virtual void takePictureNow(::Player& player, ::Actor* camera, ::Actor* target) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerCallbacks(::CameraCallbacks*) = 0;
#else // @header-generator platform
    virtual void registerCallbacks(::CameraCallbacks* callbacks) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void use(::ItemStack&, ::Player&) = 0;
#else // @header-generator platform
    virtual void use(::ItemStack& instance, ::Player& player) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void releaseUsing(::ItemStack&, ::Player&, int) = 0;
#else // @header-generator platform
    virtual void releaseUsing(::ItemStack& instance, ::Player& player, int durationLeft) = 0;
#endif // @header-generator platform

    virtual bool useOn(::ItemStack&, ::Actor&, ::BlockPos const&, uchar, ::Vec3 const&) = 0;
    // NOLINTEND
};
