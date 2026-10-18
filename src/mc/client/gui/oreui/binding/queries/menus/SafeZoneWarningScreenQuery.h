#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/OptionProperty.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class SafeZoneWarningScreenQuery : public ::OreUI::QueryBase<::OreUI::SafeZoneWarningScreenQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::OreUI::OptionProperty<float>> mSafeZoneAll;
    ::ll::TypedStorage<8, 120, ::OreUI::OptionProperty<bool>>  mHasSetSafeZone;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<float>>       mSafeZoneXMin;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<float>>       mSafeZoneXMax;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<float>>       mSafeZoneYMin;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<float>>       mSafeZoneYMax;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<float>>       mSafeZoneAllMin;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<float>>       mSafeZoneAllMax;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<float>>       mDefaultSafeZoneScaleX;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<float>>       mDefaultSafeZoneScaleY;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>        mNeedsSafeZoneAdjustment;
    // NOLINTEND

public:
    // prevent constructor by default
    SafeZoneWarningScreenQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SafeZoneWarningScreenQuery(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);
    // NOLINTEND
};
#else // @header-generator platform
class SafeZoneWarningScreenQuery {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
