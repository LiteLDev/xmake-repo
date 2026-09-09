#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/game/MaterialVariationManager.h"
#include "mc/client/renderer/game/TerrainVariation.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/minecraft_renderer/game/TerrainLayerLOD.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
struct TerrainLayer;
namespace mce { class RenderMaterialGroup; }
// clang-format on

class TerrainMaterialVariationManager : public ::MaterialVariationManager {
public:
    // TerrainMaterialVariationManager inner types declare
    // clang-format off
    struct TerrainLayerKey;
    // clang-format on

    // TerrainMaterialVariationManager inner types define
    struct TerrainLayerKey {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong>             mLayerID;
        ::ll::TypedStorage<1, 1, ::TerrainLayerLOD> mLOD;
        // NOLINTEND
    };

    using TerrainLayerMaterialMap = std::map<TerrainMaterialVariationManager::TerrainLayerKey, mce::MaterialPtr>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::mce::RenderMaterialGroup*> mRenderMaterialGroup;
    ::ll::TypedStorage<8, 24, std::string> mVariationName;
    ::ll::TypedStorage<8, 24, std::string> mFullVariationName;
    ::ll::TypedStorage<8, 24, std::string> mFullParentVariationName;
    ::ll::UntypedStorage<8, 24> mSubVariations;
    ::ll::TypedStorage<8, 24, std::map<TerrainMaterialVariationManager::TerrainLayerKey, mce::MaterialPtr>> terrainLayerMaterialMap;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    TerrainMaterialVariationManager& operator=(TerrainMaterialVariationManager const&);
    TerrainMaterialVariationManager(TerrainMaterialVariationManager const&);
    TerrainMaterialVariationManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TerrainMaterialVariationManager(::mce::RenderMaterialGroup&, ::buffer_span<std::string>);

    MCNAPI void addVariation(std::string const&);

    MCNAPI ::mce::MaterialPtr const& getMaterial(::TerrainLayer const&, ::TerrainLayerLOD const) const;

    MCNAPI ::optional_ref<const TerrainMaterialVariationManager> getVariationManager(std::string const&) const;

    MCNAPI void populateMaterialList(bool const);

    MCNAPI ~TerrainMaterialVariationManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::RenderMaterialGroup&, ::buffer_span<std::string>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
