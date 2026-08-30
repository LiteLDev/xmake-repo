#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core_graphics/ResourceManager.h"
#include "mc/external/render_dragon/materials/MaterialLocation.h"
#include "mc/external/render_dragon/materials/MaterialResource.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedMaterialResource; }
namespace dragon { struct MaterialDescription; }
// clang-format on

namespace dragon::materials {

class MaterialResourceManager
: public ::cg::
      ResourceManager<dragon::materials::MaterialResource, dragon::materials::MaterialLocation, std::unordered_map> {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_set<dragon::materials::MaterialLocation>> mMaterialsToReload;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<mce::ClientResourcePointer<dragon::ResolvedMaterialResource>>>> mMaterialsToTrim;
    ::ll::TypedStorage<4, 40, std::mutex> mMutex;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MaterialResourceManager();

    MCNAPI ::mce::ClientResourcePointer<dragon::ResolvedMaterialResource> _createMaterial(
        ::mce::CheckedResourceService<dragon::ResolvedMaterialResource>&,
        ::dragon::MaterialDescription,
        bool,
        ::Bedrock::Threading::UniqueLock<std::mutex> const&
    );

    MCNAPI ::mce::ClientResourcePointer<dragon::ResolvedMaterialResource> _createMaterialImmediate(
        ::mce::CheckedResourceService<dragon::ResolvedMaterialResource>&,
        ::dragon::MaterialDescription,
        bool,
        ::Bedrock::Threading::UniqueLock<std::mutex> const&
    );

    MCNAPI void trim();

    MCNAPI ~MaterialResourceManager();
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

} // namespace dragon::materials
