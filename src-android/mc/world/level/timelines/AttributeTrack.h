#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/eas/attributes/BoolAttribute.h"

// auto generated forward declare list
// clang-format off
namespace EAS { class AttributeLayer; }
namespace EAS { class ColorAttribute; }
namespace EAS { class FloatAttribute; }
// clang-format on

class AttributeTrack {
public:
    // AttributeTrack inner types define
    template <typename T0>
    struct AttributeTrackImpl {};

    using AttributeTrackVariant = std::variant<
        AttributeTrack::AttributeTrackImpl<EAS::BoolAttribute>,
        AttributeTrack::AttributeTrackImpl<EAS::ColorAttribute>,
        AttributeTrack::AttributeTrackImpl<EAS::FloatAttribute>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mImpl;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeTrack();
};
