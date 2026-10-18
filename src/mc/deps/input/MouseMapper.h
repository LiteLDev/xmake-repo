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
struct ControllerIDtoClientMap;
struct InputMapping;
// clang-format on

class MouseMapper : public ::InputDeviceMapper {
public:
    // MouseMapper inner types define
    using MouseButtonToButtonMap = std::unordered_multimap<int, uint>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                 mYAxisInversionFactor;
    ::ll::TypedStorage<8, 40, std::unordered_multimap<int, uint>> mMouseButtonToButtonIdMap;
    ::ll::TypedStorage<8, 24, std::vector<uint>>                  mMouseWheelUpButtonIds;
    ::ll::TypedStorage<8, 24, std::vector<uint>>                  mMouseWheelDownButtonIds;
    ::ll::TypedStorage<4, 4, int>                                 mPrimaryGameControllerId;
    ::ll::UntypedStorage<8, 48>                                   mIsClientUsingMouseInputMode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MouseMapper();

    virtual void setMapping(::InputEventQueue&, ::BindingFactory const&, ::InputMapping const&, int);

    virtual void clearMapping(int);

    virtual void clearInputDeviceQueue();

    virtual bool tick(::InputEventQueue&, ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>> const&);

    virtual ::InputMode getInputMode() const;

    virtual void getCursorPos(float&, float&) const;

    virtual void changeControllerId(int, int);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MouseMapper();
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

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setMapping(::InputEventQueue&, ::BindingFactory const&, ::InputMapping const&, int);

    MCNAPI void $clearMapping(int);

    MCNAPI void $clearInputDeviceQueue();

    MCNAPI bool $tick(::InputEventQueue&, ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>> const&);

    MCNAPI ::InputMode $getInputMode() const;

    MCNAPI void $getCursorPos(float&, float&) const;

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
struct ControllerIDtoClientMap;
struct InputMapping;
// clang-format on

class MouseMapper : public ::InputDeviceMapper {
public:
    // MouseMapper inner types define
    using MouseButtonId = int;

    using MouseButtonToButtonMap = ::std::unordered_multimap<int, uint>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                   mYAxisInversionFactor;
    ::ll::TypedStorage<8, 64, ::std::unordered_multimap<int, uint>> mMouseButtonToButtonIdMap;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                  mMouseWheelUpButtonIds;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                  mMouseWheelDownButtonIds;
    ::ll::TypedStorage<4, 4, int>                                   mPrimaryGameControllerId;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>              mIsClientUsingMouseInputMode;
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

    virtual void clearInputDeviceQueue() /*override*/;

    virtual ::InputMode getInputMode() const /*override*/;

    virtual void getCursorPos(float& xCursor, float& yCursor) const /*override*/;

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

    MCAPI bool
    $tick(::InputEventQueue& eventQueue, ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> const& map);

    MCAPI void $clearInputDeviceQueue();

    MCFOLD ::InputMode $getInputMode() const;

    MCAPI void $getCursorPos(float& xCursor, float& yCursor) const;

    MCAPI void $changeControllerId(int oldId, int newId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class MouseMapper {};
#endif // @header-generator platform
#endif // @header-generator platform
