#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/OptionProperty.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

namespace OreUI {

class SafeZoneWarningScreenQuery : public ::OreUI::QueryBase<OreUI::SafeZoneWarningScreenQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mSafeZoneAll;
    ::ll::UntypedStorage<8, 104> mHasSetSafeZone;
    ::ll::UntypedStorage<8, 152> mSafeZoneXMin;
    ::ll::UntypedStorage<8, 152> mSafeZoneXMax;
    ::ll::UntypedStorage<8, 152> mSafeZoneYMin;
    ::ll::UntypedStorage<8, 152> mSafeZoneYMax;
    ::ll::UntypedStorage<8, 152> mSafeZoneAllMin;
    ::ll::UntypedStorage<8, 152> mSafeZoneAllMax;
    ::ll::UntypedStorage<8, 152> mDefaultSafeZoneScaleX;
    ::ll::UntypedStorage<8, 152> mDefaultSafeZoneScaleY;
    ::ll::UntypedStorage<8, 152> mNeedsSafeZoneAdjustment;
    // NOLINTEND
};

} // namespace OreUI
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
