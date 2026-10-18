#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ShaderConstantFloat1; }
namespace mce { class ShaderConstantFloat2; }
namespace mce { class ShaderConstantFloat3; }
namespace mce { class ShaderConstantFloat4; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ShaderConstantFloat1; }
namespace mce { class ShaderConstantFloat2; }
namespace mce { class ShaderConstantFloat3; }
namespace mce { class ShaderConstantFloat4; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class PerFrameConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat1*> TIME;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat3*> VIEW_POS;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> FOG_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat2*> FOG_CONTROL;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat1*> RENDER_DISTANCE;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat1*> FAR_CHUNKS_DISTANCE;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat1*> OCCLUSION_HEIGHT_OFFSET;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PerFrameConstants();

    virtual void init();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void getShaderConstants();
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
class PerFrameConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat1*> TIME;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat3*> VIEW_POS;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> FOG_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat2*> FOG_CONTROL;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat1*> RENDER_DISTANCE;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat1*> FAR_CHUNKS_DISTANCE;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat1*> OCCLUSION_HEIGHT_OFFSET;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void init() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void getShaderConstants();
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
class PerFrameConstants {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
