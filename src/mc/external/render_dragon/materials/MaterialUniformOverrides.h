#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/memory/CpuRingBufferAllocator.h"
#include "mc/external/bgfx/ShaderBufferHandle.h"
#include "mc/external/render_dragon/materials/MaterialUniformAlias.h"
#include "mc/external/render_dragon/materials/MaterialUniformName.h"
#include "mc/external/render_dragon/materials/definition/SamplerAccess.h"
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"
#include "mc/external/render_dragon/resources/SamplerDescription.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"
#include "mc/external/render_dragon/resources/TextureSamplerDescription.h"

// auto generated forward declare list
// clang-format off
namespace Core { template<int T0, bool T1> class CheckedRingBuffer; }
namespace dragon { struct ResolvedAccelerationStructureResource; }
namespace dragon { struct ResolvedShaderBufferResource; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace dragon::materials {

class MaterialUniformOverrides {
public:
    // MaterialUniformOverrides inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct TextureData;
    struct SamplerStateData;
    struct BufferData;
#else // @header-generator platform
#endif // @header-generator platform
    struct AccelerationStuctureData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct BufferData;
    struct SamplerStateData;
    struct TextureData;
    template<typename T0> struct UniformData;
#endif // @header-generator platform
    struct UniformPair;
    // clang-format on

    // MaterialUniformOverrides inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct TextureData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::dragon::ResolvedTextureResource*>   mTexture;
        ::ll::TypedStorage<8, 24, ::dragon::TextureSamplerDescription> mTextureSamplerDesc;
        ::ll::TypedStorage<4, 4, uint>                                 mMip;
        ::ll::TypedStorage<4, 4, uint>                                 mArrayIndex;
        // NOLINTEND
    };
#else // @header-generator platform
    struct AccelerationStuctureData {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct SamplerStateData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 2, ::dragon::SamplerDescription> mSamplerDesc;
        // NOLINTEND
    };
#else // @header-generator platform
    struct BufferData {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct BufferData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::bgfx::ShaderBufferHandle>                     mBuffer;
        ::ll::TypedStorage<1, 1, ::dragon::materials::definition::SamplerAccess> mAccess;
        // NOLINTEND
    };
#else // @header-generator platform
    struct SamplerStateData {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct AccelerationStuctureData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::dragon::ResolvedAccelerationStructureResource*> mAccelerationStructure;
        // NOLINTEND
    };

    struct UniformPair {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>     mName;
        ::ll::UntypedStorage<8, 48>     mData;
        ::ll::TypedStorage<8, 8, ulong> mHash;
        ::ll::TypedStorage<1, 1, uchar> mArrayIndex;
        // NOLINTEND

    public:
        // prevent constructor by default
        UniformPair& operator=(UniformPair const&);
        UniformPair();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~UniformPair();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };
#else // @header-generator platform
    struct TextureData {};
#endif // @header-generator platform

    template <typename T0>
    struct UniformData {};

#if defined(LL_PLAT_A) // @header-generator platform
    using UniformIdentifier =
        std::variant<dragon::materials::MaterialUniformName, dragon::materials::MaterialUniformAlias>;

    using UniformDataEntry = std::variant<
        dragon::materials::MaterialUniformOverrides::UniformData<glm::vec<4, float, (glm::qualifier)0>>,
        dragon::materials::MaterialUniformOverrides::UniformData<glm::mat<3, 3, float, (glm::qualifier)0>>,
        dragon::materials::MaterialUniformOverrides::UniformData<glm::mat<4, 4, float, (glm::qualifier)0>>,
        dragon::materials::MaterialUniformOverrides::TextureData,
        dragon::materials::MaterialUniformOverrides::SamplerStateData,
        dragon::materials::MaterialUniformOverrides::BufferData,
        dragon::materials::MaterialUniformOverrides::AccelerationStuctureData>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>     mAllocator;
    ::ll::UntypedStorage<8, 16>    mUniforms;
    ::ll::UntypedStorage<8, 24>    mTextureLifetime;
    ::ll::TypedStorage<1, 1, bool> mIsCopy;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialUniformOverrides& operator=(MaterialUniformOverrides const&);
    MaterialUniformOverrides();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _cloneUniformsIfNecessary();

    MCNAPI void clearUniform(::dragon::materials::MaterialUniformName const&, uchar);

    MCNAPI bool empty() const;

    MCNAPI std::optional<dragon::materials::MaterialUniformOverrides::AccelerationStuctureData>
           getAccelerationStructure(::dragon::materials::MaterialUniformName const&) const;

    MCNAPI std::optional<dragon::materials::MaterialUniformOverrides::BufferData>
           getBuffer(::dragon::materials::MaterialUniformName const&) const;

    MCNAPI std::optional<dragon::materials::MaterialUniformOverrides::SamplerStateData>
           getSamplerState(::dragon::materials::MaterialUniformName const&) const;

    MCNAPI std::optional<dragon::materials::MaterialUniformOverrides::TextureData>
           getTexture(::dragon::materials::MaterialUniformName const&, uchar) const;

    MCNAPI std::optional<gsl::span<const uchar>> getUniformData(
        std::variant<dragon::materials::MaterialUniformName, dragon::materials::MaterialUniformAlias> const&
    ) const;

    MCNAPI void insert(::dragon::materials::MaterialUniformOverrides const&);

    MCNAPI void setAccelerationStructure(
        ::dragon::materials::MaterialUniformName const&,
        ::mce::ServerResourcePointer<dragon::ResolvedAccelerationStructureResource> const&
    );

    MCNAPI void setBuffer(
        ::dragon::materials::MaterialUniformName const&,
        ::mce::ServerResourcePointer<dragon::ResolvedShaderBufferResource> const&,
        ::dragon::materials::definition::SamplerAccess const
    );

    MCNAPI void setTexture(
        ::dragon::materials::MaterialUniformName const&,
        ::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&,
        ::dragon::TextureSamplerDescription const&,
        uchar const,
        uchar const
    );

    MCNAPI ~MaterialUniformOverrides();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct UniformPair {};
#endif // @header-generator platform
};

} // namespace dragon::materials
