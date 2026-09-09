#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/PerFrameConstants.h"
#include "mc/deps/renderer/hal/interface/ConstantBufferContainer.h"

namespace mce {

class ThreadedPerFrameConstants : public ::mce::PerFrameConstants {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 112> mPerFrameConstants;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ThreadedPerFrameConstants();

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
