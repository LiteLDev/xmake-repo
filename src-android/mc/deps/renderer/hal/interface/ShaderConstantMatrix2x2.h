#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/enums/ShaderPrimitiveTypes.h"
#include "mc/deps/renderer/hal/interface/ShaderConstantWithData.h"
#include "mc/deps/renderer/hal/null/ShaderConstantNullMatrix2x2.h"

namespace mce {

class ShaderConstantMatrix2x2
: public ::mce::ShaderConstantWithData<(mce::ShaderPrimitiveTypes)9, mce::ShaderConstantNullMatrix2x2> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShaderConstantMatrix2x2();
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
