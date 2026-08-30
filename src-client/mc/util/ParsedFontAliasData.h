#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FontLoadingUtils {

struct ParsedFontAliasData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9ca719;
    ::ll::UntypedStorage<8, 24> mUnkb48d58;
    ::ll::UntypedStorage<4, 4>  mUnk22356d;
    ::ll::UntypedStorage<1, 1>  mUnk3d7819;
    // NOLINTEND

public:
    // prevent constructor by default
    ParsedFontAliasData& operator=(ParsedFontAliasData const&);
    ParsedFontAliasData(ParsedFontAliasData const&);
    ParsedFontAliasData();
};

} // namespace FontLoadingUtils
