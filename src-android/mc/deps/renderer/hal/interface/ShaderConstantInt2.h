#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/enums/ShaderPrimitiveTypes.h"
#include "mc/deps/renderer/hal/interface/ShaderConstantWithData.h"
#include "mc/deps/renderer/hal/null/ShaderConstantNullInt2.h"

namespace mce {

class ShaderConstantInt2
: public ::mce::ShaderConstantWithData<(mce::ShaderPrimitiveTypes)6, mce::ShaderConstantNullInt2> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShaderConstantInt2();
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
