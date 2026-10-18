#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/renderer/hal/interface/Buffer.h"
#include "mc/external/render_dragon/mesh/ResolvedIndexBufferResource.h"
#include "mc/external/render_dragon/mesh/ResolvedVertexBufferResource.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct BufferResourceService : public ::mce::CheckedResourceService<std::variant<
                                   std::monostate,
                                   mce::Buffer,
                                   mce::ClientResourcePointer<dragon::ResolvedVertexBufferResource>,
                                   mce::ClientResourcePointer<dragon::ResolvedIndexBufferResource>>> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BufferResourceService();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct BufferResourceService {};
#endif // @header-generator platform

} // namespace mce
