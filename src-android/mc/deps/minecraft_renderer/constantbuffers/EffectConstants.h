#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
namespace mce { class ShaderConstantFloat2; }
// clang-format on

namespace mce {

class EffectConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat2*> UV_OFFSET;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EffectConstants();

    virtual void init();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EffectConstants();

    MCNAPI void setUVOffset(::mce::RenderContext&, float, float);
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
