#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace OreUI {

class FacetRegistryFactory {
public:
    // FacetRegistryFactory inner types declare
    // clang-format off
    struct FacetData;
    // clang-format on

    // FacetRegistryFactory inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct FacetData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string const>             mName;
        ::ll::TypedStorage<4, 4, ::OreUI::FacetAvailability const> mAvailability;
        ::ll::TypedStorage<
            8,
            64,
            ::std::function<::std::unique_ptr<::OreUI::IFacet>(::OreUI::FacetRegistryLocation)> const>
            mConstructor;
        // NOLINTEND

    public:
        // prevent constructor by default
        FacetData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI FacetData(
            char const*                                                                         name,
            ::OreUI::FacetAvailability                                                          availability,
            ::std::function<::std::unique_ptr<::OreUI::IFacet>(::OreUI::FacetRegistryLocation)> constructor
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            char const*                                                                         name,
            ::OreUI::FacetAvailability                                                          availability,
            ::std::function<::std::unique_ptr<::OreUI::IFacet>(::OreUI::FacetRegistryLocation)> constructor
        );
        // NOLINTEND
    };

    using FacetConstructor = ::std::function<::std::unique_ptr<::OreUI::IFacet>(::OreUI::FacetRegistryLocation)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FacetRegistryFactory::FacetData>> mFacets;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>        mClientInstance;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                        mMinecraft;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IAppPlatform>>              mAppPlatform;
    ::ll::TypedStorage<8, 88, ::OreUI::ScreenModelProvider>                            mScreenModelProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetRegistryFactory& operator=(FacetRegistryFactory const&);
    FacetRegistryFactory(FacetRegistryFactory const&);
    FacetRegistryFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FacetRegistryFactory(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&          clientInstance,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&                appPlatform
    );

    MCAPI void _registerVanillaFacets();

    MCAPI ::std::unique_ptr<::OreUI::IFacetRegistry> createFacetRegistry(::OreUI::FacetRegistryLocation location);

    MCAPI ~FacetRegistryFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&          clientInstance,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&                appPlatform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct FacetData {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
