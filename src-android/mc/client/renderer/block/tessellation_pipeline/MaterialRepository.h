#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AtlasItemManager;
class Experiments;
class TextureShiftManager;
struct BlockMaterialInstancesComponent;
struct TextureUVCoordinateSet;
namespace ClientBlockPipeline { class Material; }
// clang-format on

namespace ClientBlockPipeline {

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

} // namespace ClientBlockPipeline
