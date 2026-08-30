#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ChildInsertPosition.h"
#include "mc/client/gui/NameResolutionScope.h"
#include "mc/client/gui/VisibilityFlag.h"
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class ControlScreenAction;
class CustomFrameUpdateComponent;
class RectangleArea;
class RenderableComponent;
class ScreenInputContext;
class UIAnimationController;
class UIComponent;
class UIFrameUpdateContext;
class UIPropertyBag;
class VisualTree;
struct ScreenEvent;
// clang-format on

class UIControl : public ::std::enable_shared_from_this<UIControl> {
public:
    // UIControl inner types declare
    // clang-format off
    struct ControlResolutionInfo;
    // clang-format on

    // UIControl inner types define
    struct ControlResolutionInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>              targetControlName;
        ::ll::TypedStorage<4, 4, ::ui::NameResolutionScope> scope;
        ::ll::UntypedStorage<8, 48>                         setter;
        // NOLINTEND

    public:
        // prevent constructor by default
        ControlResolutionInfo& operator=(ControlResolutionInfo const&);
    };

    using CompIdType = ulong;

    using NameResolverFunc = std::function<void(UIControl&, std::shared_ptr<UIControl>)>;

    using PostCreateFunc = std::function<void(UIControl&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>                                               mCachedPosition;
    bool                                                                     mCachedPositionDirty       : 1;
    bool                                                                     mHover                     : 1;
    ::ui::VisibilityFlag                                                     mVisible                   : 2;
    bool                                                                     mIsVisibleInTree           : 1;
    bool                                                                     mEnabled                   : 1;
    bool                                                                     mAllAncestorsEnabled       : 1;
    bool                                                                     mSelected                  : 1;
    bool                                                                     mClipsChildren             : 1;
    bool                                                                     mAllowClipping             : 1;
    bool                                                                     mIsClipped                 : 1;
    bool                                                                     mEnableClippingScissorTest : 1;
    bool                                                                     mIsTemplate                : 1;
    bool                                                                     mPropagateAlpha            : 1;
    bool                                                                     mDelayCollectionUpdate     : 1;
    bool                                                                     mTextToSpeechTriggered     : 1;
    ::ll::TypedStorage<2, 2, ushort>                                         mControlCollectionFlag;
    ::ll::TypedStorage<8, 24, std::string>                                   mName;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>        mParentRelativePosition;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>        mSize;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>        mMinSize;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>        mMaxSize;
    ::ll::TypedStorage<4, 4, float>                                          mAlpha;
    ::ll::TypedStorage<4, 4, int>                                            mZOrder;
    ::ll::TypedStorage<4, 4, int>                                            mLayer;
    ::ll::TypedStorage<4, 8, ::Vec2>                                         mClipOffset;
    ::ll::TypedStorage<4, 4, uint>                                           mClipChangeEventId;
    ::ll::TypedStorage<8, 8, std::unique_ptr<UIPropertyBag>>                 mPropertyBag;
    ::ll::TypedStorage<8, 8, std::unique_ptr<UIPropertyBag>>                 mPropertyBagToPropagateToChildren;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>>                      mParent;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIControl>>>       mChildren;
    ::ll::TypedStorage<8, 8, ulong>                                          mComponentsInUse;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<UIComponent>>>     mComponents;
    ::ll::TypedStorage<8, 24, std::vector<RenderableComponent*>>             mRenderableComponentLookup;
    ::ll::TypedStorage<8, 24, std::vector<CustomFrameUpdateComponent*>>      mCustomFrameUpdateComponentLookup;
    ::ll::TypedStorage<8, 24, std::vector<UIControl::ControlResolutionInfo>> mControlResolvers;
    ::ll::TypedStorage<8, 24, std::vector<std::function<void(UIControl&)>>>  mPostCreateVector;
    ::ll::TypedStorage<8, 8, ::ControlScreenAction&>                         mControlScreenAction;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>>                      mModalAncestor;
    // NOLINTEND

public:
    // prevent constructor by default
    UIControl& operator=(UIControl const&);
    UIControl(UIControl const&);
    UIControl();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint _getComponentIndexFromBitId(ulong) const;

    MCNAPI void _onRemoved();

    MCNAPI void _propagateLockStateChange(bool);

    MCNAPI void _resolveControlNames(::UIControl&);

    MCNAPI void _resolvePostCreate();

    MCNAPI void _setCachedPosition() const;

    MCNAPI void _setPositionDirty();

    MCNAPI void _setVisible(::ui::VisibilityFlag, bool, bool, bool);

    MCNAPI void _storeComponentInLookup(::UIComponent&);

    MCNAPI void addChild(std::shared_ptr<UIControl>, ::ui::ChildInsertPosition);

    MCNAPI void addControlCollectionFlag(ushort);

    MCNAPI void appendPropertyBag(::UIPropertyBag const&);

    MCNAPI bool areAllAncestorsEnabled() const;

    MCNAPI ::ComponentReceiveActionType broadcastEvent(::UIComponent*, ::ScreenEvent const&);

    MCNAPI ::ComponentReceiveActionType broadcastEvent(
        ::VisualTree&,
        ::ScreenInputContext&,
        ::UIAnimationController&,
        ::UIComponent*,
        ::ScreenEvent const&
    );

    MCNAPI bool canBeFocused() const;

    MCNAPI bool changeClipState(bool);

    MCNAPI void clearControlCollectionFlag();

    MCNAPI std::shared_ptr<UIControl> clone(::UIControl*) const;

    MCNAPI bool containsPoint(::glm::vec<2, float, (glm::qualifier)0> const&) const;

    MCNAPI void findAllCollectionIndices(::brstd::function_ref<void(const std::string&, int)>);

    MCNAPI int findCollectionIndex(std::string const&) const;

    MCNAPI void foreachRenderableComponents(::brstd::function_ref<void(RenderableComponent&)>) const;

    MCNAPI ::RectangleArea getAABB() const;

    MCNAPI bool getAllowClipping() const;

    MCNAPI float getAlpha() const;

    MCNAPI std::shared_ptr<UIControl> getAncestorWhere(::brstd::function_ref<bool(const UIControl&)>);

    MCNAPI std::vector<std::shared_ptr<UIControl>> const& getChildren();

    MCNAPI std::vector<std::shared_ptr<const UIControl>> const& getChildren() const;

    MCNAPI uint getClipChangeEventId() const;

    MCNAPI ::Vec2 getClipOffset() const;

    MCNAPI bool getClipState() const;

    MCNAPI bool getClipsChildren() const;

    MCNAPI bool getDelayCollectionUpdate() const;

    MCNAPI bool getEnableScissorTestForClipping() const;

    MCNAPI bool getEnabled() const;

    MCNAPI bool getHover() const;

    MCNAPI int getLayer() const;

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0> const& getMaxSize() const;

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0> const& getMinSize() const;

    MCNAPI std::shared_ptr<UIControl> getModalAncestor();

    MCNAPI std::weak_ptr<UIControl> getModalAncestorWeak();

    MCNAPI std::string const& getName() const;

    MCNAPI std::shared_ptr<UIControl> getParent();

    MCNAPI std::shared_ptr<const UIControl> getParent() const;

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0> const& getParentRelativePosition() const;

    MCNAPI std::string const getPathedName() const;

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0> const& getPosition() const;

    MCNAPI ::UIPropertyBag const& getPropertyBag() const;

    MCNAPI ::UIPropertyBag& getPropertyBag();

    MCNAPI ::ControlScreenAction& getScreenAction(bool);

    MCNAPI bool getSelected() const;

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0> const& getSize() const;

    MCNAPI bool getVisible() const;

    MCNAPI int getZOrder() const;

    MCNAPI bool hasClipChangeEvent() const;

    MCNAPI bool hasControlCollectionFlag(ushort) const;

    MCNAPI bool hasPropertyBag() const;

    MCNAPI bool hasRenderableComponent() const;

    MCNAPI bool isTemplate() const;

    MCNAPI bool isVisibleInTree() const;

    MCNAPI void markToRemoveDeadDependencies();

    MCNAPI std::shared_ptr<UIControl> moveChild(int, bool);

    MCNAPI void notifyChildAdded();

    MCNAPI bool notifyLayoutChange();

    MCNAPI void onAdded();

    MCNAPI void popBackChild();

    MCNAPI void popFrontChild();

    MCNAPI void processPropertyBags(std::unique_ptr<UIPropertyBag>, std::unique_ptr<UIPropertyBag>);

    MCNAPI bool propagateAlpha() const;

    MCNAPI void propogateAlphaValue(float) const;

    MCNAPI void reloadFromControl(::UIControl const&);

    MCNAPI bool removeChild(std::shared_ptr<UIControl>);

    MCNAPI void removeControlCollectionFlag(ushort);

    MCNAPI void reset(bool, bool);

    MCNAPI void setAlpha(float);

    MCNAPI void setDelayCollectionUpdate(bool);

    MCNAPI void setEnabled(bool, bool);

    MCNAPI void setHover(bool);

    MCNAPI void setIsTemplate(bool);

    MCNAPI void setMaxSize(::glm::vec<2, float, (glm::qualifier)0> const&);

    MCNAPI void setMinSize(::glm::vec<2, float, (glm::qualifier)0> const&);

    MCNAPI void setModalAncestor(std::weak_ptr<UIControl>);

    MCNAPI void setName(std::string_view);

    MCNAPI void setParentRelativePosition(::glm::vec<2, float, (glm::qualifier)0> const&);

    MCNAPI void setPropagateAlpha(bool);

    MCNAPI void setSelected(bool);

    MCNAPI void setSize(::glm::vec<2, float, (glm::qualifier)0> const&);

    MCNAPI void setTextToSpeechTriggered(bool);

    MCNAPI void setVisible(bool, bool, bool);

    MCNAPI void setVisibleInStackPanel(bool, bool, bool);

    MCNAPI void setVisibleInTree(bool);

    MCNAPI void setZOrder(int);

    MCNAPI void updateFrameUpdateComponents(::UIFrameUpdateContext&);

    MCNAPI std::weak_ptr<UIControl> weakRef();
    // NOLINTEND
};
