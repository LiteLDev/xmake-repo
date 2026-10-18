#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DisconnectionRequestHandler;
class ISceneStack;
class SceneFactory;
namespace OreUI { struct ConnectionErrorInfo; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DisconnectionRequestHandler;
class ISceneStack;
class SceneFactory;
namespace OreUI { struct ConnectionErrorInfo; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class ConnectionErrorInfoFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::ConnectionErrorInfoFacet> {
public:
    // ConnectionErrorInfoFacet inner types define
    using GetSceneStack = std::function<gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>>()>;

    using LaunchUri = std::function<void(const std::string&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                mDisconnectionRequestHandler;
    ::ll::UntypedStorage<8, 48>                mGetSceneStack;
    ::ll::TypedStorage<8, 16, ::SceneFactory&> mSceneFactory;
    ::ll::UntypedStorage<8, 48>                mLaunchUri;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectionErrorInfoFacet& operator=(ConnectionErrorInfoFacet const&);
    ConnectionErrorInfoFacet(ConnectionErrorInfoFacet const&);
    ConnectionErrorInfoFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConnectionErrorInfoFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ConnectionErrorInfoFacet(
        ::gsl::not_null<Bedrock::NonOwnerPointer<DisconnectionRequestHandler>>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>>()>,
        ::SceneFactory&,
        std::function<void(const std::string&)>
    );

    MCNAPI ::OreUI::ConnectionErrorInfo const getConnectionErrorInfo(int) const;

    MCNAPI void openLearnMoreLink(int) const;

    MCNAPI void tryReconnect();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static char const* const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<DisconnectionRequestHandler>>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>>()>,
        ::SceneFactory&,
        std::function<void(const std::string&)>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ConnectionErrorInfoFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::ConnectionErrorInfoFacet> {
public:
    // ConnectionErrorInfoFacet inner types define
    using LaunchUri = ::std::function<void(::std::string const&)>;

    using GetSceneStack = ::std::function<::Bedrock::NotNullNonOwnerPtr<::ISceneStack>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DisconnectionRequestHandler>>
        mDisconnectionRequestHandler;
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NotNullNonOwnerPtr<::ISceneStack>()>> mGetSceneStack;
    ::ll::TypedStorage<8, 8, ::SceneFactory&>                                                  mSceneFactory;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>>                     mLaunchUri;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectionErrorInfoFacet& operator=(ConnectionErrorInfoFacet const&);
    ConnectionErrorInfoFacet(ConnectionErrorInfoFacet const&);
    ConnectionErrorInfoFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ConnectionErrorInfoFacet(
        ::Bedrock::NotNullNonOwnerPtr<::DisconnectionRequestHandler>    disconnectionRequestHandler,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::ISceneStack>()> getSceneStack,
        ::SceneFactory&                                                 sceneFactory,
        ::std::function<void(::std::string const&)>                     launchUri
    );

    MCAPI ::OreUI::ConnectionErrorInfo const getConnectionErrorInfo(int reason) const;

    MCAPI void openLearnMoreLink(int reason) const;

    MCAPI void tryReconnect();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::DisconnectionRequestHandler>    disconnectionRequestHandler,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::ISceneStack>()> getSceneStack,
        ::SceneFactory&                                                 sceneFactory,
        ::std::function<void(::std::string const&)>                     launchUri
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class ConnectionErrorInfoFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
