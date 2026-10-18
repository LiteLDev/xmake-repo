#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    using HandlePointerReturn = ::std::tuple<bool, bool>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TouchControlSet>>  mTouchControlSet;
    ::ll::TypedStorage<4, 4, int>                                   mYAxisInversionFactor;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<int, int>>> mTouchIdsWithFlags;
    ::ll::TypedStorage<4, 4, int>                                   mPrimaryGameControllerId;
    ::ll::TypedStorage<4, 4, ::InputMode>                           mLastInputMode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomInputZoneMapper() /*override*/ = default;

    virtual void setMapping(
        ::InputEventQueue&      eventQueue,
        ::BindingFactory const& bindingFactory,
        ::InputMapping const&   inputMapping,
        int                     controllerId
    ) /*override*/;

    virtual void clearMapping(int controllerId) /*override*/;

    virtual bool
    tick(::InputEventQueue& eventQueue, ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> const&) /*override*/;

    virtual void clearInputDeviceQueue() /*override*/;

    virtual ::InputMode getInputMode() const /*override*/;

    virtual void render(::InputRenderContext& context) const /*override*/;

    virtual void setWindowSize(int width, int height) /*override*/;

    virtual void changeControllerId(int oldId, int newId) /*override*/;
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

    MCAPI bool $tick(::InputEventQueue& eventQueue, ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> const&);

    MCFOLD void $clearInputDeviceQueue();

    MCAPI ::InputMode $getInputMode() const;

    MCFOLD void $render(::InputRenderContext& context) const;

    MCFOLD void $setWindowSize(int width, int height);

    MCAPI void $changeControllerId(int oldId, int newId);
    // NOLINTEND
};
#else // @header-generator platform
class CustomInputZoneMapper {};
#endif // @header-generator platform
#endif // @header-generator platform
