#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/enums/ShaderPrimitiveTypes.h"
#include "mc/deps/renderer/hal/interface/ShaderConstantWithData.h"
#include "mc/deps/renderer/hal/null/ShaderConstantNullInt1.h"

namespace mce {

class ShaderConstantInt1
: public ::mce::ShaderConstantWithData<(mce::ShaderPrimitiveTypes)5, mce::ShaderConstantNullInt1> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShaderConstantInt1();
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
