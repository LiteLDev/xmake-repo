#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/hal/enums/BufferType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
#ifndef LL_GENERATED_ANDROID_BASE_STUB_MCE__BUFFERRESOURCEBASE
#define LL_GENERATED_ANDROID_BASE_STUB_MCE__BUFFERRESOURCEBASE
namespace mce { class BufferResourceBase {}; }
#endif
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class Buffer : public ::mce::BufferResourceBase {
public:
    // prevent constructor by default
    Buffer& operator=(Buffer const&);
    Buffer(Buffer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Buffer();

    MCNAPI Buffer(::mce::Buffer&&);

    MCNAPI void createBuffer(::mce::RenderContext&, uint const, void const* const, uint const, ::mce::BufferType const);

    MCNAPI void createIndexBuffer(::mce::RenderContext&, uint const, void const*, uint const);

    MCNAPI bool isValid() const;

    MCNAPI ::mce::Buffer& operator=(::mce::Buffer&&);

    MCNAPI void recreateBuffer(::mce::RenderContext&, uint const, void const* const, uint const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::Buffer&&);
    // NOLINTEND
};
#else // @header-generator platform
class Buffer {};
#endif // @header-generator platform

} // namespace mce
