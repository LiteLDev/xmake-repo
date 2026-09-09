#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedMaterialResource; }
// clang-format on

namespace mce::framebuilder::bgfxbridge {

struct MaterialFilterEnsuredResourceContainer {
public:
    // MaterialFilterEnsuredResourceContainer inner types declare
    // clang-format off
    struct EnsuredResources;
    // clang-format on

    // MaterialFilterEnsuredResourceContainer inner types define
    struct EnsuredResources {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 16, std::shared_ptr<mce::ClientResourcePointer<dragon::ResolvedMaterialResource>>> MeshFallbackPosUVNormalColor;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        EnsuredResources& operator=(EnsuredResources const&);
        EnsuredResources(EnsuredResources const&);
        EnsuredResources();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, ::mce::framebuilder::bgfxbridge::MaterialFilterEnsuredResourceContainer::EnsuredResources> mResources;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialFilterEnsuredResourceContainer& operator=(MaterialFilterEnsuredResourceContainer const&);
    MaterialFilterEnsuredResourceContainer(MaterialFilterEnsuredResourceContainer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MaterialFilterEnsuredResourceContainer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce::framebuilder::bgfxbridge
