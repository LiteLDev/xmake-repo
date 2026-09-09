#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputDeviceMapper.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class BindingFactory;
class InputEventQueue;
class InputRenderContext;
class TouchControlSet;
struct ControllerIDtoClientMap;
struct InputMapping;
// clang-format on

class CustomInputZoneMapper : public ::InputDeviceMapper {
public:
    // CustomInputZoneMapper inner types define
    using HandlePointerReturn = std::tuple<bool, bool>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<TouchControlSet>>  mTouchControlSet;
    ::ll::TypedStorage<4, 4, int>                               mYAxisInversionFactor;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<int, int>>> mTouchIdsWithFlags;
    ::ll::TypedStorage<4, 4, int>                               mPrimaryGameControllerId;
    ::ll::TypedStorage<4, 4, ::InputMode>                       mLastInputMode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CustomInputZoneMapper();

    virtual void setMapping(::InputEventQueue&, ::BindingFactory const&, ::InputMapping const&, int);

    virtual void clearMapping(int);

    virtual void clearInputDeviceQueue();

    virtual bool tick(::InputEventQueue&, ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>> const&);

    virtual ::InputMode getInputMode() const;

    virtual void render(::InputRenderContext&) const;

    virtual void setWindowSize(int, int);

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

    MCNAPI bool $tick(::InputEventQueue&, ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>> const&);

    MCNAPI ::InputMode $getInputMode() const;

    MCNAPI void $render(::InputRenderContext&) const;

    MCNAPI void $setWindowSize(int, int);

    MCNAPI void $changeControllerId(int, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
