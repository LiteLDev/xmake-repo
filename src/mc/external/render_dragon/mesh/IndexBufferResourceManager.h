#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/external/render_dragon/mesh/IndexSize.h"
#include "mc/external/render_dragon/rendering/BufferResourceManager.h"

// auto generated forward declare list
// clang-format off
namespace Core { class SharedMemoryTracker; }
namespace dragon::memory { class BufferSource; }
namespace dragon::mesh { struct IndexBufferDescription; }
namespace dragon::rendering::details { template<typename T0, typename T1> class BufferHandleTypeWrapper; }
namespace dragon::tasks { class GraphicsTasks; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace dragon::mesh {

class IndexBufferResourceManager {
public:
    // IndexBufferResourceManager inner types declare
    // clang-format off
    class Impl;
    // clang-format on

    // IndexBufferResourceManager inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    class Impl : public ::dragon::rendering::BufferResourceManager<dragon::mesh::IndexBufferType> {
    public:
        // prevent constructor by default
        Impl();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<dragon::mesh::IndexBufferResourceManager::Impl>> mImpl;
    // NOLINTEND

public:
    // prevent constructor by default
    IndexBufferResourceManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit IndexBufferResourceManager(::dragon::tasks::GraphicsTasks&);

    MCNAPI std::optional<
        dragon::rendering::details::BufferHandleTypeWrapper<dragon::mesh::details::IndexBufferHandleTypeKey, ulong>>
    createDynamic(
        ulong const,
        std::optional<dragon::memory::BufferSource>&&,
        ::dragon::mesh::IndexSize const,
        ushort const
    );

    MCNAPI std::optional<
        dragon::rendering::details::BufferHandleTypeWrapper<dragon::mesh::details::IndexBufferHandleTypeKey, ulong>>
    createStatic(::dragon::memory::BufferSource&&, ::dragon::mesh::IndexSize const, ushort const);

    MCNAPI bool destroy(
        std::optional<
            dragon::rendering::details::BufferHandleTypeWrapper<dragon::mesh::details::IndexBufferHandleTypeKey, ulong>>
    );

    MCNAPI void flush(::Core::SharedMemoryTracker&);

    MCNAPI bool isValid(
        std::optional<
            dragon::rendering::details::BufferHandleTypeWrapper<dragon::mesh::details::IndexBufferHandleTypeKey, ulong>>
    ) const;

    MCNAPI std::optional<dragon::mesh::IndexBufferDescription> tryGetDesc(
        std::optional<
            dragon::rendering::details::BufferHandleTypeWrapper<dragon::mesh::details::IndexBufferHandleTypeKey, ulong>>
    ) const;

    MCNAPI void updateOffset(
        std::optional<dragon::rendering::details::
                          BufferHandleTypeWrapper<dragon::mesh::details::IndexBufferHandleTypeKey, ulong>>,
        uint const,
        uint const,
        ::dragon::memory::BufferSource&&
    );

    MCNAPI ~IndexBufferResourceManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::tasks::GraphicsTasks&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    class Impl {};
#endif // @header-generator platform
};

} // namespace dragon::mesh
