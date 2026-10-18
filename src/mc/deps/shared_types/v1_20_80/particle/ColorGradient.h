#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ColorExpr.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
namespace SharedTypes::v1_20_80 { struct ColorExpr; }
#endif // @header-generator platform
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ColorGradient {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::SharedTypes::v1_20_80::ColorExpr>>>     mColorArray;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<float, ::SharedTypes::v1_20_80::ColorExpr>>> mColorMap;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
