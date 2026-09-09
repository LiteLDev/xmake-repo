#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceAllowList.h"
#include "mc/client/gui/oreui/interface/ProfileImageState.h"
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"
#include "mc/client/gui/oreui/resources/ResourcePath.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Core { class Path; }
namespace OreUI { class AllowListPath; }
namespace OreUI { class AllowListProfileImage; }
namespace OreUI { class AllowListQRCode; }
// clang-format on

namespace OreUI {

class ResourceAllowList : public ::OreUI::IResourceAllowList {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mDataPath;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::ResourcePath>> mPaths;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mQRCodeTargets;
    ::ll::TypedStorage<8, 24, std::vector<Social::ProfileImageOptions>> mProfileImages;
    ::ll::TypedStorage<8, 40, std::unordered_map<Social::ProfileImageOptions, Gameface::ResourceHandlerStatus>> mProfileImageStatusMap;
    ::ll::UntypedStorage<8, 88> mNotifyProfileImageSubscribers;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceAllowList();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourceAllowList();

    virtual ::OreUI::AllowListPath getOrAddPath(::Core::Path);

    virtual ::OreUI::AllowListQRCode getOrAddQRCode(std::string);

    virtual ::OreUI::AllowListProfileImage getOrAddProfileImage(::Social::ProfileImageOptions const&);

    virtual void setProfileImageStatus(::Social::ProfileImageOptions const&, ::Gameface::ResourceHandlerStatus);

    virtual ::OreUI::ProfileImageState getProfileImageState(::Social::ProfileImageOptions const&);

    virtual ::Bedrock::PubSub::Subscription addProfileImageStateSubscriber(std::function<void()> const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ResourceAllowList(::Core::Path const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::OreUI::AllowListPath $getOrAddPath(::Core::Path);

    MCNAPI ::OreUI::AllowListQRCode $getOrAddQRCode(std::string);

    MCNAPI ::OreUI::AllowListProfileImage $getOrAddProfileImage(::Social::ProfileImageOptions const&);

    MCNAPI void $setProfileImageStatus(::Social::ProfileImageOptions const&, ::Gameface::ResourceHandlerStatus);

    MCNAPI ::OreUI::ProfileImageState $getProfileImageState(::Social::ProfileImageOptions const&);

    MCNAPI ::Bedrock::PubSub::Subscription $addProfileImageStateSubscriber(std::function<void()> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
