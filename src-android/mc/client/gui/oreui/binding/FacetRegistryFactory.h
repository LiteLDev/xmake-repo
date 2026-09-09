#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/ScreenModelProvider.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/gui/oreui/interface/FacetRegistryLocation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class IAppPlatform;
class IClientInstance;
class IMinecraftGame;
namespace OreUI { class IFacet; }
namespace OreUI { class IFacetRegistry; }
// clang-format on

namespace OreUI {

class FacetRegistryFactory {
public:
    // FacetRegistryFactory inner types declare
    // clang-format off
    struct FacetData;
    // clang-format on

    // FacetRegistryFactory inner types define
    struct FacetData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string const>               mName;
        ::ll::TypedStorage<4, 4, ::OreUI::FacetAvailability const> mAvailability;
        ::ll::UntypedStorage<8, 48>                                mConstructor;
        // NOLINTEND

    public:
        // prevent constructor by default
        FacetData& operator=(FacetData const&);
        FacetData();
    };

    using FacetConstructor = std::function<std::unique_ptr<OreUI::IFacet>(OreUI::FacetRegistryLocation)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<OreUI::FacetRegistryFactory::FacetData>> mFacets;
    ::ll::UntypedStorage<8, 24>                                                    mClientInstance;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                    mMinecraft;
    ::ll::UntypedStorage<8, 24>                                                    mAppPlatform;
    ::ll::TypedStorage<8, 88, ::OreUI::ScreenModelProvider>                        mScreenModelProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetRegistryFactory& operator=(FacetRegistryFactory const&);
    FacetRegistryFactory(FacetRegistryFactory const&);
    FacetRegistryFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FacetRegistryFactory(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&,
        ::Bedrock::NonOwnerPointer<IAppPlatform> const&
    );

    MCNAPI void _registerVanillaFacets();

    MCNAPI std::unique_ptr<OreUI::IFacetRegistry> createFacetRegistry(::OreUI::FacetRegistryLocation);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>> const&,
        ::Bedrock::NonOwnerPointer<IAppPlatform> const&
    );
    // NOLINTEND
};

} // namespace OreUI
