#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ShaderConstantFloat2; }
namespace mce { class ShaderConstantFloat4; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ShaderConstantFloat2; }
namespace mce { class ShaderConstantFloat4; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class ActorConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> OVERLAY_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> TILE_LIGHT_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat2*> TILE_LIGHT_INTENSITY;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> BLOCK_LIGHT_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> CHANGE_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> GLINT_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> UV_ANIM;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> MULTIPLICATIVE_TINT_CHANGE_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat2*> UV_OFFSET;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat2*> UV_ROTATION;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat2*> UV_SCALE;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorConstants();

    virtual void init();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorConstants();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
class ActorConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> OVERLAY_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> TILE_LIGHT_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat2*> TILE_LIGHT_INTENSITY;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> BLOCK_LIGHT_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> CHANGE_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> GLINT_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> UV_ANIM;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> MULTIPLICATIVE_TINT_CHANGE_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat2*> UV_OFFSET;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat2*> UV_ROTATION;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat2*> UV_SCALE;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void init() /*override*/;
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
class ActorConstants {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
