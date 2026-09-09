#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { template<typename T0, int T1> class BasicStackString; }
// clang-format on

namespace Core {

class Path : public ::Core::PathBuffer<std::string> {
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::Path const& EMPTY();
    // NOLINTEND
};

} // namespace Core
