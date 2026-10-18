#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputDeviceMapper.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/interface/GameControllerStickEvent.h"

// auto generated forward declare list
// clang-format off
class BindingFactory;
class IGameController;
class InputEventQueue;
struct AddClientData;
struct ControllerIDtoClientMap;
struct GameControllerButtonEvent;
struct GameControllerInputMapping;
struct GameControllerTriggerEvent;
struct InputMapping;
struct TouchPadTouchEventData;
// clang-format on

class GameControllerMapper : public ::InputDeviceMapper {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputDeviceMapper.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/DirectionId.h"

// auto generated forward declare list
// clang-format off
class BindingFactory;
class IGameController;
class InputEventQueue;
struct ControllerIDtoClientMap;
struct GameControllerButtonEvent;
struct GameControllerInputMapping;
struct GameControllerStickEvent;
struct InputMapping;
// clang-format on

class GameControllerMapper : public ::InputDeviceMapper {
#else // @header-generator platform
class GameControllerMapper {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // GameControllerMapper inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct GamepadStickTurnData;
    struct ButtonAttributes;
#else // @header-generator platform
#endif // @header-generator platform
    struct TriggerState;
    struct DirectionAttributes;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ButtonAttributes;
#endif // @header-generator platform
    struct GameControllerMappingData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct GamepadStickTurnData;
#endif // @header-generator platform
    // clang-format on

    // GameControllerMapper inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct GamepadStickTurnData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                    turnStickActive;
        ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> lastTurnStickPos;
        ::ll::TypedStorage<4, 4, int>                                     controllerId;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct TriggerState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>          id;
        ::ll::TypedStorage<1, 1, ::ButtonState> currentState;
        ::ll::TypedStorage<4, 4, float>         triggerThreshold;
        // NOLINTEND
    };
#else // @header-generator platform
    struct TriggerState {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        GamepadStickTurnData& operator=(GamepadStickTurnData const&);
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct DirectionAttributes {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::DirectionId> id;
        ::ll::TypedStorage<4, 4, int>           xAxis;
        ::ll::TypedStorage<4, 4, int>           yAxis;
        ::ll::TypedStorage<1, 1, bool>          raiseTurnEvents;
        // NOLINTEND
    };
#else // @header-generator platform
    struct DirectionAttributes {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct ButtonAttributes {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>  nameId;
        ::ll::TypedStorage<4, 4, float> repeatInterval;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ButtonAttributes {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>  nameId;
        ::ll::TypedStorage<4, 4, float> repeatInterval;
        // NOLINTEND
    };
#else // @header-generator platform
    struct ButtonAttributes {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct TriggerState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>          id;
        ::ll::TypedStorage<1, 1, ::ButtonState> currentState;
        ::ll::TypedStorage<4, 4, float>         triggerThreshold;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct GameControllerMappingData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::unordered_multimap<int, ::GameControllerMapper::ButtonAttributes>>
            mGamePadButtonToButtonIdMap;
        ::ll::TypedStorage<8, 64, ::std::unordered_multimap<int, ::GameControllerMapper::TriggerState>>
            mTriggerToButtonIdMap;
        ::ll::TypedStorage<8, 64, ::std::unordered_multimap<int, ::GameControllerMapper::DirectionAttributes>>
                                                                                         mStickToDirectionIdMap;
        ::ll::TypedStorage<8, 64, ::std::unordered_multimap<int, uint>>                  mStickToButtonIdMap;
        ::ll::TypedStorage<8, 64, ::std::unordered_multimap<::DirectionId, uint>>        mStickDirectionToButtonIdMap;
        ::ll::TypedStorage<8, 16, ::std::set<uint>>                                      mExclusiveButtonIdSet;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::GameControllerStickEvent>> mPreviousStickEvents;
        ::ll::TypedStorage<1, 1, bool>                                                   mMappingChanged;
        // NOLINTEND
    };
#else // @header-generator platform
    struct GameControllerMappingData {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct DirectionAttributes {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::DirectionId> id;
        ::ll::TypedStorage<4, 4, int>           xAxis;
        ::ll::TypedStorage<4, 4, int>           yAxis;
        ::ll::TypedStorage<1, 1, bool>          raiseTurnEvents;
        // NOLINTEND
    };

