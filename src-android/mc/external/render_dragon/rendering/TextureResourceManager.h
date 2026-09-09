#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/rendering/BufferResourceManager.h"
#include "mc/external/render_dragon/rendering/TextureUsage.h"
#include "mc/external/render_dragon/tasks/DeferredResult.h"

// auto generated forward declare list
// clang-format off
namespace Core { class SharedMemoryTracker; }
namespace cg { struct TextureDescription; }
namespace dragon::memory { class BufferSource; }
namespace dragon::rendering { struct ResolvedTextureHandle; }
namespace dragon::rendering { struct SharedTextureHandle; }
namespace dragon::rendering { struct TextureResourceDesc; }
namespace dragon::rendering { struct TextureStatistics; }
namespace dragon::rendering { struct TextureUpdateSlot; }
namespace dragon::rendering::details { template<typename T0, typename T1> class BufferHandleTypeWrapper; }
namespace dragon::tasks { class GraphicsTasks; }
namespace mce { struct Image; }
// clang-format on

namespace dragon::rendering {

class TextureResourceManager {
public:
    // TextureResourceManager inner types declare
    // clang-format off
    class Impl;
    // clang-format on

    // TextureResourceManager inner types define
    class Impl : public ::dragon::rendering::BufferResourceManager<dragon::rendering::TextureResourceType> {
    public:
        // prevent constructor by default
        Impl();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::dragon::tasks::DeferredResult<bool> overrideInternalAsync(
            std::optional<dragon::rendering::details::
                              BufferHandleTypeWrapper<dragon::rendering::details::TextureHandleTypeKey, ulong>> const
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<dragon::rendering::TextureResourceManager::Impl>> mImpl;
    ::ll::UntypedStorage<8, 16>                                                                mMissingTexture;
    ::ll::TypedStorage<8, 8, ::dragon::tasks::GraphicsTasks&>                                  mGraphicsTasks;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureResourceManager& operator=(TextureResourceManager const&);
    TextureResourceManager(TextureResourceManager const&);
    TextureResourceManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TextureResourceManager(::dragon::tasks::GraphicsTasks&);

    MCNAPI void bindExternalTexture(
        std::optional<dragon::rendering::details::
                          BufferHandleTypeWrapper<dragon::rendering::details::TextureHandleTypeKey, ulong>>
    );

    MCNAPI ::dragon::tasks::DeferredResult<dragon::rendering::SharedTextureHandle>
    createAsExternal(::cg::TextureDescription const&, uint const);

    MCNAPI ::dragon::tasks::DeferredResult<dragon::rendering::SharedTextureHandle>
    createFromExternal(::cg::TextureDescription const&, ulong, uint const);

    MCNAPI bool destroy(
        std::optional<dragon::rendering::details::
                          BufferHandleTypeWrapper<dragon::rendering::details::TextureHandleTypeKey, ulong>>
    );

    MCNAPI void flush(::Core::SharedMemoryTracker&);

    MCNAPI void updateFromExternal(::dragon::tasks::DeferredResult<dragon::rendering::SharedTextureHandle>&, ulong);

    MCNAPI ~TextureResourceManager();
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
};

} // namespace dragon::rendering
