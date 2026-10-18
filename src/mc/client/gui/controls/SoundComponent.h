#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/SoundEventConditions.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/client/gui/screens/ScreenEventType.h"

// auto generated forward declare list
// clang-format off
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class UISoundPlayer;
class VisualTree;
struct ButtonScreenEventData;
struct ScreenEvent;
// clang-format on

class SoundComponent : public ::UIComponent {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/SoundEventConditions.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/client/gui/screens/ScreenEventType.h"

// auto generated forward declare list
// clang-format off
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class UISoundPlayer;
class VisualTree;
struct ScreenEvent;
// clang-format on

class SoundComponent : public ::UIComponent {
#else // @header-generator platform
class SoundComponent {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // SoundComponent inner types declare
    // clang-format off
    struct SoundEventInfo;
    // clang-format on

    // SoundComponent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct SoundEventInfo {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 24, std::string> mSoundName;
        ::ll::TypedStorage<4, 4, float> mVolume;
        ::ll::TypedStorage<4, 4, float> mPitch;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastPlayTime;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mMinTimeBetweenPlays;
        ::ll::TypedStorage<4, 4, ::ScreenEventType> mScreenEventType;
        ::ll::TypedStorage<4, 8, ::SoundEventConditions> mEventConditions;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        SoundEventInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::UISoundPlayer const*>                       mSoundPlayer;
    ::ll::TypedStorage<4, 4, float>                                        mVolume;
    ::ll::TypedStorage<4, 4, float>                                        mPitch;
    ::ll::TypedStorage<8, 24, std::string>                                 mSoundName;
    ::ll::TypedStorage<8, 24, std::vector<SoundComponent::SoundEventInfo>> mSoundEvents;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SoundComponent();

    virtual std::unique_ptr<UIComponent> clone(::UIControl&) const;

    virtual ::ComponentReceiveActionType receive(::ScreenEvent const&);

    virtual ::ComponentReceiveActionType receive(::VisualTree&, ::ScreenInputContext&, ::UIAnimationController&, ::ScreenEvent const&);

    virtual void reset();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addSoundEvent(
        std::string const&,
        float,
        float,
        std::chrono::duration<long long, std::ratio<1, 1000>>,
        ::ScreenEventType,
        ::SoundEventConditions const&
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
    MCNAPI std::unique_ptr<UIComponent> $clone(::UIControl&) const;

    MCNAPI ::ComponentReceiveActionType $receive(::ScreenEvent const&);

    MCNAPI ::ComponentReceiveActionType
    $receive(::VisualTree&, ::ScreenInputContext&, ::UIAnimationController&, ::ScreenEvent const&);

    MCNAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct SoundEventInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                          mSoundName;
        ::ll::TypedStorage<4, 4, float>                                   mVolume;
        ::ll::TypedStorage<4, 4, float>                                   mPitch;
        ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastPlayTime;
        ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds>             mMinTimeBetweenPlays;
        ::ll::TypedStorage<4, 4, ::ScreenEventType>                       mScreenEventType;
        ::ll::TypedStorage<4, 8, ::SoundEventConditions>                  mEventConditions;
        // NOLINTEND

    public:
        // prevent constructor by default
        SoundEventInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI SoundEventInfo(
            ::std::string                 soundName,
            float                         volume,
            float                         pitch,
            ::std::chrono::milliseconds   minTimeBetweenPlays,
            ::ScreenEventType             screenEventType,
            ::SoundEventConditions const& screenEventConditions
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            ::std::string                 soundName,
            float                         volume,
            float                         pitch,
            ::std::chrono::milliseconds   minTimeBetweenPlays,
            ::ScreenEventType             screenEventType,
            ::SoundEventConditions const& screenEventConditions
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::UISoundPlayer const*>                           mSoundPlayer;
    ::ll::TypedStorage<4, 4, float>                                            mVolume;
    ::ll::TypedStorage<4, 4, float>                                            mPitch;
    ::ll::TypedStorage<8, 32, ::std::string>                                   mSoundName;
    ::ll::TypedStorage<8, 24, ::std::vector<::SoundComponent::SoundEventInfo>> mSoundEvents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SoundComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual ::ComponentReceiveActionType receive(::ScreenEvent const& screenEvent) /*override*/;

    virtual ::ComponentReceiveActionType receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addSoundEvent(
        ::std::string const&          soundName,
        float                         volume,
        float                         pitch,
        ::std::chrono::milliseconds   minTimeBetweenPlays,
        ::ScreenEventType             screenEventType,
        ::SoundEventConditions const& screenEventConditions
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCFOLD void $reset();

    MCAPI ::ComponentReceiveActionType $receive(::ScreenEvent const& screenEvent);

    MCAPI ::ComponentReceiveActionType $receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct SoundEventInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
};