    struct GameControllerMappingData {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 40, std::unordered_multimap<int, GameControllerMapper::ButtonAttributes>> mGamePadButtonToButtonIdMap;
        ::ll::TypedStorage<8, 40, std::unordered_multimap<int, GameControllerMapper::TriggerState>> mTriggerToButtonIdMap;
        ::ll::TypedStorage<8, 40, std::unordered_multimap<int, GameControllerMapper::DirectionAttributes>> mStickToDirectionIdMap;
        ::ll::TypedStorage<8, 40, std::unordered_multimap<int, uint>> mStickToButtonIdMap;
        ::ll::TypedStorage<8, 40, std::unordered_multimap<DirectionId, uint>> mStickDirectionToButtonIdMap;
        ::ll::TypedStorage<8, 24, std::set<uint>> mExclusiveButtonIdSet;
        ::ll::TypedStorage<8, 40, std::unordered_map<int, GameControllerStickEvent>> mPreviousStickEvents;
        ::ll::TypedStorage<1, 1, bool> mMappingChanged;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        GameControllerMappingData& operator=(GameControllerMappingData const&);
        GameControllerMappingData(GameControllerMappingData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::GameControllerMapper::GameControllerMappingData&
        operator=(::GameControllerMapper::GameControllerMappingData&&);

        MCNAPI ~GameControllerMappingData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using GamePadButtonToButtonIdMap = std::unordered_multimap<int, GameControllerMapper::ButtonAttributes>;

    using GamePadTriggerToButtonIdMap = std::unordered_multimap<int, GameControllerMapper::TriggerState>;

    using GamePadStickToDirectionIdMap = std::unordered_multimap<int, GameControllerMapper::DirectionAttributes>;

    using GamePadStickToButtonIdMap = std::unordered_multimap<int, uint>;

    using GamePadStickDirectionToButtonIdMap = std::unordered_multimap<DirectionId, uint>;

    using GamePadExclusiveButtonIdSet = std::set<uint>;

    using GamePadStickEvents = std::unordered_map<int, GameControllerStickEvent>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, double>                                                   mLastTime;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, double>>                         mLastTurnButtonTimeSeconds;
    ::ll::TypedStorage<8, 24, std::vector<GameControllerMapper::GamepadStickTurnData>> mStickTurnData;
    ::ll::TypedStorage<8, 40, std::unordered_map<int, GameControllerMapper::GameControllerMappingData>> mPerIdMappings;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~GameControllerMapper();

    virtual void setMapping(::InputEventQueue&, ::BindingFactory const&, ::InputMapping const&, int);

    virtual void clearMapping(int);

    virtual bool tick(::InputEventQueue&, ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>> const&);

    virtual ::InputMode getInputMode() const;

    virtual void changeControllerId(int, int);

    virtual std::vector<std::weak_ptr<IGameController>> _getGameControllers() = 0;

    virtual ::GameControllerInputMapping const& getGameControllerMapping(::InputMapping const&) = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    _enqueueButtonDownUpEvents(::InputEventQueue&, ::GameControllerMapper::GamepadStickTurnData&, ::DirectionId);

    MCNAPI void _handleButtonEvent(::InputEventQueue&, ::GameControllerButtonEvent const&, int, int);

    MCNAPI void _handleStickEvent(::InputEventQueue&, ::GameControllerStickEvent const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setMapping(::InputEventQueue&, ::BindingFactory const&, ::InputMapping const&, int);

    MCNAPI void $clearMapping(int);

    MCNAPI bool $tick(::InputEventQueue&, ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>> const&);

    MCNAPI ::InputMode $getInputMode() const;

    MCNAPI void $changeControllerId(int, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct GamepadStickTurnData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>        turnStickActive;
        ::ll::TypedStorage<4, 8, ::glm::vec2> lastTurnStickPos;
        ::ll::TypedStorage<4, 4, int>         controllerId;
        // NOLINTEND
    };

    using GameControllerButtonId = int;

    using GamePadTriggerId = int;

    using GamePadStickId = int;

    using GamePadButtonToButtonIdMap = ::std::unordered_multimap<int, ::GameControllerMapper::ButtonAttributes>;

    using GamePadTriggerToButtonIdMap = ::std::unordered_multimap<int, ::GameControllerMapper::TriggerState>;

    using GamePadStickToDirectionIdMap = ::std::unordered_multimap<int, ::GameControllerMapper::DirectionAttributes>;

    using GamePadStickToButtonIdMap = ::std::unordered_multimap<int, uint>;

    using GamePadStickDirectionToButtonIdMap = ::std::unordered_multimap<::DirectionId, uint>;

    using GamePadExclusiveButtonIdSet = ::std::set<uint>;

    using GamePadStickEvents = ::std::unordered_map<int, ::GameControllerStickEvent>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, double>                                                       mLastTime;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, double>>                           mLastTurnButtonTimeSeconds;
    ::ll::TypedStorage<8, 24, ::std::vector<::GameControllerMapper::GamepadStickTurnData>> mStickTurnData;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::GameControllerMapper::GameControllerMappingData>>
        mPerIdMappings;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void setMapping(
        ::InputEventQueue&      eventQueue,
        ::BindingFactory const& bindingFactory,
        ::InputMapping const&   inputMapping,
        int                     controllerId
    ) /*override*/;

    virtual void clearMapping(int controllerId) /*override*/;

    virtual bool tick(
        ::InputEventQueue&                                              eventQueue,
        ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> const& map
    ) /*override*/;

    virtual ::InputMode getInputMode() const /*override*/;

    virtual void changeControllerId(int oldId, int newId) /*override*/;

    virtual ::std::vector<::std::weak_ptr<::IGameController>> _getGameControllers() = 0;

    virtual ::GameControllerInputMapping const& getGameControllerMapping(::InputMapping const& inputMapping) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameControllerMapper();

    MCAPI void _enqueueButtonDownUpEvents(
        ::InputEventQueue&                            eventQueue,
        ::GameControllerMapper::GamepadStickTurnData& turnData,
        ::DirectionId                                 direction
    );

    MCAPI void _handleButtonEvent(
        ::InputEventQueue&                 eventQueue,
        ::GameControllerButtonEvent const& buttonEvent,
        int                                controllerId,
        int                                alternateControllerId
    );

    MCAPI void
    _handleStickEvent(::InputEventQueue& eventQueue, ::GameControllerStickEvent const& stickEvent, int controllerId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setMapping(
        ::InputEventQueue&      eventQueue,
        ::BindingFactory const& bindingFactory,
        ::InputMapping const&   inputMapping,
        int                     controllerId
    );

    MCAPI void $clearMapping(int controllerId);

    MCAPI bool
    $tick(::InputEventQueue& eventQueue, ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> const& map);

    MCFOLD ::InputMode $getInputMode() const;

    MCAPI void $changeControllerId(int oldId, int newId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct GamepadStickTurnData {};
#endif // @header-generator platform
#endif // @header-generator platform
};
