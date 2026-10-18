#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputDeviceMapper.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/FocusImpact.h"

// auto generated forward declare list
// clang-format off
class BindingFactory;
class InputEventQueue;
struct ControllerIDtoClientMap;
struct InputMapping;
// clang-format on

class KeyboardMapper : public ::InputDeviceMapper {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputDeviceMapper.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/FocusImpact.h"

// auto generated forward declare list
// clang-format off
class BindingFactory;
class InputEventQueue;
struct ControllerIDtoClientMap;
struct InputMapping;
// clang-format on

class KeyboardMapper : public ::InputDeviceMapper {
#else // @header-generator platform
class KeyboardMapper {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // KeyboardMapper inner types declare
    // clang-format off
    struct KeyboardKeyButtonDetails;
    struct KeyboardMappingData;
    // clang-format on

    // KeyboardMapper inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct KeyboardKeyButtonDetails {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>          nameId;
        ::ll::TypedStorage<1, 1, ::FocusImpact> focusImpact;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct KeyboardKeyButtonDetails {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>          nameId;
        ::ll::TypedStorage<1, 1, ::FocusImpact> focusImpact;
        // NOLINTEND
    };
#else // @header-generator platform
    struct KeyboardKeyButtonDetails {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct KeyboardMappingData {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 24, std::multimap<int, KeyboardMapper::KeyboardKeyButtonDetails>> mKeyboardKeyToButtonDetailsMap;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        KeyboardMappingData& operator=(KeyboardMappingData const&);
        KeyboardMappingData(KeyboardMappingData const&);
    };

    using KeyToButtonDetailsMap = std::multimap<int, KeyboardMapper::KeyboardKeyButtonDetails>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<int, KeyboardMapper::KeyboardMappingData>> mPerIdMappings;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~KeyboardMapper();

    virtual void setMapping(::InputEventQueue&, ::BindingFactory const&, ::InputMapping const&, int);

    virtual void clearMapping(int);

    virtual void clearInputDeviceQueue();

    virtual bool tick(::InputEventQueue&, ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>> const&);

    virtual ::InputMode getInputMode() const;

    virtual void changeControllerId(int, int);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI KeyboardMapper();
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

    MCNAPI void $changeControllerId(int, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct KeyboardMappingData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::multimap<int, ::KeyboardMapper::KeyboardKeyButtonDetails>>
            mKeyboardKeyToButtonDetailsMap;
        // NOLINTEND
    };

    using KeyboardKeyId = int;

    using KeyToButtonDetailsMap = ::std::multimap<int, ::KeyboardMapper::KeyboardKeyButtonDetails>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::KeyboardMapper::KeyboardMappingData>> mPerIdMappings;
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

    virtual void clearInputDeviceQueue() /*override*/;

    virtual bool tick(
        ::InputEventQueue&                                              eventQueue,
        ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> const& map
    ) /*override*/;

    virtual ::InputMode getInputMode() const /*override*/;

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

    MCAPI void $clearInputDeviceQueue();

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
    struct KeyboardMappingData {};
#endif // @header-generator platform
#endif // @header-generator platform
};
