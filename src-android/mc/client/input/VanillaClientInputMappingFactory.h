#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
