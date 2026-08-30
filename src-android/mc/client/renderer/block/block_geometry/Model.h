#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/block_geometry/Element.h"
#include "mc/common/GameVersion.h"

namespace BlockGeometry {

struct Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::GameVersion>                                mVersion;
    ::ll::TypedStorage<8, 24, std::string>                                  mName;
    ::ll::TypedStorage<8, 24, std::string>                                  mParent;
    ::ll::TypedStorage<8, 24, std::vector<BlockGeometry::Element>>          mElements;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mTextureMap;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                     mTextureList;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                     mTextureStack;
    // NOLINTEND
};

} // namespace BlockGeometry
