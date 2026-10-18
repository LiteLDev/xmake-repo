#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/external/render_dragon/platform/BufferUsage.h"
#include "mc/external/render_dragon/platform/CapabilitySupport.h"
#include "mc/external/render_dragon/platform/ICapabilityQuery.h"
#include "mc/external/render_dragon/platform/ShaderFeature.h"
#include "mc/external/render_dragon/rendering/ShaderStage.h"
#include "mc/external/render_dragon/rendering/TextureUsage.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::platform {

#if defined(LL_PLAT_A) // @header-generator platform
class CapabilityQuery : public ::dragon::platform::ICapabilityQuery {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CapabilityQuery();

    virtual ::dragon::platform::CapabilitySupport checkShaderFeature(::dragon::platform::ShaderFeature const, ::dragon::rendering::ShaderStage const) const;

    virtual ::dragon::platform::CapabilitySupport checkBufferUsage(::dragon::platform::BufferUsage const, ::dragon::rendering::ShaderStage const) const;

    virtual ::dragon::platform::CapabilitySupport checkTextureFormatSupport(::mce::TextureFormat, ::dragon::rendering::TextureUsage) const;

    virtual ::dragon::platform::CapabilitySupport checkDynamicTextureHandleSupport() const;

    virtual ::dragon::platform::CapabilitySupport checkExtendedSamplerCountSupport() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::dragon::platform::CapabilitySupport checkVibrantVisualsShadingSupport() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::dragon::platform::CapabilitySupport
    $checkShaderFeature(::dragon::platform::ShaderFeature const, ::dragon::rendering::ShaderStage const) const;

    MCNAPI ::dragon::platform::CapabilitySupport
    $checkBufferUsage(::dragon::platform::BufferUsage const, ::dragon::rendering::ShaderStage const) const;

    MCNAPI ::dragon::platform::CapabilitySupport
        $checkTextureFormatSupport(::mce::TextureFormat, ::dragon::rendering::TextureUsage) const;

    MCNAPI ::dragon::platform::CapabilitySupport $checkDynamicTextureHandleSupport() const;

    MCNAPI ::dragon::platform::CapabilitySupport $checkExtendedSamplerCountSupport() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class CapabilityQuery {};
#endif // @header-generator platform

} // namespace dragon::platform
