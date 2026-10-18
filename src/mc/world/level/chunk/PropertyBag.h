#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::spawn::transform {

class PropertyBag {
public:
    // PropertyBag inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using Entry = std::variant<ulong, double, std::string>;
#else // @header-generator platform
    using Entry = ::std::variant<uint64, double, ::std::string>;

    using f64 = double;

    using str = ::std::string;

    using u64 = uint64;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::variant<ulong, double, std::string>>> mValues;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                              mKeys;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::variant<uint64, double, ::std::string>>> mValues;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                                 mKeys;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::spawn::transform
