#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
