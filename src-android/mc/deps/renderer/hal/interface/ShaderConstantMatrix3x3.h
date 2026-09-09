#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/enums/ShaderPrimitiveTypes.h"
#include "mc/deps/renderer/hal/interface/ShaderConstantWithData.h"
#include "mc/deps/renderer/hal/null/ShaderConstantNullMatrix3x3.h"

namespace mce {

class ShaderConstantMatrix3x3
: public ::mce::ShaderConstantWithData<(mce::ShaderPrimitiveTypes)10, mce::ShaderConstantNullMatrix3x3> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShaderConstantMatrix3x3();
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
