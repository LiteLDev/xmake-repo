#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/CardinalDirection.h"
#include "mc/client/gui/screens/RecentFocusVector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
class FocusContainerComponent;
class FocusManagerProxy;
class UIControl;
struct SweepDescription;
struct SweepResult;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class FocusManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mSize;
    ::ll::UntypedStorage<8, 24>                                       mFocusControls;
    bool                                                              mFocusActive             : 1;
    bool                                                              mFocusResetFlag          : 1;
    bool                                                              mFindClosestControl      : 1;
    bool                                                              mFocusPositionCaptured   : 1;
    bool                                                              mNeedsDefaultFocusUpdate : 1;
    bool                                                              mIncludeMagnetControls   : 1;
    bool                                                              mRepeatTTS               : 1;
    ::ll::TypedStorage<1, 1, bool>                                    mScrollToFocusedControlIfClipped;
    bool                                                              mHoverNothing : 1;
    ::ll::TypedStorage<4, 4, int>                                     mFocusedControlIndex;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>>               mFocusedControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>>               mPreviousFocusedControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>>               mLostFocusControl;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>>               mCurrentModalRoot;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>>               mCurrentFocusContainer;
    ::ll::TypedStorage<8, 16, std::weak_ptr<UIControl>>               mRootOfFocusTree;
    ::ll::TypedStorage<8, 32, ::RecentFocusVector>                    mRecentFocusList;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FocusManagerProxy>>      mProxy;
    ::ll::TypedStorage<8, 24, std::string>                            mPendingFocusControlID;
    ::ll::TypedStorage<4, 4, int>                                     mPendingFocusControlIndex;
    ::ll::TypedStorage<1, 1, bool>                                    mHasPendingFocusControl;
    ::ll::TypedStorage<8, 24, std::string>                            mPendingFocusCollectionIndexName;
    ::ll::UntypedStorage<8, 40>                                       mFocusChangePub;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FocusManager();

    MCNAPI std::shared_ptr<UIControl> _findFocusContainerControlFor(std::shared_ptr<UIControl>) const;

    MCNAPI ::SweepResult
    _getControlAtFocusPoint(::SweepDescription const&, std::vector<std::shared_ptr<UIControl>> const&);

    MCNAPI std::shared_ptr<UIControl> _getLastGoodFocusedControl(std::shared_ptr<UIControl>);

    MCNAPI void _setFocusControlFromIndex(int, bool);

    MCNAPI void _setFocusControlInternal(::UIControl const&, bool, bool);

    MCNAPI void _sweepForClosestControl(std::shared_ptr<UIControl>);

    MCNAPI ::SweepResult
    _sweepForControlDirectional(::SweepDescription const&, std::vector<std::shared_ptr<UIControl>> const&, bool);

    MCNAPI void _sweepToNextFocusObject(::ui::CardinalDirection, bool, ::glm::vec<2, float, (glm::qualifier)0> const&);

    MCNAPI void _updateLostFocusControlList(std::weak_ptr<UIControl>);

    MCNAPI void _updateRootOfFocusTree();

    MCNAPI void addControl(::UIControl&);

    MCNAPI void clearPendingFocusControl();

    MCNAPI void defaultFocus();

    MCNAPI bool focusPositionCaptured();

    MCNAPI void forceRepeatTTS();

    MCNAPI bool getAndResetRepeatTTS();

    MCNAPI bool getAndResetScrollToFocusedControlIfClipped();

    MCNAPI std::shared_ptr<UIControl> getCurrentModalRoot();

    MCNAPI std::shared_ptr<UIControl> getFocusedControl();

    MCNAPI std::shared_ptr<UIControl> getPreviousFocusedControl();

    MCNAPI ::FocusManagerProxy* getProxy();

    MCNAPI std::shared_ptr<UIControl> getRootOfFocusTree();

    MCNAPI bool hasControl(::UIControl const&) const;

    MCNAPI bool hasFocusedControl();

    MCNAPI bool hasPendingFocusControl() const;

    MCNAPI bool hasRequestedFocusReset();

    MCNAPI bool isActive() const;

    MCNAPI bool isHoveringOverNothing() const;

    MCNAPI ::Bedrock::PubSub::Subscription
        listenToFocusChange(std::function<void(std::weak_ptr<UIControl>, std::weak_ptr<UIControl>)>);

    MCNAPI void moveFocus(::ui::CardinalDirection, bool, ::glm::vec<2, float, (glm::qualifier)0> const);

    MCNAPI void onFocusContainerLostFocus();

    MCNAPI void removeControl(
        ::UIControl&,
        std::map<std::vector<std::shared_ptr<UIControl>>*, std::vector<std::shared_ptr<UIControl>>>&
    );

    MCNAPI void requestFocusReset(bool);

    MCNAPI void setActive(bool);

    MCNAPI bool setFocusControl(::UIControl const&, bool);

    MCNAPI void setFocusPosition(::glm::vec<2, float, (glm::qualifier)0> const&);

    MCNAPI void setFocusPositionCaptured(bool);

    MCNAPI void setFocusedControlToLostFocus();

    MCNAPI void setIncludeMagnetControls(bool);

    MCNAPI void setLostFocusControl(std::shared_ptr<UIControl>);

    MCNAPI void setModalRoot(std::shared_ptr<UIControl>&);

    MCNAPI void setPendingFocusControl(std::string const&, std::string const&, int);

    MCNAPI void setSize(::glm::vec<2, float, (glm::qualifier)0> const&);

    MCNAPI void updateDefaultFocusIfNeeded();

    MCNAPI bool updatePendingFocusControl();

    MCNAPI void validateFocusControl();

    MCNAPI ~FocusManager();
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
};
