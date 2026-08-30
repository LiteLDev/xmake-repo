#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FontLoadingUtils {

struct ParsedFontAliasRefData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkac9155;
    ::ll::UntypedStorage<8, 32> mUnk3434e9;
    ::ll::UntypedStorage<8, 24> mUnkea333e;
    ::ll::UntypedStorage<4, 4>  mUnk40a303;
    // NOLINTEND

public:
    // prevent constructor by default
    ParsedFontAliasRefData& operator=(ParsedFontAliasRefData const&);
    ParsedFontAliasRefData(ParsedFontAliasRefData const&);
    ParsedFontAliasRefData();
};

} // namespace FontLoadingUtils
