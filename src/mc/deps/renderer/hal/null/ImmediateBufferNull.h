#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/hal/base/ImmediateBufferBase.h"
#include "mc/deps/renderer/hal/enums/BufferType.h"
#include "mc/deps/renderer/hal/null/BufferNull.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class ImmediateBufferNull : public ::mce::ImmediateBufferBase, public ::mce::BufferNull {
public:
    // prevent constructor by default
    ImmediateBufferNull& operator=(ImmediateBufferNull const&);
    ImmediateBufferNull(ImmediateBufferNull const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    createDynamicBuffer(::mce::RenderContext&, uint const, void const* const, uint const, ::mce::BufferType const);
    // NOLINTEND
};
#else // @header-generator platform
class ImmediateBufferNull {};
#endif // @header-generator platform

} // namespace mce
