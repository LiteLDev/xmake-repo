#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/external/render_dragon/materials/MaterialUniformMap.h"
#include "mc/external/render_dragon/materials/definition/SamplerAccess.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedMaterialResource; }
namespace dragon { class ResolvedTextureResource; }
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon { struct ResolvedShaderBufferResource; }
namespace dragon { struct ResolvedVertexBufferResource; }
namespace dragon { struct TextureSamplerDescription; }
namespace dragon::frameobject { struct IntraFrameAllocatorContainer; }
namespace dragon::materials { class Material; }
namespace dragon::materials { struct MaterialUniformName; }
namespace dragon::materials { struct ParameterId; }
namespace dragon::materials { struct SamplerSlot; }
namespace dragon::rendering::details { template<typename T0, typename T1> class BufferHandleTypeWrapper; }
// clang-format on

namespace dragon::frameobject::components {

struct MaterialFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::reference_wrapper<const dragon::materials::Material>> mMaterial;
    ::ll::TypedStorage<8, 120, ::dragon::materials::MaterialUniformMap>                 mUniforms;
    ::ll::TypedStorage<8, 8, ::dragon::frameobject::IntraFrameAllocatorContainer*>      mIntraAllocator;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MaterialFilter(::dragon::frameobject::components::MaterialFilter&&);

    MCNAPI MaterialFilter(
        ::mce::ServerResourcePointer<dragon::ResolvedMaterialResource> const&,
        ::dragon::frameobject::IntraFrameAllocatorContainer&
    );

    MCNAPI bool _setTexture(
        ::dragon::materials::ParameterId const&,
        ::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&,
        std::optional<dragon::TextureSamplerDescription> const&,
        uint
    );

    MCNAPI ::dragon::frameobject::components::MaterialFilter clone() const;

    MCNAPI ::dragon::materials::MaterialUniformMap const& getUniformsMap() const;

    MCNAPI ::dragon::frameobject::components::MaterialFilter&
    operator=(::dragon::frameobject::components::MaterialFilter&&);

    MCNAPI std::optional<dragon::materials::ParameterId> setBuffer(
        ::dragon::materials::MaterialUniformName const&,
        ::mce::ServerResourcePointer<dragon::ResolvedShaderBufferResource> const&,
        ::dragon::materials::definition::SamplerAccess const,
        uint
    );

    MCNAPI std::optional<dragon::materials::ParameterId> setTexture(
        ::dragon::materials::MaterialUniformName const&,
        ::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&
    );

    MCNAPI std::optional<dragon::materials::ParameterId> setTexture(
        ::dragon::materials::MaterialUniformName const&,
        ::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&,
        ::dragon::TextureSamplerDescription const&,
        uint
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool materialIsLoaded(::mce::ClientResourcePointer<dragon::ResolvedMaterialResource> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::frameobject::components::MaterialFilter&&);

    MCNAPI void* $ctor(
        ::mce::ServerResourcePointer<dragon::ResolvedMaterialResource> const&,
        ::dragon::frameobject::IntraFrameAllocatorContainer&
    );
    // NOLINTEND
};

} // namespace dragon::frameobject::components
