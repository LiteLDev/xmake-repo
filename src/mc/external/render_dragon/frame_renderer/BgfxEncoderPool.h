#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct Encoder; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class BgfxEncoderPool {};
#endif // @header-generator platform

} // namespace dragon::framerenderer
