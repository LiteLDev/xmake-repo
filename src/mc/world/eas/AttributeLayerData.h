#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/eas/AttributeLayerSettings.h"
#include "mc/world/eas/attributes/EnvironmentAttributeData.h"
#include "mc/world/level/dimension/DimensionType.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace EAS {

struct AttributeLayerData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                mName;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                 mNoiseName;
    ::ll::TypedStorage<4, 4, ::DimensionType>                             mDimensionId;
    ::ll::TypedStorage<4, 12, ::EAS::AttributeLayerSettings>              mSettings;
    ::ll::TypedStorage<8, 24, std::vector<EAS::EnvironmentAttributeData>> mAttributes;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk34e5f0;
    ::ll::UntypedStorage<8, 40> mUnk77c8f5;
    ::ll::UntypedStorage<4, 4>  mUnk6bdb54;
    ::ll::UntypedStorage<4, 12> mUnk81fd70;
    ::ll::UntypedStorage<8, 24> mUnkcfcce2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AttributeLayerData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AttributeLayerData(::EAS::AttributeLayerData const&);

    MCNAPI ::EAS::AttributeLayerData& operator=(::EAS::AttributeLayerData&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::EAS::AttributeLayerData const&) const;
#else // @header-generator platform
    MCNAPI ::EAS::AttributeLayerData& operator=(::EAS::AttributeLayerData const&);

    MCNAPI bool operator==(::EAS::AttributeLayerData const& rhs) const;

    MCNAPI ~AttributeLayerData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EAS::AttributeLayerData const&);
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace EAS
