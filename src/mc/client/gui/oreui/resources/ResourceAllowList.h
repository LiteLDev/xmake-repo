#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceAllowList.h"
#include "mc/client/gui/oreui/interface/ProfileImageState.h"
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Core { class Path; }
namespace OreUI { class AllowListPath; }
namespace OreUI { class AllowListProfileImage; }
namespace OreUI { class AllowListQRCode; }
namespace OreUI { struct ResourcePath; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ResourceAllowList : public ::OreUI::IResourceAllowList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>            mDataPath;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::ResourcePath>>         mPaths;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                 mQRCodeTargets;
    ::ll::TypedStorage<8, 24, ::std::vector<::Social::ProfileImageOptions>> mProfileImages;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::Social::ProfileImageOptions, ::Gameface::ResourceHandlerStatus>>
        mProfileImageStatusMap;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mNotifyProfileImageSubscribers;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceAllowList();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::OreUI::AllowListPath getOrAddPath(::Core::Path path) /*override*/;

    virtual ::OreUI::AllowListQRCode getOrAddQRCode(::std::string target) /*override*/;

    virtual ::OreUI::AllowListProfileImage
    getOrAddProfileImage(::Social::ProfileImageOptions const& options) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    addProfileImageStateSubscriber(::std::function<void()> const& callback) /*override*/;

    virtual void setProfileImageStatus(
        ::Social::ProfileImageOptions const& options,
        ::Gameface::ResourceHandlerStatus    status
    ) /*override*/;

    virtual ::OreUI::ProfileImageState getProfileImageState(::Social::ProfileImageOptions const& options) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ResourceAllowList(::Core::Path const& packagePath);

    MCAPI ::std::optional<::OreUI::ResourcePath> getResourcePath(::std::string const& id) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::Path const& packagePath);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::OreUI::AllowListPath $getOrAddPath(::Core::Path path);

    MCAPI ::OreUI::AllowListQRCode $getOrAddQRCode(::std::string target);

    MCAPI ::OreUI::AllowListProfileImage $getOrAddProfileImage(::Social::ProfileImageOptions const& options);

    MCAPI ::Bedrock::PubSub::Subscription $addProfileImageStateSubscriber(::std::function<void()> const& callback);

    MCAPI void
    $setProfileImageStatus(::Social::ProfileImageOptions const& options, ::Gameface::ResourceHandlerStatus status);

    MCAPI ::OreUI::ProfileImageState $getProfileImageState(::Social::ProfileImageOptions const& options);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ResourceAllowList {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
