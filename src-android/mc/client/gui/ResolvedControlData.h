#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ResolvedPropertyData.h"
#include "mc/client/gui/ResolvedTextureData.h"

namespace UI::Resources {

struct ResolvedControlData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                      conrolName;
    ::ll::TypedStorage<8, 24, std::vector<UI::Resources::ResolvedTextureData>>  textures;
    ::ll::TypedStorage<8, 24, std::vector<UI::Resources::ResolvedPropertyData>> proeprties;
    // NOLINTEND
};

} // namespace UI::Resources
