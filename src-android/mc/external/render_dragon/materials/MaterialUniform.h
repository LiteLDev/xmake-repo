#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/materials/MaterialUniformName.h"
#include "mc/external/render_dragon/materials/TextureBindType.h"
#include "mc/external/render_dragon/materials/UniformType.h"
#include "mc/external/render_dragon/materials/definition/SamplerAccess.h"
#include "mc/external/render_dragon/materials/definition/SamplerType.h"
#include "mc/external/render_dragon/mesh/ResolvedIndexBufferResource.h"
#include "mc/external/render_dragon/mesh/ResolvedVertexBufferResource.h"
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"
#include "mc/external/render_dragon/resources/TextureSamplerDescription.h"

// auto generated forward declare list
// clang-format off
namespace dragon::rendering::details { template<typename T0, typename T1> class BufferHandleTypeWrapper; }
// clang-format on

namespace dragon::materials {

class MaterialUniform {
public:
    // MaterialUniform inner types declare
    // clang-format off
    struct BufferParameter;
    struct SamplerStateParameter;
    struct TextureParameter;
    struct UniformParameter;
    // clang-format on

    // MaterialUniform inner types define
    struct BufferParameter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::dragon::materials::MaterialUniform const*>    mParameter;
        ::ll::UntypedStorage<8, 40>                                              mBuffer;
        ::ll::TypedStorage<4, 4, uint>                                           mIndex;
        ::ll::TypedStorage<1, 1, ::dragon::materials::definition::SamplerAccess> mAccess;
        ::ll::TypedStorage<1, 1, uchar>                                          mSlot;
        // NOLINTEND
    };

    struct SamplerStateParameter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::dragon::materials::MaterialUniform const*>  mParameter;
        ::ll::TypedStorage<8, 24, ::dragon::TextureSamplerDescription>         mSamplerDesc;
        ::ll::TypedStorage<1, 1, ::dragon::materials::definition::SamplerType> mType;
        ::ll::TypedStorage<1, 1, uchar>                                        mSlot;
        // NOLINTEND
    };

    struct TextureParameter {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, ::dragon::materials::MaterialUniform const*> mParameter;
        ::ll::TypedStorage<8, 16, std::variant<dragon::ResolvedTextureResource*, dragon::materials::MaterialUniformName>> mTexture;
        ::ll::TypedStorage<4, 4, uint> mIndex;
        ::ll::TypedStorage<1, 1, ::dragon::materials::TextureBindType> mBindType;
        ::ll::TypedStorage<1, 1, ::dragon::materials::definition::SamplerType> mType;
        ::ll::TypedStorage<8, 24, ::dragon::TextureSamplerDescription> mTextureSamplerDesc;
        ::ll::TypedStorage<1, 1, ::dragon::materials::definition::SamplerAccess> mAccess;
        ::ll::TypedStorage<1, 1, uchar> mTextureSlot;
        // clang-format on
        // NOLINTEND
    };

    struct UniformParameter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::dragon::materials::MaterialUniform const*> mParameter;
        ::ll::TypedStorage<2, 2, ushort>                                      mValueOffset;
        ::ll::TypedStorage<2, 2, ushort>                                      mValueSize;
        ::ll::TypedStorage<1, 1, bool>                                        mValueInitalized;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::dragon::materials::UniformType const> mType;
    ::ll::TypedStorage<8, 24, std::string const>                     mName;
    ::ll::TypedStorage<8, 8, ulong const>                            mNameHash;
    ::ll::TypedStorage<2, 2, ushort const>                           mCount;
    ::ll::TypedStorage<2, 4, std::optional<ushort> const>            mHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialUniform();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MaterialUniform(std::string const&, ::dragon::materials::UniformType const, ushort);

    MCNAPI ~MaterialUniform();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, ::dragon::materials::UniformType const, ushort);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::materials
