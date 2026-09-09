#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class LightTexture;
namespace LightPropagation { class LightVolumeManager; }
// clang-format on

namespace EntityLightingUtils {

struct EnvironmentLightingContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource const*>                          blockSource;
    ::ll::TypedStorage<8, 8, ::LightTexture const*>                         lightTexture;
    ::ll::TypedStorage<8, 8, ::LightPropagation::LightVolumeManager const*> lightVolumeManager;
    ::ll::TypedStorage<1, 1, bool>                                          hasUpsideDownLight;
    // NOLINTEND
};

} // namespace EntityLightingUtils
