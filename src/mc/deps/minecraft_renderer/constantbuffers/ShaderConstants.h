#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

// auto generated forward declare list
// clang-format off
class ShaderColor;
namespace mce { class RenderContext; }
namespace mce { class ShaderConstantFloat1; }
namespace mce { class ShaderConstantFloat3; }
namespace mce { class ShaderConstantFloat4; }
namespace mce { class ShaderConstantInt1; }
namespace mce { class ShaderConstantMatrix4x4; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
namespace mce { class ShaderConstantFloat1; }
namespace mce { class ShaderConstantFloat3; }
namespace mce { class ShaderConstantFloat4; }
namespace mce { class ShaderConstantInt1; }
namespace mce { class ShaderConstantMatrix4x4; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class ShaderConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*>    CURRENT_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*>    DARKEN;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat3*>    TEXTURE_DIMENSIONS;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat1*>    HUD_OPACITY;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantMatrix4x4*> UV_TRANSFORM;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantInt1*>      MSAA_SAMPLECOUNT;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShaderConstants();

    virtual void init();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void getConstants();

    MCNAPI float const& getHUDOpacity() const;

    MCNAPI void setHUDOpacity(::mce::RenderContext&, float);

    MCNAPI void setMSAASampleCount(::mce::RenderContext&, int const&);

    MCNAPI void setTextureDimensions(::mce::RenderContext&, ::glm::vec<3, float, (glm::qualifier)0> const&);

    MCNAPI void setUVTransform(::mce::RenderContext&, ::glm::mat<2, 3, float, (glm::qualifier)0> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ShaderConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*>    CURRENT_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*>    DARKEN;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat3*>    TEXTURE_DIMENSIONS;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat1*>    HUD_OPACITY;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantMatrix4x4*> UV_TRANSFORM;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantInt1*>      MSAA_SAMPLECOUNT;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void init() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void getConstants();

    MCAPI void setUVTransform(::mce::RenderContext& renderContext, ::glm::mat2x3 const& transform);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ShaderConstants {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
