#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/ActorDataComponentBase.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Vec2;
// clang-format on

struct ActorDataBoundingBoxComponent : public ::ActorDataComponentBase<std::array<float, 3>> {
#else // @header-generator platform
struct ActorDataBoundingBoxComponent : public ::ActorDataComponentBase<::std::array<float, 3>> {
#endif // @header-generator platform
public:
    // ActorDataBoundingBoxComponent inner types define
    enum class Type : int {
        Scale  = 0,
        Width  = 1,
        Height = 2,
    };
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::ActorDataBoundingBoxComponent const&) const;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
