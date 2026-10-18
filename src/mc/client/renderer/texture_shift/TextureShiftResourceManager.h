#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class AtlasItemManager;
namespace TextureShift { struct ShiftResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace TextureShift {

#if defined(LL_PLAT_A) // @header-generator platform
class TextureShiftResourceManager {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::weak_ptr<AtlasItemManager>> mAtlasItemManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<brstd::flat_map<std::string, TextureShift::ShiftResource, std::less<std::string>, std::vector<std::string>, std::vector<TextureShift::ShiftResource>>>>> mShiftResources;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class TextureShiftResourceManager {};
#endif // @header-generator platform

} // namespace TextureShift
