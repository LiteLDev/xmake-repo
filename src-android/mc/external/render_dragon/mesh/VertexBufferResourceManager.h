#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/rendering/BufferResourceManager.h"

// auto generated forward declare list
// clang-format off
namespace Core { class SharedMemoryTracker; }
namespace dragon::memory { class BufferSource; }
namespace dragon::mesh { class VertexDeclManager; }
namespace dragon::mesh { struct VertexBufferDescription; }
namespace dragon::mesh { struct VertexFormat; }
namespace dragon::rendering::details { template<typename T0, typename T1> class BufferHandleTypeWrapper; }
namespace dragon::tasks { class GraphicsTasks; }
// clang-format on

namespace dragon::mesh {

class VertexBufferResourceManager {
public:
    // VertexBufferResourceManager inner types declare
    // clang-format off
    class Impl;
    // clang-format on

    // VertexBufferResourceManager inner types define
    class Impl : public ::dragon::rendering::BufferResourceManager<dragon::mesh::VertexBufferType> {
    public:
        // prevent constructor by default
        Impl();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<dragon::mesh::VertexBufferResourceManager::Impl>> mImpl;
    ::ll::TypedStorage<8, 8, ::dragon::mesh::VertexDeclManager&>                               mVertexDeclManager;
    // NOLINTEND

public:
    // prevent constructor by default
    VertexBufferResourceManager& operator=(VertexBufferResourceManager const&);
    VertexBufferResourceManager(VertexBufferResourceManager const&);
    VertexBufferResourceManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VertexBufferResourceManager(::dragon::tasks::GraphicsTasks&, ::dragon::mesh::VertexDeclManager&);

    MCNAPI std::optional<
        dragon::rendering::details::BufferHandleTypeWrapper<dragon::mesh::details::VertexBufferHandleTypeKey, ulong>>
    createDynamic(
        ulong const,
        std::optional<dragon::memory::BufferSource>&&,
        ::dragon::mesh::VertexFormat const&,
        ushort const
    );

    MCNAPI bool destroy(
        std::optional<dragon::rendering::details::
                          BufferHandleTypeWrapper<dragon::mesh::details::VertexBufferHandleTypeKey, ulong>>
    );

    MCNAPI void flush(::Core::SharedMemoryTracker&);

    MCNAPI bool isValid(
        std::optional<dragon::rendering::details::
                          BufferHandleTypeWrapper<dragon::mesh::details::VertexBufferHandleTypeKey, ulong>>
    ) const;

    MCNAPI std::optional<dragon::mesh::VertexBufferDescription> tryGetDesc(
        std::optional<dragon::rendering::details::
                          BufferHandleTypeWrapper<dragon::mesh::details::VertexBufferHandleTypeKey, ulong>>
    ) const;

    MCNAPI void updateOffset(
        std::optional<dragon::rendering::details::
                          BufferHandleTypeWrapper<dragon::mesh::details::VertexBufferHandleTypeKey, ulong>>,
        uint const,
        ushort const,
        ::dragon::memory::BufferSource&&
    );

    MCNAPI ~VertexBufferResourceManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::tasks::GraphicsTasks&, ::dragon::mesh::VertexDeclManager&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::mesh
