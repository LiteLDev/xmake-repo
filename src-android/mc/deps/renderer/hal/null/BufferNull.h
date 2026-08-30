#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/base/BufferBase.h"
#include "mc/deps/renderer/hal/enums/BufferType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
// clang-format on

namespace mce {

class BufferNull : public ::mce::BufferBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mDataSize;
    // NOLINTEND

public:
    // prevent constructor by default
    BufferNull& operator=(BufferNull const&);
    BufferNull(BufferNull const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void createBuffer(::mce::RenderContext&, uint const, void const* const, uint const, ::mce::BufferType const);

    MCNAPI bool isValid() const;

    MCNAPI void recreateBuffer(::mce::RenderContext&, uint const, void const* const, uint const);
    // NOLINTEND
};

} // namespace mce
