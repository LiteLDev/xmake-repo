#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ShaderConstantFloat1; }
// clang-format on

namespace mce {

class DebugConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat1*> TEXTURE_ARRAY_INDEX_0;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DebugConstants();

    virtual void init();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DebugConstants();
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
