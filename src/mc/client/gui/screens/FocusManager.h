#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/CardinalDirection.h"
#include "mc/client/gui/screens/RecentFocusVector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
class FocusManagerProxy;
class UIControl;
struct SweepDescription;
struct SweepResult;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class FocusManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                    mSize;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mFocusControls;
    bool                                                                     mFocusActive             : 1;
    bool                                                                     mFocusResetFlag          : 1;
    bool                                                                     mFindClosestControl      : 1;
    bool                                                                     mFocusPositionCaptured   : 1;
    bool                                                                     mNeedsDefaultFocusUpdate : 1;
    bool                                                                     mIncludeMagnetControls   : 1;
    bool                                                                     mRepeatTTS               : 1;
    ::ll::TypedStorage<1, 1, bool>                                           mScrollToFocusedControlIfClipped;
    bool                                                                     mHoverNothing : 1;
    ::ll::TypedStorage<4, 4, int>                                            mFocusedControlIndex;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                  mFocusedControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                  mPreviousFocusedControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                  mLostFocusControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                  mCurrentModalRoot;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                  mCurrentFocusContainer;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                  mRootOfFocusTree;
    ::ll::TypedStorage<8, 32, ::RecentFocusVector>                           mRecentFocusList;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FocusManagerProxy>>         mProxy;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mPendingFocusControlID;
    ::ll::TypedStorage<4, 4, int>                                            mPendingFocusControlIndex;
    ::ll::TypedStorage<1, 1, bool>                                           mHasPendingFocusControl;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mPendingFocusCollectionIndexName;
    ::ll::TypedStorage<
        8,
        48,
        ::Bedrock::PubSub::Publisher<
            void(::std::weak_ptr<::UIControl>, ::std::weak_ptr<::UIControl>),
            ::Bedrock::PubSub::ThreadModel::SingleThreaded,
            0>>
        mFocusChangePub;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FocusManager();

    MCAPI ::std::shared_ptr<::UIControl> _findFocusContainerControlFor(::std::shared_ptr<::UIControl> forControl) const;

    MCAPI ::SweepResult _getControlAtFocusPoint(
        ::SweepDescription const&                            desc,
        ::std::vector<::std::shared_ptr<::UIControl>> const& controls
    );

    MCAPI ::std::shared_ptr<::UIControl> _getLastGoodFocusedControl(::std::shared_ptr<::UIControl> oldFocusedControl);

    MCAPI void _setFocusControlFromIndex(int focusControlIndex, bool overrideLastFocus);

    MCAPI void _setFocusControlInternal(::UIControl const& control, bool allowDefault, bool overrideLastFocus);

    MCAPI void _sweepForClosestControl(::std::shared_ptr<::UIControl> focusedControl);

    MCAPI ::SweepResult _sweepForControlDirectional(
        ::SweepDescription const&                            desc,
        ::std::vector<::std::shared_ptr<::UIControl>> const& controls,
        bool                                                 hasWrapped
    );

    MCAPI void
    _sweepToNextFocusObject(::ui::CardinalDirection direction, bool overrideOrigin, ::glm::vec2 const& overridePos);

    MCAPI void _updateLostFocusControlList(::std::weak_ptr<::UIControl> control);

    MCAPI void _updateRootOfFocusTree();

    MCAPI void addControl(::UIControl& control);

    MCAPI void defaultFocus();

    MCAPI void removeControl(
        ::UIControl& control,
        ::std::map<::std::vector<::std::shared_ptr<::UIControl>>*, ::std::vector<::std::shared_ptr<::UIControl>>>&
            controlsToRemove
    );

    MCAPI bool setFocusControl(::UIControl const& control, bool allowDefault);

    MCAPI void setFocusedControlToLostFocus();

    MCAPI void setModalRoot(::std::shared_ptr<::UIControl>& control);

    MCAPI void updateDefaultFocusIfNeeded();

    MCAPI bool updatePendingFocusControl();

    MCAPI void validateFocusControl();

    MCAPI ~FocusManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class FocusManager {};
#endif // @header-generator platform
#endif // @header-generator platform
