#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/DynamicIndexBufferHandle.h"
#include "mc/external/bgfx/IndexBufferHandle.h"
#include "mc/external/render_dragon/mesh/IndexSize.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct IndexBufferView; }
// clang-format on

namespace dragon {

struct ResolvedIndexBufferResource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::variant<bgfx::IndexBufferHandle, bgfx::DynamicIndexBufferHandle>> mResource;
    ::ll::TypedStorage<4, 4, uint>                                                                  mOffset;
    ::ll::TypedStorage<4, 4, uint>                                                                  mCount;
    ::ll::TypedStorage<1, 1, ::dragon::mesh::IndexSize>                                             mIndexSize;
    ::ll::TypedStorage<8, 8, std::unique_ptr<dragon::IndexBufferView>>                              mStorageView;
    // NOLINTEND
};

} // namespace dragon
