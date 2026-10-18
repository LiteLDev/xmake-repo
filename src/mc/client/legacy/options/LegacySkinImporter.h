#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class SkinHandle;
class SkinPackCollectionModel;
// clang-format on

class LegacySkinImporter {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    beginDownloadSkinPack(::SkinHandle&, ::SkinPackCollectionModel&, std::function<void(SkinHandle)>);

    MCNAPI static std::optional<SkinHandle> getSkinHandleFromLegacyId(uint const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& DEFAULT_SKIN_ID_MASK();

    MCNAPI static uint const& DLC_SKIN_CHECK_MASK();

    MCNAPI static uint const& DLC_SKIN_ID_MASK();
    // NOLINTEND
};
#else // @header-generator platform
class LegacySkinImporter {};
#endif // @header-generator platform
