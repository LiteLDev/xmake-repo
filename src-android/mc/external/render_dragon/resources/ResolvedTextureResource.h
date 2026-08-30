#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/CoordinateContext.h"
#include "mc/deps/core_graphics/Resolution.h"
#include "mc/external/bgfx/TextureFormat.h"
#include "mc/external/bgfx/TextureHandle.h"
#include "mc/external/render_dragon/endstone/Result.h"
#include "mc/external/render_dragon/rendering/TextureCubeFace.h"
#include "mc/external/render_dragon/resources/TextureDescription.h"
#include "mc/external/render_dragon/resources/TextureError.h"
#include "mc/mpmc__Sender.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct Memory; }
namespace dragon::res { class TextureRead; }
namespace dragon::texturestreaming { template<typename T0> class TextureStreamingManager; }
// clang-format on

namespace dragon {

class ResolvedTextureResource {
public:
    // ResolvedTextureResource inner types declare
    // clang-format off
    struct MemoryTracker;
    // clang-format on

    // ResolvedTextureResource inner types define
    struct MemoryTracker {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>              mEnabled;
        ::ll::TypedStorage<4, 4, std::atomic<uint>> mMemoryAllocated;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::bgfx::TextureHandle>         mTextureHandle;
    ::ll::TypedStorage<8, 64, ::dragon::TextureDescription> mTextureDescription;
    ::ll::UntypedStorage<1, 36>                             mTextureMetaData;
    ::ll::UntypedStorage<8, 16>                             mTextureStreamingManager;
    ::ll::UntypedStorage<8, 16>                             mDestructionQueue;
    ::ll::TypedStorage<4, 4, uint>                          mMemoryTrackingData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResolvedTextureResource();

    MCNAPI ::dragon::result::Result<void, dragon::res::TextureError>
    copyTexture(::dragon::ResolvedTextureResource&) const;

    MCNAPI ::dragon::result::Result<dragon::ResolvedTextureResource&, dragon::res::TextureError> createTexture(
        ::mpmc::Sender<std::function<void()>> const&,
        std::shared_ptr<dragon::texturestreaming::TextureStreamingManager<
            dragon::texturestreaming::DenseTextureStreamingManagerContext>>,
        ::dragon::TextureDescription const&,
        ::bgfx::Memory const* const
    );

    MCNAPI void createWrappedTexture(
        ::mpmc::Sender<std::function<void()>> const&,
        ::bgfx::TextureHandle,
        ::dragon::TextureDescription
    );

    MCNAPI ::dragon::ResolvedTextureResource& operator=(::dragon::ResolvedTextureResource&&);

    MCNAPI ::dragon::result::Result<dragon::res::TextureRead, dragon::res::TextureError> readTexture(uchar) const;

    MCNAPI ::dragon::result::Result<dragon::ResolvedTextureResource&, dragon::res::TextureError> recreateTexture(
        ::dragon::ResolvedTextureResource const&,
        ::dragon::TextureDescription const&,
        ::bgfx::Memory const* const
    );

    MCNAPI void updateScreenSpaceOccupancyForTexture(
        ::cg::Resolution<ushort, (cg::viewport::details::CoordinateContext)0> const&,
        float,
        float
    );

    MCNAPI ::dragon::result::Result<dragon::ResolvedTextureResource&, dragon::res::TextureError>
    updateTexture(::bgfx::Memory const* const);

    MCNAPI ::dragon::result::Result<dragon::ResolvedTextureResource&, dragon::res::TextureError>
    updateTextureRegion(uint, uint, uint, uint, ::bgfx::Memory const* const);

    MCNAPI ::dragon::result::Result<dragon::ResolvedTextureResource&, dragon::res::TextureError>
    updateTextureRegion(uchar, uint, uint, uint, uint, uint, uint, ::bgfx::Memory const* const);

    MCNAPI ~ResolvedTextureResource();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon
