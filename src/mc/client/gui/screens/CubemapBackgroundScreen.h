#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/BaseScreen.h"
#include "mc/deps/core/timing/Stopwatch.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class CubemapBackgroundResources;
class IClientInstance;
class RectangleArea;
class ScreenContext;
struct FrameRenderObject;
struct ScreenSizeData;
// clang-format on

class CubemapBackgroundScreen : public ::BaseScreen {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mCubeMaterial;
    ::ll::TypedStorage<1, 1, bool>                mFlushable;
    ::ll::UntypedStorage<8, 24>                   mClient;
    ::ll::UntypedStorage<8, 24>                   mCubemapResources;
    ::ll::TypedStorage<8, 56, ::Stopwatch>        mFadeTimer;
    ::ll::TypedStorage<4, 4, float>               mAccumulatedTime;
    ::ll::TypedStorage<1, 1, bool>                mIsFading;
    // NOLINTEND

public:
    // prevent constructor by default
    CubemapBackgroundScreen();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CubemapBackgroundScreen();

    virtual void init(::ScreenSizeData const&);

    virtual void terminate();

    virtual void render(::ScreenContext&, ::FrameRenderObject const&);

    virtual bool renderGameBehind() const;

    virtual bool isShowingMenu() const;

    virtual bool screenIsNotFlushable() const;

    virtual bool renderOnlyWhenTopMost() const;

    virtual bool lowFreqRendering() const;

    virtual ::RectangleArea getAreaOfControlByName(std::string const&) const;

    virtual std::string getScreenName() const;

    virtual bool equalsScreenName(std::string_view) const;

    virtual bool containsScreenNameSubstring(std::string_view) const;

    virtual bool getShouldSendEvents();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CubemapBackgroundScreen(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<CubemapBackgroundResources>> const&,
        bool
    );

    MCNAPI void renderCubemap(::ScreenContext&, bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& FADE_TIME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<CubemapBackgroundResources>> const&,
        bool
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
    MCNAPI void $init(::ScreenSizeData const&);

    MCNAPI void $terminate();

    MCNAPI void $render(::ScreenContext&, ::FrameRenderObject const&);

    MCNAPI bool $renderGameBehind() const;

    MCNAPI bool $isShowingMenu() const;

    MCNAPI bool $screenIsNotFlushable() const;

    MCNAPI bool $renderOnlyWhenTopMost() const;

    MCNAPI bool $lowFreqRendering() const;

    MCNAPI ::RectangleArea $getAreaOfControlByName(std::string const&) const;

    MCNAPI std::string $getScreenName() const;

    MCNAPI bool $equalsScreenName(std::string_view) const;

    MCNAPI bool $containsScreenNameSubstring(std::string_view) const;

    MCNAPI bool $getShouldSendEvents();
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
#include "mc/client/gui/screens/BaseScreen.h"
#include "mc/deps/core/timing/Stopwatch.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class CubemapBackgroundResources;
class IClientInstance;
class RectangleArea;
class ScreenContext;
struct FrameRenderObject;
struct ScreenSizeData;
// clang-format on

class CubemapBackgroundScreen : public ::BaseScreen {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                          mCubeMaterial;
    ::ll::TypedStorage<1, 1, bool>                                                         mFlushable;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>            mClient;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources>> mCubemapResources;
    ::ll::TypedStorage<8, 56, ::Stopwatch>                                                 mFadeTimer;
    ::ll::TypedStorage<4, 4, float>                                                        mAccumulatedTime;
    ::ll::TypedStorage<1, 1, bool>                                                         mIsFading;
    // NOLINTEND

public:
    // prevent constructor by default
    CubemapBackgroundScreen();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CubemapBackgroundScreen() /*override*/;

    virtual void init(::ScreenSizeData const& screenSizeData) /*override*/;

    virtual void terminate() /*override*/;

    virtual void render(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj) /*override*/;

    virtual bool screenIsNotFlushable() const /*override*/;

    virtual bool renderOnlyWhenTopMost() const /*override*/;

    virtual bool lowFreqRendering() const /*override*/;

    virtual bool renderGameBehind() const /*override*/;

    virtual bool isShowingMenu() const /*override*/;

    virtual ::std::string getScreenName() const /*override*/;

    virtual bool equalsScreenName(::std::string_view comparison) const /*override*/;

    virtual bool containsScreenNameSubstring(::std::string_view substring) const /*override*/;

    virtual bool getShouldSendEvents() /*override*/;

    virtual ::RectangleArea getAreaOfControlByName(::std::string const&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CubemapBackgroundScreen(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&            client,
        ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> const& cubemapResources,
        bool                                                               flushable
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&            client,
        ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> const& cubemapResources,
        bool                                                               flushable
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init(::ScreenSizeData const& screenSizeData);

    MCAPI void $terminate();

    MCAPI void $render(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj);

    MCFOLD bool $screenIsNotFlushable() const;

    MCAPI bool $renderOnlyWhenTopMost() const;

    MCFOLD bool $lowFreqRendering() const;

    MCFOLD bool $renderGameBehind() const;

    MCFOLD bool $isShowingMenu() const;

    MCAPI ::std::string $getScreenName() const;

    MCAPI bool $equalsScreenName(::std::string_view comparison) const;

    MCAPI bool $containsScreenNameSubstring(::std::string_view substring) const;

    MCFOLD bool $getShouldSendEvents();

    MCFOLD ::RectangleArea $getAreaOfControlByName(::std::string const&) const;
    // NOLINTEND
};
#else // @header-generator platform
class CubemapBackgroundScreen {};
#endif // @header-generator platform
#endif // @header-generator platform
