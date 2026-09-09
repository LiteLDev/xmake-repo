#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/eas/AttributeLayerSettings.h"
#include "mc/world/eas/attributes/EnvironmentAttributeData.h"
#include "mc/world/level/dimension/DimensionType.h"

namespace EAS {

struct AttributeLayerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                mName;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                 mNoiseName;
    ::ll::TypedStorage<4, 4, ::DimensionType>                             mDimensionId;
    ::ll::TypedStorage<4, 12, ::EAS::AttributeLayerSettings>              mSettings;
    ::ll::TypedStorage<8, 24, std::vector<EAS::EnvironmentAttributeData>> mAttributes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AttributeLayerData(::EAS::AttributeLayerData const&);

    MCNAPI ::EAS::AttributeLayerData& operator=(::EAS::AttributeLayerData&&);

    MCNAPI bool operator==(::EAS::AttributeLayerData const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EAS::AttributeLayerData const&);
    // NOLINTEND
};

} // namespace EAS
