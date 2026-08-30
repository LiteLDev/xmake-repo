#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/DataBackedAppConfigs.h"
#include "mc/options/EducationEditionOffer.h"

// auto generated forward declare list
// clang-format off
class IAppConfigData;
class IContentAccessibilityProvider;
struct AppConfigsDependencies;
struct DemoConfig;
struct PackIdVersion;
struct ScreenCapabilitiesRepo;
// clang-format on

class EduAppConfigs : public ::DataBackedAppConfigs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::list<char>> mGlobalKey;
    // NOLINTEND

public:
    // prevent constructor by default
    EduAppConfigs();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void loadFromData(::IAppConfigData const&);

    virtual ::EducationEditionOffer getEducationEditionOffering() const;

    virtual std::unique_ptr<IContentAccessibilityProvider> createContentAccessibility() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PackIdVersion const& EDUOreUIResourcePack();

    MCNAPI static ::PackIdVersion const& EDUResourcePack();
    // NOLINTEND
};
