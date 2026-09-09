#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/base/ConstantBufferContainerBase.h"

namespace mce {

class ConstantBufferContainerNull : public ::mce::ConstantBufferContainerBase {
public:
    // prevent constructor by default
    ConstantBufferContainerNull& operator=(ConstantBufferContainerNull const&);
    ConstantBufferContainerNull(ConstantBufferContainerNull const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConstantBufferContainerNull();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ConstantBufferContainerNull();

    MCNAPI ConstantBufferContainerNull(::mce::ConstantBufferContainerNull&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::ConstantBufferContainerNull&&);
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
