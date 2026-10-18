#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/hal/enums/BufferType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
#ifndef LL_GENERATED_ANDROID_BASE_STUB_IMMEDIATEBUFFERRESOURCEBASE
#define LL_GENERATED_ANDROID_BASE_STUB_IMMEDIATEBUFFERRESOURCEBASE
class ImmediateBufferResourceBase {};
#endif
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class ImmediateBuffer : public ::ImmediateBufferResourceBase {
public:
    // prevent constructor by default
    ImmediateBuffer& operator=(ImmediateBuffer const&);
    ImmediateBuffer(ImmediateBuffer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ImmediateBuffer();

    MCNAPI void
    createDynamicBuffer(::mce::RenderContext&, uint const, void const* const, uint const, ::mce::BufferType const);

    MCNAPI ::mce::ImmediateBuffer& operator=(::mce::ImmediateBuffer&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
class ImmediateBuffer {};
#endif // @header-generator platform

} // namespace mce
