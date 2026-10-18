#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/memory/CpuRingBufferAllocator.h"
#include "mc/external/render_dragon/materials/MaterialUniform.h"
#include "mc/external/render_dragon/materials/TextureBindType.h"
#include "mc/external/render_dragon/materials/UniformDataVector.h"
#include "mc/external/render_dragon/materials/definition/SamplerAccess.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { template<int T0, bool T1> class CheckedRingBuffer; }
namespace dragon { class ResolvedTextureResource; }
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon { struct ResolvedVertexBufferResource; }
namespace dragon { struct TextureSamplerDescription; }
namespace dragon::materials { class CompiledMaterialDefinition; }
namespace dragon::materials { class MaterialUniformHandles; }
namespace dragon::materials { struct MaterialUniformName; }
namespace dragon::materials { struct ParameterId; }
namespace dragon::materials::definition { struct ExternalUniformDeclaration; }
namespace dragon::materials::definition { struct SamplerDefinition; }
namespace dragon::materials::definition { template<typename T0, typename T1> class PropertyField; }
namespace dragon::rendering::details { template<typename T0, typename T1> class BufferHandleTypeWrapper; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::materials {

#if defined(LL_PLAT_A) // @header-generator platform
struct MaterialUniformMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>                                                                  mAllocator;
    ::ll::TypedStorage<8, 16, ::gsl::span<uchar>>                                               mUniformsBlockContent;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<dragon::materials::MaterialUniformHandles>> mUniformHandles;
    ::ll::TypedStorage<8, 16, ::gsl::span<uchar>>                                               mUniformsData;
    ::ll::UntypedStorage<8, 16>                                                                 mUniforms;
    ::ll::UntypedStorage<8, 16>                                                                 mTextures;
    ::ll::UntypedStorage<8, 16>                                                                 mBuffers;
    ::ll::UntypedStorage<8, 16>                                                                 mSamplerStates;
    ::ll::TypedStorage<8, 8, ulong>                                                             mStateHash;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialUniformMap& operator=(MaterialUniformMap const&);
    MaterialUniformMap();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MaterialUniformMap(::dragon::materials::MaterialUniformMap&&);

    MCNAPI MaterialUniformMap(
        ::dragon::materials::MaterialUniformMap const&,
        ::Core::CpuRingBufferAllocator<uchar, 2, false, Core::CheckedRingBuffer<2, false>>&
    );

    MCNAPI MaterialUniformMap(
        ::dragon::materials::CompiledMaterialDefinition const&,
        ::dragon::materials::MaterialUniformHandles&,
        ::Core::CpuRingBufferAllocator<uchar, 2, false, Core::CheckedRingBuffer<2, false>>&
    );

    MCNAPI ::dragon::materials::MaterialUniformMap& operator=(::dragon::materials::MaterialUniformMap&&);

    MCNAPI void
    setSamplerState(::dragon::materials::ParameterId const&, uchar const, ::dragon::TextureSamplerDescription const);

    MCNAPI void setTexture(
        ::dragon::materials::ParameterId const&,
        uchar const,
        ::mce::ServerResourcePointer<dragon::ResolvedTextureResource>,
        std::optional<dragon::TextureSamplerDescription> const&,
        ::dragon::materials::definition::SamplerAccess const,
        ::dragon::materials::TextureBindType const,
        uint
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::materials::MaterialUniformMap&&);

    MCNAPI void* $ctor(
        ::dragon::materials::MaterialUniformMap const&,
        ::Core::CpuRingBufferAllocator<uchar, 2, false, Core::CheckedRingBuffer<2, false>>&
    );

    MCNAPI void* $ctor(
        ::dragon::materials::CompiledMaterialDefinition const&,
        ::dragon::materials::MaterialUniformHandles&,
        ::Core::CpuRingBufferAllocator<uchar, 2, false, Core::CheckedRingBuffer<2, false>>&
    );
    // NOLINTEND
};
#else // @header-generator platform
struct MaterialUniformMap {};
#endif // @header-generator platform

} // namespace dragon::materials
