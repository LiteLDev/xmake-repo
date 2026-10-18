#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core_graphics/BufferDescription.h"
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

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct UpdateBufferTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::cg::BufferDescription> mBufferDescription;
    ::ll::TypedStorage<8, 24, std::vector<uchar>>     mBufferData;
    ::ll::TypedStorage<8, 24, std::string>            mDebugName;
    // NOLINTEND
};
#else // @header-generator platform
struct UpdateBufferTransaction {};
#endif // @header-generator platform

} // namespace mce
