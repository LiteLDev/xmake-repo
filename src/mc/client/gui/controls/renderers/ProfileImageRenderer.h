#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/client/gui/screens/UIBatchType.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIScene;
namespace mce { struct Image; }
// clang-format on

class ProfileImageRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::Social::ProfileImageOptions>                mProfileImageOptions;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                 mTaskGroup;
    ::ll::TypedStorage<8, 24, std::optional<Bedrock::PubSub::Subscription>> mProfileImageChangedSubscription;
    ::ll::TypedStorage<1, 1, bool>                                          mIsLoadingImage;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Image>>                  mImage;
    ::ll::UntypedStorage<1, 24>                                             mTexture;
    ::ll::TypedStorage<1, 1, bool>                                          mFetchReturnedEmpty;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProfileImageRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    virtual ::UIBatchType getBatchType() const;

    virtual int getCustomId() const;

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProfileImageRenderer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<UICustomRenderer> $clone() const;

    MCNAPI bool $update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    MCNAPI ::UIBatchType $getBatchType() const;

    MCNAPI int $getCustomId() const;

    MCNAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/client/gui/screens/UIBatchType.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIScene;
namespace mce { struct Image; }
// clang-format on

class ProfileImageRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::Social::ProfileImageOptions>                    mProfileImageOptions;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                     mTaskGroup;
    ::ll::TypedStorage<8, 24, ::std::optional<::Bedrock::PubSub::Subscription>> mProfileImageChangedSubscription;
    ::ll::TypedStorage<1, 1, bool>                                              mIsLoadingImage;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Image>>                  mImage;
    ::ll::TypedStorage<8, 24, ::mce::ClientTexture>                             mTexture;
    ::ll::TypedStorage<1, 1, bool>                                              mFetchReturnedEmpty;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProfileImageRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene) /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl& owner, int) /*override*/;

    virtual ::UIBatchType getBatchType() const /*override*/;

    virtual int getCustomId() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ProfileImageRenderer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene);

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl& owner, int);

    MCFOLD ::UIBatchType $getBatchType() const;

    MCFOLD int $getCustomId() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ProfileImageRenderer {};
#endif // @header-generator platform
#endif // @header-generator platform
