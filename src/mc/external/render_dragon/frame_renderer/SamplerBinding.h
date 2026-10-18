#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/AccelerationStructureBinding.h"
#include "mc/external/render_dragon/frame_renderer/BufferBinding.h"
#include "mc/external/render_dragon/frame_renderer/SamplerStateBinding.h"
#include "mc/external/render_dragon/frame_renderer/TextureBinding.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::drawcommands {

#if defined(LL_PLAT_A) // @header-generator platform
struct SamplerBinding {
public:
    // SamplerBinding inner types define
    using SamplerBindingType = std::variant<
        std::vector<dragon::framerenderer::drawcommands::TextureBinding>,
        std::vector<dragon::framerenderer::drawcommands::BufferBinding>,
        dragon::framerenderer::drawcommands::AccelerationStructureBinding,
        dragon::framerenderer::drawcommands::SamplerStateBinding>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 32, std::variant<std::vector<dragon::framerenderer::drawcommands::TextureBinding>, std::vector<dragon::framerenderer::drawcommands::BufferBinding>, dragon::framerenderer::drawcommands::AccelerationStructureBinding, dragon::framerenderer::drawcommands::SamplerStateBinding>> mSampler;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
struct SamplerBinding {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::drawcommands
