#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct Encoder; }
// clang-format on

namespace dragon::framerenderer {

class BgfxEncoderPool {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::Threading::InstancedThreadLocal<bgfx::Encoder*, std::allocator<bgfx::Encoder*>>>> mThreadEncoder;
    ::ll::UntypedStorage<8, 8> mOwnerId;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void begin();

    MCNAPI ~BgfxEncoderPool();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::framerenderer
