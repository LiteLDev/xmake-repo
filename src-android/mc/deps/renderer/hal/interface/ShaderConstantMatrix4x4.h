#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/enums/ShaderPrimitiveTypes.h"
#include "mc/deps/renderer/hal/interface/ShaderConstantWithData.h"
#include "mc/deps/renderer/hal/null/ShaderConstantNullMatrix4x4.h"

namespace mce {

class ShaderConstantMatrix4x4
: public ::mce::ShaderConstantWithData<(mce::ShaderPrimitiveTypes)11, mce::ShaderConstantNullMatrix4x4> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShaderConstantMatrix4x4();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
