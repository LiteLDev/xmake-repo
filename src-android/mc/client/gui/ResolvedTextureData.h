#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace UI::Resources {

struct ResolvedTextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> identifier;
    ::ll::TypedStorage<8, 24, std::string> path;
    ::ll::TypedStorage<8, 24, std::string> uvSize;
    ::ll::TypedStorage<8, 24, std::string> uvScale;
    ::ll::TypedStorage<8, 24, std::string> nineSliceSize;
    // NOLINTEND
};

} // namespace UI::Resources
