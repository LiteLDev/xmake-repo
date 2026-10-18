#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Camera; }
namespace mce { class RenderContext; }
namespace mce { class RingBuffer; }
namespace mce { class ShaderConstantMatrix4x4; }
namespace mce { struct CameraMatrices; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ShaderConstantMatrix4x4; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class WorldConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantMatrix4x4*> WORLDVIEWPROJ;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantMatrix4x4*> WORLD;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantMatrix4x4*> WORLDVIEW;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantMatrix4x4*> PROJ;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldConstants();

    virtual void init();
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
class WorldConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantMatrix4x4*> WORLDVIEWPROJ;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantMatrix4x4*> WORLD;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantMatrix4x4*> WORLDVIEW;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantMatrix4x4*> PROJ;
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
class WorldConstants {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
