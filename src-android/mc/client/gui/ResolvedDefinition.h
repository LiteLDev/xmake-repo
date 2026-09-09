#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ResolvedControlData.h"
#include "mc/client/gui/ResolvedPropertyData.h"
#include "mc/client/gui/ResolvedTextureData.h"

namespace UI::Resources {

struct ResolvedDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                      identifier;
    ::ll::TypedStorage<8, 24, std::vector<UI::Resources::ResolvedControlData>>  controlData;
    ::ll::TypedStorage<8, 24, std::vector<UI::Resources::ResolvedTextureData>>  textureData;
    ::ll::TypedStorage<8, 24, std::vector<UI::Resources::ResolvedPropertyData>> propertyData;
    // NOLINTEND
};

} // namespace UI::Resources
