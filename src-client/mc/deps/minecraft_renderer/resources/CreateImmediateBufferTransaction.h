#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/BufferSpan.h"
#include "mc/deps/renderer/hal/enums/BufferType.h"
#include "mc/external/render_dragon/resources/ResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct BufferDescription; }
namespace mce { class BufferResourceServiceContext; }
namespace mce { class ImmediateBuffer; }
// clang-format on

namespace mce {

struct CreateImmediateBufferTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::cg::BufferSpan> mBufferSpan;
    ::ll::TypedStorage<1, 1, ::mce::BufferType> mBufferType;
    ::ll::TypedStorage<8, 16, std::string_view> mDebugName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<dragon::BufferDescription>
           apply(::mce::ResourcePointer<mce::ImmediateBuffer> const&, ::mce::BufferResourceServiceContext&);

    MCNAPI void set(::cg::BufferSpan const&, ::mce::BufferType const, std::string_view const);
    // NOLINTEND
};

} // namespace mce
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
