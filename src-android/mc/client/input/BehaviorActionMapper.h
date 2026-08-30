#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputDeviceMapper.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/world/actor/ActionEvent.h"

// auto generated forward declare list
// clang-format off
class BindingFactory;
class IMinecraftGame;
class InputEventQueue;
struct ControllerIDtoClientMap;
struct InputMapping;
// clang-format on

class BehaviorActionMapper : public ::InputDeviceMapper {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<int, std::unordered_multimap<int, uint>>> mTestAutoActionToButtonIdMappings;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    BehaviorActionMapper();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BehaviorActionMapper();

    virtual void setMapping(::InputEventQueue&, ::BindingFactory const&, ::InputMapping const&, int);

    virtual void clearMapping(int);

    virtual void clearInputDeviceQueue();

    virtual void clearInputDeviceQueueForFrame();

    virtual bool tick(::InputEventQueue&, ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>> const&);

    virtual ::InputMode getInputMode() const;

    virtual void changeControllerId(int, int);
    // clang-format on
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

    MCNAPI void $clearInputDeviceQueue();

    MCNAPI void $clearInputDeviceQueueForFrame();

    MCNAPI bool $tick(::InputEventQueue&, ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>> const&);

    MCNAPI ::InputMode $getInputMode() const;

    MCNAPI void $changeControllerId(int, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
