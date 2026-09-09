#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/external/render_dragon/atlas/IAtlasTextureService.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedImageResource; }
namespace dragon { class ResolvedTextureResource; }
// clang-format on

namespace dragon::atlas {

class AtlasTextureService : public ::dragon::atlas::IAtlasTextureService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::CheckedResourceService<dragon::ResolvedTextureResource>&> mService;
    ::ll::TypedStorage<8, 8, ::mce::CheckedResourceService<dragon::ResolvedImageResource>&>   mImageService;
    // NOLINTEND

public:
    // prevent constructor by default
    AtlasTextureService& operator=(AtlasTextureService const&);
    AtlasTextureService(AtlasTextureService const&);
    AtlasTextureService();
};

} // namespace dragon::atlas
