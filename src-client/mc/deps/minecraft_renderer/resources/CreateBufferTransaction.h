#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core_graphics/BufferDescription.h"
#include "mc/deps/renderer/VertexFormat.h"
#include "mc/deps/renderer/hal/enums/BufferType.h"
#include "mc/external/render_dragon/resources/ResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace cg { struct BufferSpan; }
namespace dragon { struct BufferDescription; }
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon { struct ResolvedVertexBufferResource; }
namespace mce { class Buffer; }
namespace mce { class BufferResourceServiceContext; }
// clang-format on

namespace mce {

struct CreateBufferTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::cg::BufferDescription> mBufferDescription;
    ::ll::TypedStorage<8, 24, std::vector<uchar>>     mBufferData;
    ::ll::TypedStorage<1, 1, ::mce::BufferType>       mBufferType;
    ::ll::TypedStorage<8, 24, std::string>            mDebugName;
    ::ll::TypedStorage<2, 36, ::mce::VertexFormat>    mVertexFormat;
    // NOLINTEND
};

} // namespace mce
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
