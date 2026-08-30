#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ColorExpr.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ColorGradient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::vector<SharedTypes::v1_20_80::ColorExpr>>>     mColorArray;
    ::ll::TypedStorage<8, 32, std::optional<std::map<float, SharedTypes::v1_20_80::ColorExpr>>> mColorMap;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorGradient(ColorGradient const&);
    ColorGradient();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_20_80::ColorGradient& operator=(::SharedTypes::v1_20_80::ColorGradient&&);

    MCNAPI bool operator==(::SharedTypes::v1_20_80::ColorGradient const&) const;

    MCNAPI ~ColorGradient();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
