#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

namespace OreUI {

struct GameVersionObject : public ::OreUI::PropertyObject<OreUI::GameVersionObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mMajor;
    ::ll::UntypedStorage<8, 152> mMinor;
    ::ll::UntypedStorage<8, 152> mPatch;
    ::ll::UntypedStorage<8, 152> mRevision;
    ::ll::UntypedStorage<8, 152> mIsBeta;
    // NOLINTEND
};

} // namespace OreUI
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
