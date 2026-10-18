#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20::Brain {

struct MemorySetterProxy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                 mMemoryName;
    ::ll::TypedStorage<8, 32, std::variant<bool, int, float, std::string>> mValue;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                   mMemoryName;
    ::ll::TypedStorage<8, 40, ::std::variant<bool, int, float, ::std::string>> mValue;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain
