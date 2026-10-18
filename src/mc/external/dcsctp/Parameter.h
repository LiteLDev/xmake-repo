#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class Parameter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Parameter() = default;

    virtual void SerializeTo(::std::vector<uchar>& out) const = 0;

    virtual ::std::string ToString() const = 0;
    // NOLINTEND
};

} // namespace dcsctp
#endif // @header-generator platform
