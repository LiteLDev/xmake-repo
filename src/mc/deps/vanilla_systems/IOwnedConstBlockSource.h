#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
// clang-format on

namespace VanillaSystems {

class IOwnedConstBlockSource {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOwnedConstBlockSource() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IConstBlockSource const* updateBlockSourceForEntity(::StrictEntityContext const&) = 0;
#else // @header-generator platform
    virtual ::IConstBlockSource const* updateBlockSourceForEntity(::StrictEntityContext const& entity) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace VanillaSystems
