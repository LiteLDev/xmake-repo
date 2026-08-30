#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace mce {

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

} // namespace mce
