#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ShaderConstantFloat4; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ShaderConstantFloat4; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class WeatherConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> POSITION_OFFSET;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> VELOCITY;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> ALPHA;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> VIEW_POSITION;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> SIZE_SCALE;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> FORWARD;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> UV_INFO;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> PARTICLE_BOX;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WeatherConstants();

    virtual void init();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WeatherConstants();
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
class WeatherConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> POSITION_OFFSET;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> VELOCITY;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> ALPHA;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> VIEW_POSITION;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> SIZE_SCALE;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> FORWARD;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> UV_INFO;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> PARTICLE_BOX;
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
class WeatherConstants {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
