#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
