#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/base/ImmediateBufferBase.h"
#include "mc/deps/renderer/hal/enums/BufferType.h"
#include "mc/deps/renderer/hal/null/BufferNull.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
// clang-format on

namespace mce {

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

} // namespace mce
