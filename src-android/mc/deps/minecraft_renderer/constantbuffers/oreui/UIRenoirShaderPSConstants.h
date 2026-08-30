#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ShaderConstantFloat4; }
// clang-format on

namespace mce {

class UIRenoirShaderPSConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> RENOIR_SHADER_PS_PROPS_0;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> RENOIR_SHADER_PS_PROPS_1;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> RENOIR_SHADER_PS_PROPS_2;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*> RENOIR_SHADER_PS_PROPS_3;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIRenoirShaderPSConstants();

    virtual void init();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UIRenoirShaderPSConstants();
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

} // namespace mce
