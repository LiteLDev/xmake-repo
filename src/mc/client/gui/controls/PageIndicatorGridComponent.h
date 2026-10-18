#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class GridComponent;
class PageIndicatorManagerComponent;
class UIControl;
// clang-format on

class PageIndicatorGridComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                            mlastReportedSubpage;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPageIndicatorManagerSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mGridCompletionSub;
    ::ll::TypedStorage<8, 24, std::string>                     mTargetWhenIsCurrentPage;
    ::ll::TypedStorage<8, 24, std::string>                     mTargetWhenNotCurrentPage;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>>        mTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    PageIndicatorGridComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PageIndicatorGridComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual void reset();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _adjustVisibilityOfCurrentPage(bool const);

    MCNAPI void _findCorrespondingDescendant(std::shared_ptr<UIControl>, bool const, ulong&);

    MCNAPI void _registerWithManager();

    MCNAPI ::PageIndicatorManagerComponent* getPageIndicatorManager();

    MCNAPI void notifyGridCompletedConstruction(ulong);

    MCNAPI void notifySubPageChanged(ulong);

    MCNAPI void setTarget(std::shared_ptr<UIControl>);

    MCNAPI void setTargetWhenIsCurrentPage(std::string const&);

    MCNAPI void setTargetWhenNotCurrentPage(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<UIComponent> $clone(::UIControl&) const;

    MCNAPI void $reset();
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
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class PageIndicatorManagerComponent;
class UIControl;
// clang-format on

class PageIndicatorGridComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                           mlastReportedSubpage;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPageIndicatorManagerSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mGridCompletionSub;
    ::ll::TypedStorage<8, 32, ::std::string>                   mTargetWhenIsCurrentPage;
    ::ll::TypedStorage<8, 32, ::std::string>                   mTargetWhenNotCurrentPage;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>    mTarget;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PageIndicatorGridComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void
    _findCorrespondingDescendant(::std::shared_ptr<::UIControl> child, bool const isSelected, uint64& countFound);

    MCAPI void _registerWithManager();

    MCAPI ::PageIndicatorManagerComponent* getPageIndicatorManager();

    MCAPI void notifyGridCompletedConstruction(uint64);

    MCAPI void notifySubPageChanged(uint64 newPage);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCFOLD void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class PageIndicatorGridComponent {};
#endif // @header-generator platform
#endif // @header-generator platform
