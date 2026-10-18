#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/ConstCompositeSceneStackView.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class ISceneStack;
// clang-format on

class CompositeSceneStackView {
public:
    // CompositeSceneStackView inner types define
    using VoidSceneVisitor = ::brstd::function_ref<void(AbstractScene&)>;

    using BoolSceneVisitor = ::brstd::function_ref<bool(AbstractScene&)>;

    using BoolConstSceneVisitor = ::brstd::function_ref<bool(const AbstractScene&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                               mMainStack;
    ::ll::UntypedStorage<8, 24>                               mClientInstanceStack;
    ::ll::TypedStorage<8, 48, ::ConstCompositeSceneStackView> mConstView;
    // NOLINTEND

public:
    // prevent constructor by default
    CompositeSceneStackView();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CompositeSceneStackView(
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&
    );

    MCNAPI void forEachAlwaysAcceptInputScreen(::brstd::function_ref<void(AbstractScene&)>, ::AbstractScene const*);

    MCNAPI void forEachAlwaysAcceptInputScreenWithTop(::brstd::function_ref<void(AbstractScene&)>);

    MCNAPI void forEachScreen(::brstd::function_ref<bool(AbstractScene&)>, bool);

    MCNAPI void forEachScreenConst(::brstd::function_ref<bool(const AbstractScene&)>, bool) const;

    MCNAPI void forEachVisibleScreen(::brstd::function_ref<void(AbstractScene&)>, bool, bool);

    MCNAPI ::AbstractScene* getActiveScene();

    MCNAPI bool hasScheduledScreens() const;

    MCNAPI void onGameEventNotification(::ui::GameEventNotification);

    MCNAPI bool update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&
    );
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/ConstCompositeSceneStackView.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class ISceneStack;
// clang-format on

class CompositeSceneStackView {
public:
    // CompositeSceneStackView inner types define
    using VoidSceneVisitor = ::brstd::function_ref<void(::AbstractScene&)>;

    using BoolSceneVisitor = ::brstd::function_ref<bool(::AbstractScene&)>;

    using BoolConstSceneVisitor = ::brstd::function_ref<bool(::AbstractScene const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack>> mMainStack;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack>> mClientInstanceStack;
    ::ll::TypedStorage<8, 48, ::ConstCompositeSceneStackView>               mConstView;
    // NOLINTEND

public:
    // prevent constructor by default
    CompositeSceneStackView();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CompositeSceneStackView(
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& mainStack,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& clientInstanceStack
    );

    MCAPI void forEachAlwaysAcceptInputScreen(
        ::brstd::function_ref<void(::AbstractScene&)> callback,
        ::AbstractScene const*                        ignoreScreen
    );

    MCAPI void forEachAlwaysAcceptInputScreenWithTop(::brstd::function_ref<void(::AbstractScene&)> callback);

    MCAPI void forEachScreen(::brstd::function_ref<bool(::AbstractScene&)> callback, bool topDown);

    MCAPI void forEachScreenConst(::brstd::function_ref<bool(::AbstractScene const&)> callback, bool topDown) const;

    MCAPI void forEachVisibleScreen(
        ::brstd::function_ref<void(::AbstractScene&)> callback,
        bool                                          tickedLastFrame,
        bool                                          splitscreenRenderBypassThisFrame
    );

    MCAPI ::AbstractScene* getActiveScene();

    MCAPI bool hasScheduledScreens() const;

    MCAPI void onGameEventNotification(::ui::GameEventNotification notification);

    MCAPI bool update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& mainStack,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& clientInstanceStack
    );
    // NOLINTEND
};
#else // @header-generator platform
class CompositeSceneStackView {};
#endif // @header-generator platform
#endif // @header-generator platform
