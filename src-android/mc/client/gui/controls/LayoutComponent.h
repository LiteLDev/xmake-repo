#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/AnchorPoint.h"
#include "mc/client/gui/Draggable.h"
#include "mc/client/gui/LayoutAxisOffsetContainerType.h"
#include "mc/client/gui/LayoutOffset.h"
#include "mc/client/gui/PriorityRule.h"
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/client/gui/screens/LayoutVariableType.h"

// auto generated forward declare list
// clang-format off
class LayoutVariable;
class LayoutVariables;
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class VariableRef;
class VisualTree;
struct ScreenEvent;
// clang-format on

class LayoutComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<LayoutVariables>>                  mAllVariables;
    ::ll::TypedStorage<8, 88, std::array<std::unique_ptr<LayoutVariable>, 11>> mControlVariables;
    ::ll::TypedStorage<8, 56, ::ui::LayoutOffset>                              mOffset;
    ::ll::TypedStorage<8, 56, ::ui::LayoutOffset>                              mSize;
    ::ll::TypedStorage<8, 56, ::ui::LayoutOffset>                              mMinSize;
    ::ll::TypedStorage<8, 56, ::ui::LayoutOffset>                              mMaxSize;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>          mOffsetDelta;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>          mGridDimensions;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>          mDragPosition;
    ::ll::TypedStorage<1, 1, ::ui::Draggable>                                  mDraggable;
    ::ll::TypedStorage<1, 1, ::ui::AnchorPoint>                                mAnchorFrom;
    ::ll::TypedStorage<1, 1, ::ui::AnchorPoint>                                mAnchorTo;
    ::ll::TypedStorage<1, 1, ::ui::PriorityRule>                               mPriorityRule;
    ::ll::TypedStorage<4, 4, int>                                              mPriority;
    bool                                                                       mIsBeingDragged            : 1;
    bool                                                                       mContained                 : 1;
    bool                                                                       mFollowsCursor             : 1;
    bool                                                                       mFollowsCursorInsideParent : 1;
    bool                                                                       mActive                    : 1;
    bool                                                                       mInheritMaxSiblingWidth    : 1;
    bool                                                                       mInheritMaxSiblingHeight   : 1;
    bool                                                                       mIsDelayingLayout          : 1;
    bool                                                                       mIsInitialized             : 1;
    // NOLINTEND

public:
    // prevent constructor by default
    LayoutComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LayoutComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual ::ComponentReceiveActionType receive(::VisualTree&, ::ScreenInputContext&, ::UIAnimationController&, ::ScreenEvent const&);

    virtual void onNotifyChildAdded();

    virtual void onRemoved();

    virtual void onAdded();

    virtual void reset();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _clampOffsetDeltaToParentSize(::UIControl const* const);

    MCNAPI std::shared_ptr<LayoutVariables> _getLayoutVariables();

    MCNAPI bool _isVariableIsSupported(::LayoutVariableType) const;

    MCNAPI int _recursiveInitialize(std::shared_ptr<LayoutVariables>&, bool, bool);

    MCNAPI ::ui::AnchorPoint getAnchorFrom() const;

    MCNAPI ::ui::AnchorPoint getAnchorTo() const;

    MCNAPI ::ui::Draggable getDraggable() const;

    MCNAPI bool getInheritMaxSiblingHeight() const;

    MCNAPI bool getInheritMaxSiblingWidth() const;

    MCNAPI ::ui::LayoutOffset const& getMaxSize() const;

    MCNAPI ::ui::LayoutOffset const& getMinSize() const;

    MCNAPI ::ui::LayoutOffset const& getOffset() const;

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0> const& getOffsetDelta() const;

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0> const getPositionMinusOffsetDelta() const;

    MCNAPI int getPriority() const;

    MCNAPI ::ui::PriorityRule getPriorityRule() const;

    MCNAPI ::ui::LayoutOffset const& getSize() const;

    MCNAPI ::LayoutVariable* getVariable(::LayoutVariableType);

    MCNAPI bool hasMaxSize() const;

    MCNAPI bool hasOffsetAxisType(::LayoutVariableType, ::ui::LayoutAxisOffsetContainerType) const;

    MCNAPI bool hasSizeAxisType(::LayoutVariableType, ::ui::LayoutAxisOffsetContainerType) const;

    MCNAPI void invalidateVariableDependencies(::VariableRef&, bool);

    MCNAPI bool isActive() const;

    MCNAPI bool isDelayingLayout() const;

    MCNAPI bool isInitialized() const;

    MCNAPI void layout(std::initializer_list<LayoutVariableType>, bool);

    MCNAPI int recursiveInitialize(std::shared_ptr<LayoutVariables>&, bool);

    MCNAPI void reinitialize(std::initializer_list<LayoutVariableType>);

    MCNAPI void removeDeadDependencies();

    MCNAPI void removeDependencies();

    MCNAPI void setAnchorFrom(::ui::AnchorPoint);

    MCNAPI void setAnchorTo(::ui::AnchorPoint);

    MCNAPI void setContained(bool);

    MCNAPI void setDelayLayout(bool);

    MCNAPI void setDraggable(::ui::Draggable);

    MCNAPI void setFollowsCursor(bool const);

    MCNAPI void setFollowsCursorInsideParent(bool const);

    MCNAPI void setInactive();

    MCNAPI void setInheritMaxSiblingHeight(bool);

    MCNAPI void setInheritMaxSiblingWidth(bool);

    MCNAPI void setMaxSize(::ui::LayoutOffset const&);

    MCNAPI void setMinSize(::ui::LayoutOffset const&);

    MCNAPI void setOffset(::ui::LayoutOffset const&);

    MCNAPI void setOffsetDelta(::glm::vec<2, float, (glm::qualifier)0> const&, ::UIControl const* const);

    MCNAPI void setPriority(int);

    MCNAPI void setPriorityRule(::ui::PriorityRule);

    MCNAPI void setSize(::ui::LayoutOffset const&);

    MCNAPI void setVariableOverrideValue(::LayoutVariableType, float);
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

    MCNAPI ::ComponentReceiveActionType
    $receive(::VisualTree&, ::ScreenInputContext&, ::UIAnimationController&, ::ScreenEvent const&);

    MCNAPI void $onNotifyChildAdded();

    MCNAPI void $onRemoved();

    MCNAPI void $onAdded();

    MCNAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
