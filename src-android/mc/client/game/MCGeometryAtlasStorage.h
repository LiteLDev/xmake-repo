#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/GeometryAtlasStorage.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IOffscreenPaperDollRenderer; }
namespace dragon::atlas { class IAtlasRenderOperations; }
namespace dragon::atlas { class IAtlasUserOperations; }
// clang-format on

struct MCGeometryAtlasStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::GeometryAtlasStorage>                           mStorage;
    ::ll::TypedStorage<8, 16, std::shared_ptr<dragon::atlas::IAtlasRenderOperations>> mRenderOperations;
    ::ll::TypedStorage<8, 16, std::shared_ptr<dragon::atlas::IAtlasUserOperations>>   mUserOperations;
    // NOLINTEND
};
