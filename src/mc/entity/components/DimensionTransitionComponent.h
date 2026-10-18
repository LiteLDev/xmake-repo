#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/block/PortalAxis.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

struct DimensionTransitionComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>              mPortalEntrancePosition;
    ::ll::TypedStorage<4, 4, ::DimensionType>      mPortalEntranceDimension;
    ::ll::TypedStorage<4, 4, ::PortalAxis>         mPortalEntranceAxis;
    ::ll::TypedStorage<4, 16, std::optional<Vec3>> mExisitingTargetPosition;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>                  mPortalEntrancePosition;
    ::ll::TypedStorage<4, 4, ::DimensionType>          mPortalEntranceDimension;
    ::ll::TypedStorage<4, 4, ::PortalAxis>             mPortalEntranceAxis;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mExisitingTargetPosition;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& AXIS_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& AXIS_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& COMPONENT_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& COMPONENT_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DIMENSION_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& DIMENSION_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& POSITION_X_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& POSITION_X_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& POSITION_Y_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& POSITION_Y_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& POSITION_Z_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& POSITION_Z_TAG();
#endif // @header-generator platform
    // NOLINTEND
};
