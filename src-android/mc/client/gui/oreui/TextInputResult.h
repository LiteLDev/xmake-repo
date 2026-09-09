#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::InputUtils {

struct TextInputResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> addedChars;
    ::ll::TypedStorage<8, 24, std::string> removedChars;
    ::ll::TypedStorage<8, 24, std::string> invalidChars;
    ::ll::TypedStorage<8, 8, ulong>        index;
    ::ll::TypedStorage<8, 24, std::string> text;
    // NOLINTEND
};

} // namespace OreUI::InputUtils
