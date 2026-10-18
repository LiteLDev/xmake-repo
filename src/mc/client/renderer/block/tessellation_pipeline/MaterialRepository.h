#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class AtlasItemManager;
class Experiments;
class TextureShiftManager;
struct BlockMaterialInstancesComponent;
struct TextureUVCoordinateSet;
namespace ClientBlockPipeline { class Material; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class AtlasItemManager;
class Experiments;
class TextureShiftManager;
struct BlockMaterialInstancesComponent;
struct TextureUVCoordinateSet;
namespace ClientBlockPipeline { class Material; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
class MaterialRepository {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<const ClientBlockPipeline::Material>>> mMaterials;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::AtlasItemManager const&);

    MCNAPI void initializeMaterials(
        ::BlockMaterialInstancesComponent&,
        ::AtlasItemManager const&,
        ::TextureShiftManager const&,
        ::Experiments const&,
        bool
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<ClientBlockPipeline::Material>& mDefaultMaterial();

    MCNAPI static std::vector<TextureUVCoordinateSet>& mDefaultTexture();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class MaterialRepository {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ClientBlockPipeline::Material const>>> mMaterials;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::AtlasItemManager const& atlasItemManager);

    MCAPI void initializeMaterials(
        ::BlockMaterialInstancesComponent& materialInstance,
        ::AtlasItemManager const&          atlasItemManager,
        ::TextureShiftManager const&       textureShiftManager,
        ::Experiments const&               experiments,
        bool                               fromBlockItemVisualComponent
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::TextureUVCoordinateSet>& mDefaultTexture();
    // NOLINTEND
};
#else // @header-generator platform
class MaterialRepository {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
