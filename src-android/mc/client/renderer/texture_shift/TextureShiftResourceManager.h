#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class AtlasItemManager;
namespace TextureShift { struct ShiftResource; }
// clang-format on

namespace TextureShift {

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

} // namespace TextureShift
