#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct LavaFlammableEnum {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindLavaFlammable(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::array<const char*, 2> const& LavaFlammableToString();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
