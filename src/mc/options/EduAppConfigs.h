#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/DataBackedAppConfigs.h"
#include "mc/options/EducationEditionOffer.h"

// auto generated forward declare list
// clang-format off
class IAppConfigData;
class IContentAccessibilityProvider;
#if defined(LL_PLAT_A) // @header-generator platform
struct AppConfigsDependencies;
struct DemoConfig;
#else // @header-generator platform
#endif // @header-generator platform
struct PackIdVersion;
#if defined(LL_PLAT_A) // @header-generator platform
struct ScreenCapabilitiesRepo;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class EduAppConfigs : public ::DataBackedAppConfigs {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::list<char>> mGlobalKey;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk74c3b8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    EduAppConfigs& operator=(EduAppConfigs const&);
    EduAppConfigs(EduAppConfigs const&);
#endif // @header-generator platform
    EduAppConfigs();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadFromData(::IAppConfigData const&);
#else // @header-generator platform
    virtual void loadFromData(::IAppConfigData const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EducationEditionOffer getEducationEditionOffering() const;
#else // @header-generator platform
    virtual ::EducationEditionOffer getEducationEditionOffering() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<IContentAccessibilityProvider> createContentAccessibility() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::IContentAccessibilityProvider> createContentAccessibility() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PackIdVersion const& EDUOreUIResourcePack();

    MCNAPI static ::PackIdVersion const& EDUResourcePack();
    // NOLINTEND
};
