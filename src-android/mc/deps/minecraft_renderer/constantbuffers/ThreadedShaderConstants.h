#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ShaderConstants.h"
#include "mc/deps/renderer/hal/interface/ConstantBufferContainer.h"

namespace mce {

class ThreadedShaderConstants : public ::mce::ShaderConstants {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 112> mShaderConstants;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ThreadedShaderConstants();

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

} // namespace mce
