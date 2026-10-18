#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/input/ClientInputMappingFactory.h"
#include "mc/client/input/vanilla/remapping/ActionEnum.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/enums/FocusImpact.h"

// auto generated forward declare list
// clang-format off
class GamePadRemappingLayout;
class IOptionRegistry;
class KeyboardRemappingLayout;
class RemappingLayout;
struct ChordButtonMapping;
struct DeviceButtonMapping;
struct GameControllerInputMapping;
struct KeyboardInputMapping;
struct MouseInputMapping;
struct TestAutoInputMapping;
struct TouchInputMapping;
// clang-format on

class VanillaClientInputMappingFactory : public ::ClientInputMappingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mIsEdu;
    ::ll::TypedStorage<8, 16, std::weak_ptr<IOptionRegistry>>  mOptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRegenerateTemplatesDueToScriptKeys;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaClientInputMappingFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaClientInputMappingFactory();

    virtual void createInputMappingTemplates(::IOptionRegistry&);

    virtual void _updateKeyboardAndMouseControls(::IOptionRegistry&);

    virtual void _updateGameControllerControls();

    virtual void _updateTouchMappingControls();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VanillaClientInputMappingFactory(std::weak_ptr<KeyboardRemappingLayout>, bool);

    MCNAPI void _addBlockSelectButton(::TouchInputMapping&) const;

    MCNAPI void _addClassicDPadButtons(::TouchInputMapping&, bool, bool) const;

    MCNAPI void _addCommandMacrosKeyboardAndMouseMapping(::KeyboardInputMapping&, ::MouseInputMapping&);

    MCNAPI void _addDebugChords(std::vector<ChordButtonMapping>&);

    MCNAPI void _addFullKeyboardGamePlayControls(::KeyboardInputMapping&, ::MouseInputMapping&, bool) const;

    MCNAPI void _addGamePlayTouchFlyingMovementControls(::TouchInputMapping&) const;

    MCNAPI void _addGameplayMouseControls(::KeyboardInputMapping&, ::MouseInputMapping&);

    MCNAPI void _addInvariantGameControllerControls(::GameControllerInputMapping&);

    MCNAPI void _addInvariantGamePlayGameControllerControls(::GameControllerInputMapping&);

    MCNAPI void _addInvariantGamePlayTouchControls(::TouchInputMapping&) const;

    MCNAPI void _addInvariantKeyboardControls(::KeyboardInputMapping&, ::MouseInputMapping&, bool) const;

    MCNAPI void _addNewTouchControlsActionButtons(::TouchInputMapping&) const;

    MCNAPI void _addSharedGamePlayGameControllerControls(::GameControllerInputMapping&);

    MCNAPI void _bindActionToGameControllerInput(
        ::GameControllerInputMapping&,
        ::GamePadRemappingLayout const&,
        std::string const&,
        ::Remapping::ActionEnum,
        float,
        float
    ) const;

    MCNAPI void _bindActionToKeyboardAndMouseInput(
        ::KeyboardInputMapping&,
        ::MouseInputMapping&,
        std::string const&,
        ::Remapping::ActionEnum,
        ::FocusImpact
    ) const;

    MCNAPI void _createBaseNormalGamePlayKeyboardAndMouseMapping(::KeyboardInputMapping&, ::MouseInputMapping&, bool);

    MCNAPI void _createBedKeyboardAndMouseMapping(::KeyboardInputMapping&, ::MouseInputMapping&);

    MCNAPI ::GameControllerInputMapping _createBoatAndMinecartGameControllerMapping();

    MCNAPI void _createBoatKeyboardAndMouseMapping(::KeyboardInputMapping&, ::MouseInputMapping&);

    MCNAPI ::TouchInputMapping _createBoatTouchMapping();

    MCNAPI void _createDeathKeyboardAndMouseMapping(::KeyboardInputMapping&, ::MouseInputMapping&);

    MCNAPI ::GameControllerInputMapping _createEmoteGameControllerMapping();

    MCNAPI void _createExpediateEmoteKeyboardAndMouseMapping(::KeyboardInputMapping&, ::MouseInputMapping&);

    MCNAPI ::GameControllerInputMapping _createFlyingGameControllerMapping();

    MCNAPI ::GameControllerInputMapping _createGazeScreenGameControllerMapping();

    MCNAPI ::TouchInputMapping _createInScaffoldingTouchMapping();

    MCNAPI ::GameControllerInputMapping _createInWaterGameControllerMapping();

    MCNAPI ::TouchInputMapping _createInWaterTouchMapping();

    MCNAPI ::TouchInputMapping _createMinecartTouchMapping();

    MCNAPI std::vector<ChordButtonMapping> _createNormalGamePlayChordMapping(bool);

    MCNAPI ::GameControllerInputMapping _createNormalGamePlayGameControllerMapping();

    MCNAPI ::TouchInputMapping _createNormalGamePlayTouchMapping();

    MCNAPI ::GameControllerInputMapping _createRideableGameControllerMapping();

    MCNAPI ::TouchInputMapping _createRideableTouchMapping();

    MCNAPI ::GameControllerInputMapping _createScreenGameControllerMapping();

    MCNAPI void _createScreenKeyboardAndMouseMapping(::KeyboardInputMapping&, ::MouseInputMapping&);

    MCNAPI ::GameControllerInputMapping _createSpectatorModeGameControllerMapping();

    MCNAPI void _createSpectatorModeKeyboardAndMouseMapping(::KeyboardInputMapping&, ::MouseInputMapping&);

    MCNAPI ::TouchInputMapping _createSpectatorModeTouchMapping();

    MCNAPI ::GameControllerInputMapping _createSwimmingGameControllerMapping();

    MCNAPI void _createSwimmingKeyboardAndMouseMapping(::KeyboardInputMapping&, ::MouseInputMapping&);

    MCNAPI bool _isUsingActionButtons() const;

    MCNAPI void _populateFullKeyboardDefaults(::RemappingLayout&) const;

    MCNAPI void _populateKeyboardDefaults(::RemappingLayout&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<KeyboardRemappingLayout>, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $createInputMappingTemplates(::IOptionRegistry&);

    MCNAPI void $_updateKeyboardAndMouseControls(::IOptionRegistry&);

    MCNAPI void $_updateGameControllerControls();

    MCNAPI void $_updateTouchMappingControls();
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
#include "mc/client/input/ClientInputMappingFactory.h"
#include "mc/client/input/vanilla/remapping/ActionEnum.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/enums/FocusImpact.h"

// auto generated forward declare list
// clang-format off
class GamePadRemappingLayout;
class IOptionRegistry;
class RemappingLayout;
struct ChordButtonMapping;
struct GameControllerInputMapping;
struct KeyboardInputMapping;
struct MouseInputMapping;
struct TouchInputMapping;
// clang-format on

class VanillaClientInputMappingFactory : public ::ClientInputMappingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                mIsEdu;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::IOptionRegistry>> mOptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>    mRegenerateTemplatesDueToScriptKeys;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void createInputMappingTemplates(::IOptionRegistry& options) /*override*/;

    virtual void _updateKeyboardAndMouseControls(::IOptionRegistry& options) /*override*/;

    virtual void _updateGameControllerControls() /*override*/;

    virtual void _updateTouchMappingControls() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addBlockSelectButton(::TouchInputMapping& touchMapping) const;

    MCAPI void _addClassicDPadButtons(::TouchInputMapping& touchMapping, bool sneak, bool jump) const;

    MCAPI void _addCommandMacrosKeyboardAndMouseMapping(
        ::KeyboardInputMapping& screenKeyboardMapping,
        ::MouseInputMapping&    screenMouseMapping
    );

    MCAPI void
    _addDebugKeyboardControls(::KeyboardInputMapping& keyboardMapping, ::MouseInputMapping& mouseMapping) const;

    MCAPI void _addFullKeyboardGamePlayControls(
        ::KeyboardInputMapping& keyboardMapping,
        ::MouseInputMapping&    mouseMapping,
        bool                    withInventoryCycle
    ) const;

    MCAPI void _addGamePlayTouchFlyingMovementControls(::TouchInputMapping& result) const;

    MCAPI void _addGameplayMouseControls(
        ::KeyboardInputMapping& normalGamePlayKeyboardMapping,
        ::MouseInputMapping&    normalGamePlayMouseMapping
    );

    MCAPI void _addInvariantGameControllerControls(::GameControllerInputMapping& gameControllerMapping);

    MCAPI void _addInvariantGamePlayGameControllerControls(::GameControllerInputMapping& gameControllerMapping);

    MCAPI void _addInvariantGamePlayTouchControls(::TouchInputMapping& touchMapping) const;

    MCAPI void _addInvariantKeyboardControls(
        ::KeyboardInputMapping& keyboardMapping,
        ::MouseInputMapping&    mouseMapping,
        bool                    isEmoteMapping
    ) const;

    MCAPI void _addSharedGamePlayGameControllerControls(::GameControllerInputMapping& gameControllerMapping);

    MCAPI void _bindActionToKeyboardAndMouseInput(
        ::KeyboardInputMapping& keyboardMap,
        ::MouseInputMapping&    mouseMap,
        ::std::string const&    buttonID,
        ::Remapping::ActionEnum action,
        ::FocusImpact           focusImpact
    ) const;

    MCAPI void _createBaseNormalGamePlayKeyboardAndMouseMapping(
        ::KeyboardInputMapping& normalGamePlayKeyboardMapping,
        ::MouseInputMapping&    normalGamePlayMouseMapping,
        bool                    isEmoteMapping
    );

    MCAPI void
    _createBedKeyboardAndMouseMapping(::KeyboardInputMapping& bedKeyboardMapping, ::MouseInputMapping& bedMouseMapping);

    MCAPI ::GameControllerInputMapping _createBoatAndMinecartGameControllerMapping();

    MCAPI void _createBoatKeyboardAndMouseMapping(
        ::KeyboardInputMapping& boatKeyboardMapping,
        ::MouseInputMapping&    boatMouseMapping
    );

    MCAPI ::TouchInputMapping _createBoatTouchMapping();

    MCAPI void
    _createDeathKeyboardAndMouseMapping(::KeyboardInputMapping& keyboardMapping, ::MouseInputMapping& mouseMapping);

    MCAPI ::GameControllerInputMapping _createEmoteGameControllerMapping();

    MCAPI void _createExpediateEmoteKeyboardAndMouseMapping(
        ::KeyboardInputMapping& emoteKeyboardMapping,
        ::MouseInputMapping&    emoteMouseMapping
    );

    MCAPI ::GameControllerInputMapping _createFlyingGameControllerMapping();

    MCAPI ::GameControllerInputMapping _createGazeScreenGameControllerMapping();

    MCAPI ::TouchInputMapping _createInScaffoldingTouchMapping();

    MCAPI ::GameControllerInputMapping _createInWaterGameControllerMapping();

    MCAPI ::TouchInputMapping _createInWaterTouchMapping();

    MCAPI ::TouchInputMapping _createMinecartTouchMapping();

    MCAPI ::std::vector<::ChordButtonMapping> _createNormalGamePlayChordMapping(bool withDropAll);

    MCAPI ::GameControllerInputMapping _createNormalGamePlayGameControllerMapping();

    MCAPI void _createNormalGamePlayKeyboardAndMouseMapping(
        ::KeyboardInputMapping& normalGamePlayKeyboardMapping,
        ::MouseInputMapping&    normalGamePlayMouseMapping
    );

    MCAPI ::TouchInputMapping _createNormalGamePlayTouchMapping();

    MCAPI ::GameControllerInputMapping _createRideableGameControllerMapping();

    MCAPI void _createRideableKeyboardAndMouseMapping(
        ::KeyboardInputMapping& rideableKeyboardMapping,
        ::MouseInputMapping&    rideableMouseMapping
    );

    MCAPI ::TouchInputMapping _createRideableTouchMapping();

    MCAPI ::GameControllerInputMapping _createScreenGameControllerMapping();

    MCAPI void _createScreenKeyboardAndMouseMapping(
        ::KeyboardInputMapping& screenKeyboardMapping,
        ::MouseInputMapping&    screenMouseMapping
    );

    MCAPI ::KeyboardInputMapping _createScreenKeyboardMapping();

    MCAPI ::MouseInputMapping _createScreenMouseMapping();

    MCAPI ::GameControllerInputMapping _createSpectatorModeGameControllerMapping();

    MCAPI void _createSpectatorModeKeyboardAndMouseMapping(
        ::KeyboardInputMapping& spectatorModeGamePlayKeyboardMapping,
        ::MouseInputMapping&    spectatorModeGamePlayMouseMapping
    );

    MCAPI ::TouchInputMapping _createSpectatorModeTouchMapping();

    MCAPI ::GameControllerInputMapping _createSwimmingGameControllerMapping();

    MCAPI void _createSwimmingKeyboardAndMouseMapping(
        ::KeyboardInputMapping& swimmingKeyboardMapping,
        ::MouseInputMapping&    swimmingMouseMapping
    );

    MCAPI bool _isUsingActionButtons() const;

    MCAPI void _populateFullKeyboardDefaults(::RemappingLayout& layout) const;

    MCAPI void _populateKeyboardDefaults(::RemappingLayout& layout) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _addCommandMacrosKeyboardAndMouseMappingChord(::std::vector<::ChordButtonMapping>& result);

    MCAPI static void _addDebugChords(::std::vector<::ChordButtonMapping>& result);

    MCAPI static void _addNewTouchControlsActionButtons(::TouchInputMapping& touchMapping);

    MCAPI static void _bindActionToGameControllerInput(
        ::GameControllerInputMapping&   map,
        ::GamePadRemappingLayout const& layout,
        ::std::string const&            buttonID,
        ::Remapping::ActionEnum         action,
        float                           triggerThreshold,
        float                           repeatInterval
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $createInputMappingTemplates(::IOptionRegistry& options);

    MCAPI void $_updateKeyboardAndMouseControls(::IOptionRegistry& options);

    MCAPI void $_updateGameControllerControls();

    MCAPI void $_updateTouchMappingControls();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class VanillaClientInputMappingFactory {};
#endif // @header-generator platform
#endif // @header-generator platform
