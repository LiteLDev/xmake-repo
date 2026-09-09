#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ProfileImageState.h"
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class Path; }
namespace OreUI { class AllowListPath; }
namespace OreUI { class AllowListProfileImage; }
namespace OreUI { class AllowListQRCode; }
namespace Social { class ProfileImageOptions; }
// clang-format on

namespace OreUI {

class IResourceAllowList : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::OreUI::AllowListPath getOrAddPath(::Core::Path) = 0;

    virtual ::OreUI::AllowListQRCode getOrAddQRCode(std::string) = 0;

    virtual ::OreUI::AllowListProfileImage getOrAddProfileImage(::Social::ProfileImageOptions const&) = 0;

    virtual void setProfileImageStatus(::Social::ProfileImageOptions const&, ::Gameface::ResourceHandlerStatus) = 0;

    virtual ::OreUI::ProfileImageState getProfileImageState(::Social::ProfileImageOptions const&) = 0;

    virtual ::Bedrock::PubSub::Subscription addProfileImageStateSubscriber(std::function<void()> const&) = 0;
    // NOLINTEND
};

} // namespace OreUI
