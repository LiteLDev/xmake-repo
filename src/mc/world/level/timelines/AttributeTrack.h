#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/eas/attributes/BoolAttribute.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace EAS { class AttributeLayer; }
#else // @header-generator platform
namespace EAS { class BoolAttribute; }
#endif // @header-generator platform
namespace EAS { class ColorAttribute; }
namespace EAS { class FloatAttribute; }
// clang-format on

class AttributeTrack {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // AttributeTrack inner types declare
    // clang-format off
    template<typename T0> class AttributeTrackImpl;
    // clang-format on

#endif // @header-generator platform
    // AttributeTrack inner types define
    template <typename T0>
#if defined(LL_PLAT_A) // @header-generator platform
    struct AttributeTrackImpl {};
#else // @header-generator platform
    class AttributeTrackImpl {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using AttributeTrackVariant = std::variant<
        AttributeTrack::AttributeTrackImpl<EAS::BoolAttribute>,
        AttributeTrack::AttributeTrackImpl<EAS::ColorAttribute>,
        AttributeTrack::AttributeTrackImpl<EAS::FloatAttribute>>;
#else // @header-generator platform
    using AttributeTrackVariant = ::std::variant<
        ::AttributeTrack::AttributeTrackImpl<::EAS::BoolAttribute>,
        ::AttributeTrack::AttributeTrackImpl<::EAS::ColorAttribute>,
        ::AttributeTrack::AttributeTrackImpl<::EAS::FloatAttribute>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 80> mImpl;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        80,
        ::std::variant<
            ::AttributeTrack::AttributeTrackImpl<::EAS::BoolAttribute>,
            ::AttributeTrack::AttributeTrackImpl<::EAS::ColorAttribute>,
            ::AttributeTrack::AttributeTrackImpl<::EAS::FloatAttribute>>>
        mImpl;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    AttributeTrack();
#else // @header-generator platform
#endif // @header-generator platform
};
