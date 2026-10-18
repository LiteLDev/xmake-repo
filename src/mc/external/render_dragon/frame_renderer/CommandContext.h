#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/memory/CpuRingBufferAllocator.h"
#include "mc/external/render_dragon/materials/MaterialUniformName.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"
#include "mc/external/render_dragon/resources/TextureSamplerDescription.h"

// auto generated forward declare list
// clang-format off
namespace Core { template<int T0, bool T1> class CheckedRingBuffer; }
namespace bgfx { struct Encoder; }
namespace dragon { class ResolvedTextureResource; }
namespace dragon { struct ResolvedAccelerationStructureResource; }
namespace dragon { struct ResolvedShaderBufferResource; }
namespace dragon::framerenderer { class BgfxEncoderPool; }
namespace dragon::materials { class MaterialUniformOverrides; }
namespace dragon::platform { class ResourcesManager; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace dragon::framerenderer {

class CommandContext {
public:
    // CommandContext inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct MaterialTextureBinding;
    struct MaterialBufferBinding;
#else // @header-generator platform
#endif // @header-generator platform
    struct MaterialAccelerationStructureBinding;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct MaterialBufferBinding;
    struct MaterialTextureBinding;
#endif // @header-generator platform
    // clang-format on

    // CommandContext inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct MaterialTextureBinding {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>                                     nameHash;
        ::ll::UntypedStorage<8, 24>                                    handle;
        ::ll::TypedStorage<8, 24, ::dragon::TextureSamplerDescription> sampler;
        ::ll::TypedStorage<1, 1, uchar>                                mip;
        ::ll::TypedStorage<1, 1, uchar>                                arrayIndex;
        // NOLINTEND
#else // @header-generator platform
    struct MaterialAccelerationStructureBinding {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        MaterialTextureBinding& operator=(MaterialTextureBinding const&);
        MaterialTextureBinding(MaterialTextureBinding const&);
        MaterialTextureBinding();
#else // @header-generator platform
    struct MaterialBufferBinding {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~MaterialTextureBinding();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct MaterialBufferBinding {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  nameHash;
        ::ll::UntypedStorage<8, 24> handle;
        // NOLINTEND

    public:
        // prevent constructor by default
        MaterialBufferBinding& operator=(MaterialBufferBinding const&);
        MaterialBufferBinding(MaterialBufferBinding const&);
        MaterialBufferBinding();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~MaterialBufferBinding();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct MaterialAccelerationStructureBinding {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>     nameHash;
        ::ll::UntypedStorage<8, 24>    handle;
        ::ll::TypedStorage<4, 4, uint> flags;
        // NOLINTEND

    public:
        // prevent constructor by default
        MaterialAccelerationStructureBinding& operator=(MaterialAccelerationStructureBinding const&);
        MaterialAccelerationStructureBinding(MaterialAccelerationStructureBinding const&);
        MaterialAccelerationStructureBinding();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~MaterialAccelerationStructureBinding();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 8> mAllocator;
    ::ll::TypedStorage<2, 2, ushort const> mViewId;
    ::ll::TypedStorage<8, 8, ::bgfx::Encoder* const> mEncoder;
    ::ll::TypedStorage<8, 8, ::dragon::platform::ResourcesManager&> mResourcesManager;
    ::ll::TypedStorage<8, 8, ::dragon::ResolvedTextureResource*> mMissingTexture;
    ::ll::TypedStorage<8, 24, std::vector<std::variant<dragon::framerenderer::CommandContext::MaterialTextureBinding, dragon::framerenderer::CommandContext::MaterialBufferBinding, dragon::framerenderer::CommandContext::MaterialAccelerationStructureBinding>>> mMaterialBindings;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mFramebufferBindingSignature;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    CommandContext& operator=(CommandContext const&);
    CommandContext(CommandContext const&);
    CommandContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandContext(
        ::Core::CpuRingBufferAllocator<uchar, 2, false, Core::CheckedRingBuffer<2, false>>&,
        ushort const,
        ::dragon::framerenderer::BgfxEncoderPool&,
        ::dragon::platform::ResourcesManager&,
        ::dragon::ResolvedTextureResource* const,
        std::optional<uint>
    );

    MCNAPI void insertPassOverrides(::dragon::materials::MaterialUniformOverrides&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Core::CpuRingBufferAllocator<uchar, 2, false, Core::CheckedRingBuffer<2, false>>&,
        ushort const,
        ::dragon::framerenderer::BgfxEncoderPool&,
        ::dragon::platform::ResourcesManager&,
        ::dragon::ResolvedTextureResource* const,
        std::optional<uint>
    );
    // NOLINTEND
#else // @header-generator platform
    struct MaterialTextureBinding {};
#endif // @header-generator platform
};

} // namespace dragon::framerenderer
