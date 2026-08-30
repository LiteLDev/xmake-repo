#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
struct BlockBakedMaterialDataComponent;
struct BlockMaterialInstancesComponent;
namespace ClientBlockPipeline { class Material; }
namespace ClientBlockPipeline { struct BlockSchematic; }
// clang-format on

namespace ClientBlockPipeline {

struct BakedMaterialMap {
public:
    // BakedMaterialMap inner types define
    using SharedMaterial = std::shared_ptr<const ClientBlockPipeline::Material>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<const ClientBlockPipeline::Material>>> mResolvedMaterials;
    ::ll::TypedStorage<1, 1, ::TintMethod>                                                       mSingleTintMethod;
    ::ll::TypedStorage<1, 1, bool>                                                               mIsOpaqueForOccluding;
    ::ll::TypedStorage<1, 1, bool>                                                               mHasIsotropicMaterial;
    ::ll::TypedStorage<1, 1, bool>                                                               mHasTextureVariations;
    ::ll::TypedStorage<1, 1, bool>                                                               mHasAlphaMaskedTint;
    ::ll::TypedStorage<1, 1, bool>                                                               mHasTextureShifts;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<const ClientBlockPipeline::Material> _lookupMaterialInfo(
        ::ClientBlockPipeline::BlockSchematic const&,
        ::BlockMaterialInstancesComponent const&,
        std::string const&
    );

    MCNAPI void bake(::ClientBlockPipeline::BlockSchematic const&, ::BlockMaterialInstancesComponent const&);

    MCNAPI bool hasAlphaMaskedTint() const;

    MCNAPI bool hasIsotropicMaterial() const;

    MCNAPI bool hasTextureVariations() const;

    MCNAPI bool isOpaqueForOccluding() const;

    MCNAPI ulong materialCount() const;

    MCNAPI ::ClientBlockPipeline::Material const* resolveMaterial(int, uchar) const;

    MCNAPI ::TintMethod singleTintMethod() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bake(
        ::BlockBakedMaterialDataComponent&,
        ::BlockMaterialInstancesComponent const*,
        ::ClientBlockPipeline::BlockSchematic const*
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[83]> MATERIAL_INSTANCE_FIND_ERROR();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
